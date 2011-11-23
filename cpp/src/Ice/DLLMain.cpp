// **********************************************************************
//
// Copyright (c) 2003-2011 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#include <Ice/ImplicitContextI.h>
#include <Ice/Service.h>

extern "C" BOOL WINAPI _CRT_INIT(HINSTANCE, DWORD, LPVOID);

extern "C"
{

BOOL WINAPI
#ifdef __BCPLUSPLUS__
DllMain(HINSTANCE hDLL, DWORD reason, LPVOID reserved)
{
#else
ice_DLL_Main(HINSTANCE hDLL, DWORD reason, LPVOID reserved)
{
    //
    // During ATTACH, we must call _CRT_INIT first.
    //
    if(reason == DLL_PROCESS_ATTACH || reason == DLL_THREAD_ATTACH)
    {
        if(!_CRT_INIT(hDLL, reason, reserved))
        {
            return FALSE;
        }
    }
#endif

    if(reason == DLL_PROCESS_ATTACH)
    {
        Ice::Service::setModuleHandle(hDLL);
    }
    else if(reason == DLL_THREAD_DETACH)
    {
        Ice::ImplicitContextI::cleanupThread();
    }

#ifndef __BCPLUSPLUS__
    //
    // During DETACH, we must call _CRT_INIT last.
    //
    if(reason == DLL_PROCESS_DETACH || reason == DLL_THREAD_DETACH)
    {
        if(!_CRT_INIT(hDLL, reason, reserved))
        {
            return FALSE;
        }
    }
#endif

    return TRUE;
}

}