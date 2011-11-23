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

#ifndef ICE_SSL_JANITORS_H
#define ICE_SSL_JANITORS_H

#include <IceUtil/Config.h>
#include <openssl/ssl.h>

namespace IceSSL
{

class RSAJanitor
{
public:

    RSAJanitor(RSA*);
    ~RSAJanitor();

    void clear();
    RSA* get() const;

private:

    RSA* _rsa;
};

class EVP_PKEYJanitor
{
public:

    EVP_PKEYJanitor(EVP_PKEY*);
    ~EVP_PKEYJanitor();

    void clear();
    EVP_PKEY* get() const;

private:

    EVP_PKEY* _evp_pkey;
};

class X509_REQJanitor
{
public:

    X509_REQJanitor(X509_REQ*);
    ~X509_REQJanitor();

    void clear();
    X509_REQ* get() const;

private:

    X509_REQ* _x509_req;
};

class X509Janitor
{
public:

    X509Janitor(X509*);
    ~X509Janitor();

    void clear();
    X509* get() const;

private:

    X509* _x509;
};

class BIOJanitor
{
public:

    BIOJanitor(BIO*);
    ~BIOJanitor();

    void clear();
    BIO* get() const;

private:

    BIO* _bio;
};

}

#endif