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

#include <Ice/RouterInfo.h>
#include <Ice/Router.h>
#include <Ice/RoutingTable.h>
#include <Ice/LocalException.h>
#include <Ice/Functional.h>

using namespace std;
using namespace Ice;
using namespace IceInternal;

void IceInternal::incRef(RouterManager* p) { p->__incRef(); }
void IceInternal::decRef(RouterManager* p) { p->__decRef(); }

void IceInternal::incRef(RouterInfo* p) { p->__incRef(); }
void IceInternal::decRef(RouterInfo* p) { p->__decRef(); }

IceInternal::RouterManager::RouterManager() :
    _tableHint(_table.end())
{
}

void
IceInternal::RouterManager::destroy()
{
    IceUtil::Mutex::Lock sync(*this);

    for_each(_table.begin(), _table.end(), Ice::secondVoidMemFun<RouterPrx, RouterInfo>(&RouterInfo::destroy));

    _table.clear();
    _tableHint = _table.end();
}

RouterInfoPtr
IceInternal::RouterManager::get(const RouterPrx& rtr)
{
    if(!rtr)
    {
	return 0;
    }

    RouterPrx router = RouterPrx::uncheckedCast(rtr->ice_router(0)); // The router cannot be routed.

    IceUtil::Mutex::Lock sync(*this);

    map<RouterPrx, RouterInfoPtr>::iterator p = _table.end();
    
    if(_tableHint != _table.end())
    {
	if(_tableHint->first == router)
	{
	    p = _tableHint;
	}
    }
    
    if(p == _table.end())
    {
	p = _table.find(router);
    }

    if(p == _table.end())
    {
	_tableHint = _table.insert(_tableHint, make_pair(router, new RouterInfo(router)));
    }
    else
    {
	_tableHint = p;
    }

    return _tableHint->second;
}

IceInternal::RouterInfo::RouterInfo(const RouterPrx& router) :
    _router(router),
    _routingTable(new RoutingTable)
{
    assert(_router);
}

void
IceInternal::RouterInfo::destroy()
{
    IceUtil::Mutex::Lock sync(*this);

    _clientProxy = 0;
    _serverProxy = 0;
    _adapter = 0;
    _routingTable->clear();
}

bool
IceInternal::RouterInfo::operator==(const RouterInfo& rhs) const
{
    return _router == rhs._router;
}

bool
IceInternal::RouterInfo::operator!=(const RouterInfo& rhs) const
{
    return _router != rhs._router;
}

bool
IceInternal::RouterInfo::operator<(const RouterInfo& rhs) const
{
    return _router < rhs._router;
}

RouterPrx
IceInternal::RouterInfo::getRouter() const
{
    //
    // No mutex lock necessary, _router is immutable.
    //
    return _router;
}

ObjectPrx
IceInternal::RouterInfo::getClientProxy()
{
    IceUtil::Mutex::Lock sync(*this);
    
    if(!_clientProxy) // Lazy initialization.
    {
	_clientProxy = _router->getClientProxy();
	if(!_clientProxy)
	{
	    throw NoEndpointException(__FILE__, __LINE__);
	}
	_clientProxy = _clientProxy->ice_router(0); // The client proxy cannot be routed.
    }
    
    return _clientProxy;
}

void
IceInternal::RouterInfo::setClientProxy(const ObjectPrx& clientProxy)
{
    IceUtil::Mutex::Lock sync(*this);
    _clientProxy = clientProxy->ice_router(0); // The client proxy cannot be routed.
}

ObjectPrx
IceInternal::RouterInfo::getServerProxy()
{
    IceUtil::Mutex::Lock sync(*this);
    
    if(!_serverProxy) // Lazy initialization.
    {
	_serverProxy = _router->getServerProxy();
	if(!_serverProxy)
	{
	    throw NoEndpointException(__FILE__, __LINE__);
	}
	_serverProxy = _serverProxy->ice_router(0); // The server proxy cannot be routed.
    }
    
    return _serverProxy;
}

void
IceInternal::RouterInfo::setServerProxy(const ObjectPrx& serverProxy)
{
    IceUtil::Mutex::Lock sync(*this);
    _serverProxy = serverProxy->ice_router(0); // The server proxy cannot be routed.
}

void
IceInternal::RouterInfo::addProxy(const ObjectPrx& proxy)
{
    //
    // No mutex lock necessary, _routingTable is immutable, and
    // RoutingTable is mutex protected.
    //
    if(_routingTable->add(proxy)) // Only add the proxy to the router if it's not already in the routing table.
    {
	_router->addProxy(proxy);
    }
}

void
IceInternal::RouterInfo::setAdapter(const ObjectAdapterPtr& adapter)
{
    IceUtil::Mutex::Lock sync(*this);
    _adapter = adapter;
}

ObjectAdapterPtr
IceInternal::RouterInfo::getAdapter() const
{
    IceUtil::Mutex::Lock sync(*this);
    return _adapter;
}