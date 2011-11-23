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

#include <Parser.h>

using namespace std;

//
// The current bison/flex parser
//
Parser* parser = 0;

Parser::Parser()
{
}

Parser::~Parser()
{
}

Complex::NodePtr
Parser::parse(const string& commands, bool debug)
{
    extern int yydebug;
    yydebug = debug ? 1 : 0;

    _result = 0;
    _errors = 0;
    _buf = commands;
    assert(!_buf.empty());
    extern FILE* yyin;
    yyin = 0;

    assert(!parser);
    parser = this;
    yyparse();
    parser = 0;

    if(_errors)
    {
	return 0;
    }

    return _result;
}

void
Parser::error(const char* s)
{
    cerr << "error: " << s << endl;
    _errors++;
}

void
Parser::error(const std::string& s)
{
    error(s.c_str());
}

void
Parser::getInput(char* buf, int& result, int maxSize)
{
    if(!_buf.empty())
    {
#if defined(_MSC_VER) && !defined(_STLP_MSVC)
	// COMPILERBUG: Stupid Visual C++ defines min and max as macros
	result = _MIN(maxSize, static_cast<int>(_buf.length()));
#else
	result = min(maxSize, static_cast<int>(_buf.length()));
#endif
	strncpy(buf, _buf.c_str(), result);
	_buf.erase(0, result);
    }
    else
    {
	result = 0;
    }
}

void
Parser::setResult(const Complex::NodePtr& node)
{
    _result = node;
}