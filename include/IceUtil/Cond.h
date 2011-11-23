// **********************************************************************
//
// Copyright (c) 2003
// ZeroC, Inc.
// Billerica, MA, USA
//
// All Rights Reserved.
//
// Ice is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License version 2 as published by
// the Free Software Foundation.
//
// **********************************************************************

#ifndef ICE_UTIL_COND_H
#define ICE_UTIL_COND_H

#include <IceUtil/Config.h>
#include <IceUtil/Time.h>
#include <IceUtil/ThreadException.h>

#ifdef _WIN32
//
// Needed for implementation under WIN32.
//
#    include <IceUtil/Mutex.h>
//
// See member-template note for waitImpl & timedWaitImpl.
//
#    include <IceUtil/RecMutex.h>
#endif

namespace IceUtil
{

//
// Forward declaration (for friend declarations).
//
template <class T> class Monitor;
class RecMutex;
class Mutex;

#ifdef _WIN32
//
// Needed for implementation.
//
class Semaphore
{
public:

    Semaphore(long = 0);
    ~Semaphore();

    void wait() const;
    bool timedWait(const Time&) const;
    void post(int = 1) const;

private:

    mutable HANDLE _sem;
};
#endif

//
// Condition variable implementation. Conforms to the same semantics
// as a POSIX threads condition variable.
//
class ICE_UTIL_API Cond : public noncopyable
{
public:

    Cond();
    ~Cond();

    //
    // signal restarts one of the threads that are waiting on the
    // condition variable cond.  If no threads are waiting on cond,
    // nothing happens. If several threads are waiting on cond,
    // exactly one is restarted, but it is not specified which.
    //
    void signal();

    //
    // broadcast restarts all the threads that are waiting on the
    // condition variable cond. Nothing happens if no threads are
    // waiting on cond.
    //
    void broadcast();

    //
    // MSVC doesn't support out-of-class definitions of member
    // templates. See KB Article Q241949 for details.
    //

    //
    // wait atomically unlocks the mutex and waits for the condition
    // variable to be signaled. Before returning to the calling thread
    // the mutex is reaquired.
    //
    template <typename Lock> inline void
    wait(const Lock& lock) const
    {
	waitImpl(lock._mutex);
    }

    //
    // wait atomically unlocks the mutex and waits for the condition
    // variable to be signaled for up to the given timeout. Before
    // returning to the calling thread the mutex is reaquired. Returns
    // true if the condition variable was signaled, false on a
    // timeout.
    //
    template <typename Lock> inline bool
    timedWait(const Lock& lock, const Time& timeout) const
    {
	return timedWaitImpl(lock._mutex, timeout);
    }

private:

    friend class Monitor<Mutex>;
    friend class Monitor<RecMutex>;

    //
    // The Monitor implementation uses waitImpl & timedWaitImpl.
    //
#ifdef _WIN32

    //
    // For some reason under WIN32 with VC6 using a member-template
    // for waitImpl & timedWaitImpl results in a link error for
    // RecMutex.
    //
/*
    template <typename M> void
    waitImpl(const M& mutex) const
    {
        preWait();

        typedef typename M::LockState LockState;

        LockState state;
        mutex.unlock(state);

        try
        {
            dowait(-1);
            mutex.lock(state);
        }
        catch(...)
        {
            mutex.lock(state);
            throw;
        }
    }
    template <typename M> bool
    timedWaitImpl(const M& mutex, const Time& timeout) const
    {
        preWait();

        typedef typename M::LockState LockState;

        LockState state;
        mutex.unlock(state);

        try
        {
            bool rc = dowait(timeout);
            mutex.lock(state);
            return rc;
        }
        catch(...)
        {
            mutex.lock(state);
            throw;
        }
    }
 */

    void
    waitImpl(const RecMutex& mutex) const
    {
	preWait();

	RecMutex::LockState state;
	mutex.unlock(state);

	try
	{
	    dowait();
	    mutex.lock(state);
	}
	catch(...)
	{
	    mutex.lock(state);
	    throw;
	}
    }

    void
    waitImpl(const Mutex& mutex) const
    {
	preWait();

	Mutex::LockState state;
	mutex.unlock(state);

	try
	{
	    dowait();
	    mutex.lock(state);
	}
	catch(...)
	{
	    mutex.lock(state);
	    throw;
	}
    }
    
    bool
    timedWaitImpl(const RecMutex& mutex, const Time& timeout) const
    {
	preWait();

	RecMutex::LockState state;
	mutex.unlock(state);

	try
	{
	    bool rc = timedDowait(timeout);
	    mutex.lock(state);
	    return rc;
	}
	catch(...)
	{
	    mutex.lock(state);
	    throw;
	}
    }

    bool
    timedWaitImpl(const Mutex& mutex, const Time& timeout) const
    {
	preWait();

	Mutex::LockState state;
	mutex.unlock(state);

	try
	{
	    bool rc = timedDowait(timeout);
	    mutex.lock(state);
	    return rc;
	}
	catch(...)
	{
	    mutex.lock(state);
	    throw;
	}
    }

#else

    template <typename M> void waitImpl(const M&) const;
    template <typename M> bool timedWaitImpl(const M&, const Time&) const;

#endif

#ifdef _WIN32
    void wake(bool);
    void preWait() const;
    void postWait(bool) const;
    bool timedDowait(const Time&) const;
    void dowait() const;

    Mutex _internal;
    Semaphore _gate;
    Semaphore _queue;
    mutable long _blocked;
    mutable long _unblocked;
    mutable long _toUnblock;
#else
    mutable pthread_cond_t _cond;
#endif

};

#ifndef _WIN32
template <typename M> inline void
Cond::waitImpl(const M& mutex) const
{
    typedef typename M::LockState LockState;
    
    LockState state;
    mutex.unlock(state);
    int rc = pthread_cond_wait(&_cond, state.mutex);
    mutex.lock(state);
    
    if(rc != 0)
    {
	throw ThreadSyscallException(__FILE__, __LINE__);
    }
}

template <typename M> inline bool
Cond::timedWaitImpl(const M& mutex, const Time& timeout) const
{
    typedef typename M::LockState LockState;
    
    LockState state;
    mutex.unlock(state);
    
    timeval tv = Time::now() + timeout;
    timespec ts;
    ts.tv_sec = tv.tv_sec;
    ts.tv_nsec = tv.tv_usec*1000;
    int rc = pthread_cond_timedwait(&_cond, state.mutex, &ts);
    mutex.lock(state);
    
    if(rc != 0)
    {
	//
	// pthread_cond_timedwait returns ETIMEOUT in the event of a
	// timeout.
	//
	if(rc != ETIMEDOUT)
	{
	    throw ThreadSyscallException(__FILE__, __LINE__);
	}
	return false;
    }
    return true;
}
#endif

} // End namespace IceUtil

#endif