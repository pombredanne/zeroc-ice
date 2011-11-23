
/*  A Bison parser, made from Grammar.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	ICE_MODULE	257
#define	ICE_CLASS	258
#define	ICE_INTERFACE	259
#define	ICE_EXCEPTION	260
#define	ICE_STRUCT	261
#define	ICE_SEQUENCE	262
#define	ICE_DICTIONARY	263
#define	ICE_ENUM	264
#define	ICE_OUT	265
#define	ICE_EXTENDS	266
#define	ICE_IMPLEMENTS	267
#define	ICE_THROWS	268
#define	ICE_VOID	269
#define	ICE_BYTE	270
#define	ICE_BOOL	271
#define	ICE_SHORT	272
#define	ICE_INT	273
#define	ICE_LONG	274
#define	ICE_FLOAT	275
#define	ICE_DOUBLE	276
#define	ICE_STRING	277
#define	ICE_OBJECT	278
#define	ICE_LOCAL_OBJECT	279
#define	ICE_LOCAL	280
#define	ICE_CONST	281
#define	ICE_FALSE	282
#define	ICE_TRUE	283
#define	ICE_NONMUTATING	284
#define	ICE_IDEMPOTENT	285
#define	ICE_SCOPE_DELIMITER	286
#define	ICE_IDENTIFIER	287
#define	ICE_STRING_LITERAL	288
#define	ICE_INTEGER_LITERAL	289
#define	ICE_FLOATING_POINT_LITERAL	290
#define	ICE_IDENT_OP	291
#define	ICE_KEYWORD_OP	292

#line 1 "Grammar.y"


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

#include <Slice/GrammarUtil.h>
#include <IceUtil/UUID.h>

#ifdef _WIN32
// I get these warnings from some bison versions:
// warning C4102: 'yyoverflowlab' : unreferenced label
#   pragma warning( disable : 4102 )
// warning C4065: switch statement contains 'default' but no 'case' labels
#   pragma warning( disable : 4065 )
#endif

using namespace std;
using namespace Slice;

void
yyerror(const char* s)
{
    // yacc and recent versions of Bison use "syntax error" instead
    // of "parse error".

    if (strcmp(s, "parse error") == 0)
    {
	unit->error("syntax error");
    }
    else
    {
	unit->error(s);
    }
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		252
#define	YYFLAG		-32768
#define	YYNTBASE	50

#define YYTRANSLATE(x) ((unsigned)(x) <= 292 ? yytranslate[x] : 112)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    44,    48,     2,    45,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    41,    46,
    49,    47,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    39,     2,    40,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    42,     2,    43,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     6,     7,    12,    16,    19,    20,    22,    24,
    26,    28,    30,    32,    34,    36,    38,    40,    42,    44,
    46,    47,    54,    57,    60,    63,    64,    72,    75,    76,
    81,    85,    88,    89,    92,    94,    97,   100,   103,   104,
   111,   116,   120,   123,   124,   126,   129,   132,   135,   136,
   145,   148,   149,   152,   153,   158,   162,   165,   166,   168,
   171,   173,   175,   177,   180,   184,   188,   191,   195,   199,
   200,   206,   207,   213,   215,   217,   220,   223,   226,   227,
   235,   239,   241,   243,   246,   247,   252,   256,   259,   260,
   262,   266,   268,   270,   272,   279,   286,   295,   304,   307,
   310,   311,   318,   322,   324,   326,   328,   329,   331,   332,
   333,   336,   341,   345,   351,   354,   359,   362,   363,   365,
   368,   372,   374,   376,   378,   380,   382,   384,   386,   388,
   390,   393,   395,   397,   400,   403,   405,   409,   411,   413,
   414,   416,   418,   420,   422,   424,   426,   432,   437,   439,
   441,   443,   445,   447,   449,   451,   453,   455,   457,   459,
   461,   463,   465,   467,   469,   471,   473,   475,   477,   479,
   481,   483,   485,   487,   489,   491,   493
};

static const short yyrhs[] = {    52,
     0,    39,   107,    40,     0,     0,    51,    53,    41,    52,
     0,     1,    41,    52,     0,    51,    53,     0,     0,    54,
     0,    71,     0,    72,     0,    85,     0,    86,     0,    57,
     0,    58,     0,    65,     0,    66,     0,    94,     0,    95,
     0,    97,     0,   110,     0,     0,     3,    33,    55,    42,
    52,    43,     0,     6,    33,     0,     6,   111,     0,   108,
    56,     0,     0,   108,    56,    60,    59,    42,    61,    43,
     0,    12,   104,     0,     0,    51,    63,    41,    61,     0,
     1,    41,    61,     0,    51,    63,     0,     0,   105,    33,
     0,    77,     0,     7,    33,     0,     7,   111,     0,   108,
    64,     0,     0,   108,    64,    67,    42,    68,    43,     0,
    51,    69,    41,    68,     0,     1,    41,    68,     0,    51,
    69,     0,     0,    77,     0,     4,    33,     0,     4,   111,
     0,   108,    70,     0,     0,   108,    70,    74,    75,    73,
    42,    76,    43,     0,    12,   104,     0,     0,    13,    88,
     0,     0,    51,    83,    41,    76,     0,     1,    41,    76,
     0,    51,    83,     0,     0,    62,     0,   105,   111,     0,
   105,     0,   105,     0,    15,     0,    78,    37,     0,    30,
    78,    37,     0,    31,    78,    37,     0,    78,    38,     0,
    30,    78,    38,     0,    31,    78,    38,     0,     0,    79,
   102,    44,    81,   103,     0,     0,    79,     1,    44,    82,
   103,     0,    77,     0,    80,     0,     5,    33,     0,     5,
   111,     0,   108,    84,     0,     0,   108,    84,    89,    87,
    42,    90,    43,     0,   104,    45,    88,     0,   104,     0,
    24,     0,    12,    88,     0,     0,    51,    91,    41,    90,
     0,     1,    41,    90,     0,    51,    91,     0,     0,    80,
     0,    93,    45,    92,     0,    93,     0,   104,     0,   111,
     0,   108,     8,    46,   105,    47,    33,     0,   108,     8,
    46,   105,    47,   111,     0,   108,     9,    46,   105,    45,
   105,    47,    33,     0,   108,     9,    46,   105,    45,   105,
    47,   111,     0,    10,    33,     0,    10,   111,     0,     0,
   108,    96,    98,    42,    99,    43,     0,   100,    45,    99,
     0,   100,     0,    33,     0,   111,     0,     0,    11,     0,
     0,     0,   101,    62,     0,   102,    45,   101,    62,     0,
   101,   105,   111,     0,   102,    45,   101,   105,   111,     0,
   101,   105,     0,   102,    45,   101,   105,     0,    14,    92,
     0,     0,    33,     0,    32,    33,     0,   104,    32,    33,
     0,    16,     0,    17,     0,    18,     0,    19,     0,    20,
     0,    21,     0,    22,     0,    23,     0,    24,     0,    24,
    48,     0,    25,     0,   104,     0,   104,    48,     0,    34,
   106,     0,    34,     0,   106,    45,   107,     0,   106,     0,
    26,     0,     0,    35,     0,    36,     0,   104,     0,    34,
     0,    28,     0,    29,     0,    27,   105,    33,    49,   109,
     0,    27,   105,    49,   109,     0,     3,     0,     4,     0,
     5,     0,     6,     0,     7,     0,     8,     0,     9,     0,
    10,     0,    11,     0,    12,     0,    13,     0,    14,     0,
    15,     0,    16,     0,    17,     0,    18,     0,    19,     0,
    20,     0,    21,     0,    22,     0,    23,     0,    24,     0,
    25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
    30,     0,    31,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   103,   111,   115,   124,   133,   137,   141,   149,   153,   157,
   161,   165,   169,   173,   177,   181,   185,   189,   193,   197,
   206,   219,   229,   233,   244,   254,   269,   279,   287,   296,
   305,   308,   312,   320,   333,   339,   343,   354,   364,   378,
   398,   407,   410,   414,   422,   428,   432,   443,   456,   476,
   486,   520,   529,   533,   542,   551,   554,   558,   566,   589,
   611,   637,   638,   647,   658,   669,   680,   691,   702,   718,
   724,   733,   739,   753,   754,   760,   764,   775,   789,   804,
   814,   849,   884,   894,   898,   907,   916,   919,   923,   931,
   937,   944,   956,   968,   979,   987,  1001,  1010,  1025,  1029,
  1040,  1049,  1068,  1074,  1082,  1094,  1101,  1111,  1117,  1128,
  1131,  1144,  1157,  1169,  1181,  1192,  1208,  1212,  1221,  1224,
  1230,  1243,  1247,  1251,  1255,  1259,  1263,  1267,  1271,  1275,
  1279,  1283,  1287,  1306,  1347,  1353,  1361,  1368,  1380,  1386,
  1397,  1407,  1417,  1446,  1454,  1462,  1475,  1482,  1494,  1497,
  1500,  1503,  1506,  1509,  1512,  1515,  1518,  1521,  1524,  1527,
  1530,  1533,  1536,  1539,  1542,  1545,  1548,  1551,  1554,  1557,
  1560,  1563,  1566,  1569,  1572,  1575,  1578
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","ICE_MODULE",
"ICE_CLASS","ICE_INTERFACE","ICE_EXCEPTION","ICE_STRUCT","ICE_SEQUENCE","ICE_DICTIONARY",
"ICE_ENUM","ICE_OUT","ICE_EXTENDS","ICE_IMPLEMENTS","ICE_THROWS","ICE_VOID",
"ICE_BYTE","ICE_BOOL","ICE_SHORT","ICE_INT","ICE_LONG","ICE_FLOAT","ICE_DOUBLE",
"ICE_STRING","ICE_OBJECT","ICE_LOCAL_OBJECT","ICE_LOCAL","ICE_CONST","ICE_FALSE",
"ICE_TRUE","ICE_NONMUTATING","ICE_IDEMPOTENT","ICE_SCOPE_DELIMITER","ICE_IDENTIFIER",
"ICE_STRING_LITERAL","ICE_INTEGER_LITERAL","ICE_FLOATING_POINT_LITERAL","ICE_IDENT_OP",
"ICE_KEYWORD_OP","'['","']'","';'","'{'","'}'","')'","','","'<'","'>'","'*'",
"'='","start","meta_data","definitions","definition","module_def","@1","exception_id",
"exception_decl","exception_def","@2","exception_extends","exception_exports",
"type_id","exception_export","struct_id","struct_decl","struct_def","@3","struct_exports",
"struct_export","class_id","class_decl","class_def","@4","class_extends","implements",
"class_exports","data_member","return_type","operation_preamble","operation",
"@5","@6","class_export","interface_id","interface_decl","interface_def","@7",
"interface_list","interface_extends","interface_exports","interface_export",
"exception_list","exception","sequence_def","dictionary_def","enum_id","enum_def",
"@8","enumerator_list","enumerator","out_qualifier","parameters","throws","scoped_name",
"type","string_literal","string_list","local_qualifier","const_initializer",
"const_def","keyword", NULL
};
#endif

static const short yyr1[] = {     0,
    50,    51,    51,    52,    52,    52,    52,    53,    53,    53,
    53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
    55,    54,    56,    56,    57,    59,    58,    60,    60,    61,
    61,    61,    61,    62,    63,    64,    64,    65,    67,    66,
    68,    68,    68,    68,    69,    70,    70,    71,    73,    72,
    74,    74,    75,    75,    76,    76,    76,    76,    77,    77,
    77,    78,    78,    79,    79,    79,    79,    79,    79,    81,
    80,    82,    80,    83,    83,    84,    84,    85,    87,    86,
    88,    88,    88,    89,    89,    90,    90,    90,    90,    91,
    92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
    98,    97,    99,    99,   100,   100,   100,   101,   101,   102,
   102,   102,   102,   102,   102,   102,   103,   103,   104,   104,
   104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
   105,   105,   105,   105,   106,   106,   107,   107,   108,   108,
   109,   109,   109,   109,   109,   109,   110,   110,   111,   111,
   111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
   111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
   111,   111,   111,   111,   111,   111,   111
};

static const short yyr2[] = {     0,
     1,     3,     0,     4,     3,     2,     0,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     0,     6,     2,     2,     2,     0,     7,     2,     0,     4,
     3,     2,     0,     2,     1,     2,     2,     2,     0,     6,
     4,     3,     2,     0,     1,     2,     2,     2,     0,     8,
     2,     0,     2,     0,     4,     3,     2,     0,     1,     2,
     1,     1,     1,     2,     3,     3,     2,     3,     3,     0,
     5,     0,     5,     1,     1,     2,     2,     2,     0,     7,
     3,     1,     1,     2,     0,     4,     3,     2,     0,     1,
     3,     1,     1,     1,     6,     6,     8,     8,     2,     2,
     0,     6,     3,     1,     1,     1,     0,     1,     0,     0,
     2,     4,     3,     5,     2,     4,     2,     0,     1,     2,
     3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     2,     1,     1,     2,     2,     1,     3,     1,     1,     0,
     1,     1,     1,     1,     1,     1,     5,     4,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     0,
     0,     0,   140,     1,     0,   136,   138,     0,     0,   139,
     0,     6,     8,    13,    14,    15,    16,     9,    10,    11,
    12,    17,    18,    19,     0,    20,     5,   135,     0,     2,
    21,   122,   123,   124,   125,   126,   127,   128,   129,   130,
   132,     0,   119,   133,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    25,    38,    48,    78,   101,   137,     0,
   131,   120,     0,   134,     0,     0,     4,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   177,    46,    47,    76,    77,
    23,    24,    36,    37,     0,     0,    99,   100,     0,    26,
     0,     0,    54,     0,    79,     0,     0,   121,     0,   145,
   146,   144,   141,   142,   143,   148,     0,     0,    28,     0,
     0,    51,     0,    49,    83,    84,    82,     0,   107,     0,
   147,     0,     0,     0,     0,     0,     0,    53,     0,     0,
     0,   105,     0,   104,   106,    22,    95,    96,     0,     0,
     0,     0,     0,    59,    43,    45,    61,    40,     0,    81,
     0,     0,     0,   102,   107,     0,     0,    32,    35,    27,
    42,     0,    34,    60,     0,     0,     0,     0,    63,     0,
     0,     0,     0,    90,    88,    62,    80,   103,    97,    98,
    31,     0,    41,     0,    74,    75,    57,    61,    50,    87,
     0,     0,    64,    67,     0,   108,     0,     0,     0,    30,
    56,     0,    65,    68,    66,    69,    72,   111,   115,    70,
   109,    86,    55,   118,   113,   118,     0,     0,    73,    71,
   112,   116,   117,    92,    93,    94,   114,     0,    91,     0,
     0,     0
};

static const short yydefgoto[] = {   250,
     3,     4,    12,    13,    60,    54,    14,    15,   130,   110,
   162,   164,   178,    55,    16,    17,   111,   147,   165,    56,
    18,    19,   149,   113,   134,   187,   166,   192,   193,   194,
   236,   234,   207,    57,    20,    21,   138,   136,   115,   173,
   195,   243,   244,    22,    23,    58,    24,   116,   153,   154,
   217,   218,   239,    44,   196,     7,     8,    25,   126,    26,
   155
};

static const short yypact[] = {   306,
    24,    37,    33,-32768,    13,    37,   -15,    45,    46,-32768,
   714,    40,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   162,-32768,-32768,-32768,    37,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    43,
-32768,    57,-32768,    32,    34,    13,   410,   441,   472,   503,
    51,    52,   534,     0,    58,    -4,     3,-32768,-32768,    59,
-32768,-32768,    71,-32768,    56,   124,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   714,   714,-32768,-32768,    -5,-32768,
    64,    -5,    79,    42,-32768,    65,   295,-32768,   124,-32768,
-32768,-32768,-32768,-32768,    87,-32768,    73,    77,    87,    84,
   122,    87,    42,-32768,-32768,-32768,    41,    85,   565,    86,
-32768,   596,   714,   254,    90,   714,    91,-32768,   106,    42,
   192,-32768,   108,    83,-32768,-32768,-32768,-32768,   102,   123,
   714,   120,   122,-32768,   132,-32768,   627,-32768,   226,-32768,
   133,   677,   135,-32768,   565,   658,   254,   138,-32768,-32768,
-32768,   122,-32768,-32768,   139,   677,   141,   192,-32768,   696,
   696,    -3,    92,-32768,   140,-32768,-32768,-32768,-32768,-32768,
-32768,   254,-32768,   226,-32768,-32768,   144,   343,-32768,-32768,
    39,    50,-32768,-32768,    89,-32768,   714,   -12,   192,-32768,
-32768,   226,-32768,-32768,-32768,-32768,-32768,-32768,   627,-32768,
   165,-32768,-32768,   168,-32768,   168,   714,   379,-32768,-32768,
-32768,   627,-32768,   143,    87,-32768,-32768,   379,-32768,   186,
   189,-32768
};

static const short yypgoto[] = {-32768,
  -120,     1,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -152,  -191,-32768,-32768,-32768,-32768,-32768,  -119,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  -167,  -132,  -121,-32768,     4,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -72,-32768,  -178,
-32768,   -57,-32768,-32768,-32768,-32768,-32768,-32768,    19,-32768,
   -36,-32768,   -39,   -61,   -11,   193,   169,-32768,    81,-32768,
   -46
};


#define	YYLAST		747


static const short yytable[] = {    45,
    98,   100,   102,   104,   125,    27,   108,   112,   -52,   210,
   146,   109,    -7,     1,   114,    -3,    -3,    -3,    -3,    -3,
    -3,    -3,    -3,   161,   201,   228,    42,    43,   179,    29,
   172,   230,   231,   213,   214,     9,   221,   -52,    -3,    -3,
   232,   -29,   146,   181,   -85,   241,    67,   129,   186,   220,
   132,     2,   137,   205,   233,    -7,   161,   125,    10,    11,
   148,   146,   203,    63,     5,   135,    65,   172,   211,   212,
     6,   137,    63,    42,    43,   223,   224,   170,    31,    64,
    46,   161,    66,   186,    30,   150,   225,   226,   137,    62,
    61,   133,   215,   127,   128,   158,   105,   106,   172,   -39,
   117,   186,   216,   118,   119,   131,   139,  -109,  -109,  -109,
  -109,  -109,  -109,  -109,  -109,  -109,  -109,   140,    63,   142,
   184,   143,   145,  -109,  -109,   144,   151,   175,   156,   200,
   163,   159,   227,   168,   167,  -110,  -110,    -3,    -3,    -3,
    -3,    -3,    -3,    -3,    -3,    -3,    -3,   169,   176,   167,
   174,   120,   121,    -3,    -3,    42,    43,   122,   123,   124,
     2,   184,   180,   177,   -44,    47,    48,    49,    50,    51,
    52,    53,   182,   188,   208,   216,   245,   197,   202,   204,
   219,   238,   235,   209,   222,   251,   245,   248,   252,   206,
   249,   246,   171,   198,   237,   247,   240,    59,    28,   141,
     0,   246,     0,     0,     0,   229,    -3,    -3,    -3,    -3,
    -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,     0,     0,
     0,    -3,    -3,    -3,    -3,   242,   185,     0,     0,     0,
     2,     0,     0,     0,   -89,     0,     0,     0,     0,     0,
    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
    -3,     0,     0,     0,   160,    -3,    -3,    -3,    -3,     0,
     0,     0,     0,     0,     2,     0,     0,     0,   -58,    -3,
    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,
     0,     0,     0,     0,     0,    -3,    -3,     0,     0,     0,
     0,     0,     2,     0,     0,     1,   -33,    -3,    -3,    -3,
    -3,    -3,    -3,    -3,    -3,    -7,     1,     0,    -3,    -3,
    -3,    -3,    -3,    -3,    -3,    -3,     0,     0,     0,     0,
    -3,    -3,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    -3,    -3,     2,     0,     0,     0,    -7,     0,     0,
     0,     0,     0,     0,     2,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,     0,   183,     0,     0,     0,   -62,
   -62,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    42,    43,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,     0,    97,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,     0,    99,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,     0,   101,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,     0,   103,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,     0,   107,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,     0,   152,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,     0,   157,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,     0,   183,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,     0,
   199,   189,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,     0,     0,     0,     0,   190,   191,    42,    43,
   189,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,     0,     0,     0,     0,     0,     0,    42,    43,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
     0,     0,     0,     0,     0,    42,    43
};

static const short yycheck[] = {    11,
    47,    48,    49,    50,    66,     5,    53,    12,    13,   188,
   131,    12,     0,     1,    12,     3,     4,     5,     6,     7,
     8,     9,    10,   144,   177,   217,    32,    33,   161,    45,
   151,    44,    45,    37,    38,     3,   204,    42,    26,    27,
   219,    42,   163,   163,    42,   237,    46,   109,   169,   202,
   112,    39,   114,   186,   222,    43,   177,   119,    26,    27,
   133,   182,   182,    32,    41,    24,    33,   188,   190,   191,
    34,   133,    32,    32,    33,    37,    38,   150,    33,    48,
    41,   202,    49,   204,    40,    45,    37,    38,   150,    33,
    48,    13,     1,   105,   106,   142,    46,    46,   219,    42,
    42,   222,    11,    33,    49,    42,    42,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,   117,    32,    47,
   167,    45,     1,    32,    33,    42,    42,    45,    43,   176,
    41,   143,    44,    43,   146,    44,    45,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    42,    47,   161,
    43,    28,    29,    32,    33,    32,    33,    34,    35,    36,
    39,   208,    43,    41,    43,     4,     5,     6,     7,     8,
     9,    10,    41,    41,   186,    11,   238,    43,    41,    41,
    41,    14,   229,    43,    41,     0,   248,    45,     0,   186,
   248,   238,     1,   175,   231,   242,   236,    29,     6,   119,
    -1,   248,    -1,    -1,    -1,   217,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
    -1,    30,    31,    32,    33,   237,     1,    -1,    -1,    -1,
    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    -1,    -1,    -1,     1,    30,    31,    32,    33,    -1,
    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
    -1,    -1,    39,    -1,    -1,     1,    43,     3,     4,     5,
     6,     7,     8,     9,    10,     0,     1,    -1,     3,     4,
     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    26,    27,    39,    -1,    -1,    -1,    43,    -1,    -1,
    -1,    -1,    -1,    -1,    39,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,    37,
    38,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    -1,    33,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    -1,    33,     3,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    -1,    33,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    -1,    33,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    -1,    33,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    -1,    33,     3,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    -1,    33,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
    33,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
    -1,    -1,    -1,    -1,    -1,    32,    33
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/lib/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 104 "Grammar.y"
{
;
    break;}
case 2:
#line 112 "Grammar.y"
{
    yyval = yyvsp[-1];
;
    break;}
case 3:
#line 116 "Grammar.y"
{
    yyval = new StringListTok;
;
    break;}
case 4:
#line 125 "Grammar.y"
{
    StringListTokPtr metaData = StringListTokPtr::dynamicCast(yyvsp[-3]);
    ContainedPtr contained = ContainedPtr::dynamicCast(yyvsp[-2]);
    if(contained && !metaData->v.empty())
    {
	contained->setMetaData(metaData->v);
    }
;
    break;}
case 5:
#line 134 "Grammar.y"
{
    yyerrok;
;
    break;}
case 6:
#line 138 "Grammar.y"
{
    unit->error("`;' missing after definition");
;
    break;}
case 7:
#line 142 "Grammar.y"
{
;
    break;}
case 8:
#line 150 "Grammar.y"
{
    assert(yyvsp[0] == 0 || ModulePtr::dynamicCast(yyvsp[0]));
;
    break;}
case 9:
#line 154 "Grammar.y"
{
    assert(yyvsp[0] == 0 || ClassDeclPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 10:
#line 158 "Grammar.y"
{
    assert(yyvsp[0] == 0 || ClassDefPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 11:
#line 162 "Grammar.y"
{
    assert(yyvsp[0] == 0 || ClassDeclPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 12:
#line 166 "Grammar.y"
{
    assert(yyvsp[0] == 0 || ClassDefPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 13:
#line 170 "Grammar.y"
{
    assert(yyvsp[0] == 0);
;
    break;}
case 14:
#line 174 "Grammar.y"
{
    assert(yyvsp[0] == 0 || ExceptionPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 15:
#line 178 "Grammar.y"
{
    assert(yyvsp[0] == 0);
;
    break;}
case 16:
#line 182 "Grammar.y"
{
    assert(yyvsp[0] == 0 || StructPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 17:
#line 186 "Grammar.y"
{
    assert(yyvsp[0] == 0 || SequencePtr::dynamicCast(yyvsp[0]));
;
    break;}
case 18:
#line 190 "Grammar.y"
{
    assert(yyvsp[0] == 0 || DictionaryPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 19:
#line 194 "Grammar.y"
{
    assert(yyvsp[0] == 0 || EnumPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 20:
#line 198 "Grammar.y"
{
    assert(yyvsp[0] == 0 || ConstPtr::dynamicCast(yyvsp[0]));
;
    break;}
case 21:
#line 207 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    ModulePtr module = cont->createModule(ident->v);
    if(!module)
    {
	YYERROR; // Can't continue, jump to next yyerrok
    }
    cont->checkIntroduced(ident->v, module);
    unit->pushContainer(module);
    yyval = module;
;
    break;}
case 22:
#line 220 "Grammar.y"
{
    unit->popContainer();
    yyval = yyvsp[-3];
;
    break;}
case 23:
#line 230 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 24:
#line 234 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("keyword `" + ident->v + "' cannot be used as exception name");
    yyval = yyvsp[0];
;
    break;}
case 25:
#line 245 "Grammar.y"
{
    unit->error("exceptions cannot be forward declared");
    yyval = 0;
;
    break;}
case 26:
#line 255 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-2]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[-1]);
    ExceptionPtr base = ExceptionPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    ExceptionPtr ex = cont->createException(ident->v, base, local->v);
    if(!ex)
    {
	YYERROR; // Can't continue, jump to next yyerrok
    }
    cont->checkIntroduced(ident->v, ex);
    unit->pushContainer(ex);
    yyval = ex;
;
    break;}
case 27:
#line 270 "Grammar.y"
{
    unit->popContainer();
    yyval = yyvsp[-3];
;
    break;}
case 28:
#line 280 "Grammar.y"
{
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    ContainedPtr contained = cont->lookupException(scoped->v);
    cont->checkIntroduced(scoped->v);
    yyval = contained;
;
    break;}
case 29:
#line 288 "Grammar.y"
{
    yyval = 0;
;
    break;}
case 30:
#line 297 "Grammar.y"
{
    StringListTokPtr metaData = StringListTokPtr::dynamicCast(yyvsp[-3]);
    ContainedPtr contained = ContainedPtr::dynamicCast(yyvsp[-2]);
    if(contained && !metaData->v.empty())
    {
	contained->setMetaData(metaData->v);
    }
;
    break;}
case 31:
#line 306 "Grammar.y"
{
;
    break;}
case 32:
#line 309 "Grammar.y"
{
    unit->error("`;' missing after definition");
;
    break;}
case 33:
#line 313 "Grammar.y"
{
;
    break;}
case 34:
#line 321 "Grammar.y"
{
    TypePtr type = TypePtr::dynamicCast(yyvsp[-1]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    TypeStringTokPtr typestring = new TypeStringTok;
    typestring->v = make_pair(type, ident->v);
    yyval = typestring;
;
    break;}
case 36:
#line 340 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 37:
#line 344 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("keyword `" + ident->v + "' cannot be used as struct name");
    yyval = yyvsp[0];
;
    break;}
case 38:
#line 355 "Grammar.y"
{
    unit->error("structs cannot be forward declared");
    yyval = 0;
;
    break;}
case 39:
#line 365 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-1]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    StructPtr st = cont->createStruct(ident->v, local->v);
    if(!st)
    {
	YYERROR; // Can't continue, jump to next yyerrok
    }
    cont->checkIntroduced(ident->v, st);
    unit->pushContainer(st);
    yyval = st;
;
    break;}
case 40:
#line 379 "Grammar.y"
{
    unit->popContainer();
    yyval = yyvsp[-3];

    //
    // Empty structures are not allowed
    //
    StructPtr st = StructPtr::dynamicCast(yyval);
    assert(st);
    if(st->dataMembers().empty())
    {
    	unit->error("struct `" + st->name() + "' must have at least one member");
    }
;
    break;}
case 41:
#line 399 "Grammar.y"
{
    StringListTokPtr metaData = StringListTokPtr::dynamicCast(yyvsp[-3]);
    ContainedPtr contained = ContainedPtr::dynamicCast(yyvsp[-2]);
    if(contained && !metaData->v.empty())
    {
	contained->setMetaData(metaData->v);
    }
;
    break;}
case 42:
#line 408 "Grammar.y"
{
;
    break;}
case 43:
#line 411 "Grammar.y"
{
    unit->error("`;' missing after definition");
;
    break;}
case 44:
#line 415 "Grammar.y"
{
;
    break;}
case 46:
#line 429 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 47:
#line 433 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("keyword `" + ident->v + "' cannot be used as class name");
    yyval = yyvsp[0];
;
    break;}
case 48:
#line 444 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-1]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    ClassDeclPtr cl = cont->createClassDecl(ident->v, false, local->v);
    yyval = cl;
;
    break;}
case 49:
#line 457 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-3]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[-2]);
    ContainerPtr cont = unit->currentContainer();
    ClassDefPtr base = ClassDefPtr::dynamicCast(yyvsp[-1]);
    ClassListTokPtr bases = ClassListTokPtr::dynamicCast(yyvsp[0]);
    if(base)
    {
	bases->v.push_front(base);
    }
    ClassDefPtr cl = cont->createClassDef(ident->v, false, bases->v, local->v);
    if(!cl)
    {
	YYERROR; // Can't continue, jump to next yyerrok
    }
    cont->checkIntroduced(ident->v, cl);
    unit->pushContainer(cl);
    yyval = cl;
;
    break;}
case 50:
#line 477 "Grammar.y"
{
    unit->popContainer();
    yyval = yyvsp[-3];
;
    break;}
case 51:
#line 487 "Grammar.y"
{
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    TypeList types = cont->lookupType(scoped->v);
    yyval = 0;
    if(!types.empty())
    {
	ClassDeclPtr cl = ClassDeclPtr::dynamicCast(types.front());
	if(!cl)
	{
	    string msg = "`";
	    msg += scoped->v;
	    msg += "' is not a class";
	    unit->error(msg);
	}
	else
	{
	    ClassDefPtr def = cl->definition();
	    if(!def)
	    {
		string msg = "`";
		msg += scoped->v;
		msg += "' has been declared but not defined";
		unit->error(msg);
	    }
	    else
	    {
	    	cont->checkIntroduced(scoped->v);
		yyval = def;
	    }
	}
    }
;
    break;}
case 52:
#line 521 "Grammar.y"
{
    yyval = 0;
;
    break;}
case 53:
#line 530 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 54:
#line 534 "Grammar.y"
{
    yyval = new ClassListTok;
;
    break;}
case 55:
#line 543 "Grammar.y"
{
    StringListTokPtr metaData = StringListTokPtr::dynamicCast(yyvsp[-3]);
    ContainedPtr contained = ContainedPtr::dynamicCast(yyvsp[-2]);
    if(contained && !metaData->v.empty())
    {
	contained->setMetaData(metaData->v);
    }
;
    break;}
case 56:
#line 552 "Grammar.y"
{
;
    break;}
case 57:
#line 555 "Grammar.y"
{
    unit->error("`;' missing after definition");
;
    break;}
case 58:
#line 559 "Grammar.y"
{
;
    break;}
case 59:
#line 567 "Grammar.y"
{
    TypePtr type = TypeStringTokPtr::dynamicCast(yyvsp[0])->v.first;
    string name = TypeStringTokPtr::dynamicCast(yyvsp[0])->v.second;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    DataMemberPtr dm;
    if(cl)
    {
	dm = cl->createDataMember(name, type);
    }
    StructPtr st = StructPtr::dynamicCast(unit->currentContainer());
    if(st)
    {
	dm = st->createDataMember(name, type);
    }
    ExceptionPtr ex = ExceptionPtr::dynamicCast(unit->currentContainer());
    if(ex)
    {
	dm = ex->createDataMember(name, type);
    }
    unit->currentContainer()->checkIntroduced(name, dm);
    yyval = dm;
;
    break;}
case 60:
#line 590 "Grammar.y"
{
    TypePtr type = TypePtr::dynamicCast(yyvsp[-1]);
    string name = StringTokPtr::dynamicCast(yyvsp[0])->v;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    if(cl)
    {
	yyval = cl->createDataMember(name, type);
    }
    StructPtr st = StructPtr::dynamicCast(unit->currentContainer());
    if(st)
    {
	yyval = st->createDataMember(name, type);
    }
    ExceptionPtr ex = ExceptionPtr::dynamicCast(unit->currentContainer());
    if(ex)
    {
	yyval = ex->createDataMember(name, type);
    }
    assert(yyval);
    unit->error("keyword `" + name + "' cannot be used as data member name");
;
    break;}
case 61:
#line 612 "Grammar.y"
{
    TypePtr type = TypePtr::dynamicCast(yyvsp[0]);
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    if(cl)
    {
        yyval = cl->createDataMember(IceUtil::generateUUID(), type);
    }
    StructPtr st = StructPtr::dynamicCast(unit->currentContainer());
    if(st)
    {
	yyval = st->createDataMember(IceUtil::generateUUID(), type);
    }
    ExceptionPtr ex = ExceptionPtr::dynamicCast(unit->currentContainer());
    if(ex)
    {
	yyval = ex->createDataMember(IceUtil::generateUUID(), type);
    }
    assert(yyval);
    unit->error("missing data member name");
;
    break;}
case 63:
#line 639 "Grammar.y"
{
    yyval = 0;
;
    break;}
case 64:
#line 648 "Grammar.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    string name = StringTokPtr::dynamicCast(yyvsp[0])->v;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    assert(cl);
    OperationPtr op = cl->createOperation(name, returnType);
    cl->checkIntroduced(name, op);
    unit->pushContainer(op);
    yyval = op;
;
    break;}
case 65:
#line 659 "Grammar.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    string name = StringTokPtr::dynamicCast(yyvsp[0])->v;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    assert(cl);
    OperationPtr op = cl->createOperation(name, returnType, Operation::Nonmutating);
    cl->checkIntroduced(name, op);
    unit->pushContainer(op);
    yyval = op;
;
    break;}
case 66:
#line 670 "Grammar.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    string name = StringTokPtr::dynamicCast(yyvsp[0])->v;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    assert(cl);
    OperationPtr op = cl->createOperation(name, returnType, Operation::Idempotent);
    cl->checkIntroduced(name, op);
    unit->pushContainer(op);
    yyval = op;
;
    break;}
case 67:
#line 681 "Grammar.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    string name = StringTokPtr::dynamicCast(yyvsp[0])->v;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    assert(cl);
    OperationPtr op = cl->createOperation(name, returnType);
    unit->pushContainer(op);
    unit->error("keyword `" + name + "' cannot be used as operation name");
    yyval = op;
;
    break;}
case 68:
#line 692 "Grammar.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    string name = StringTokPtr::dynamicCast(yyvsp[0])->v;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    assert(cl);
    OperationPtr op = cl->createOperation(name, returnType, Operation::Nonmutating);
    unit->pushContainer(op);
    unit->error("keyword `" + name + "' cannot be used as operation name");
    yyval = op;
;
    break;}
case 69:
#line 703 "Grammar.y"
{
    TypePtr returnType = TypePtr::dynamicCast(yyvsp[-1]);
    string name = StringTokPtr::dynamicCast(yyvsp[0])->v;
    ClassDefPtr cl = ClassDefPtr::dynamicCast(unit->currentContainer());
    assert(cl);
    OperationPtr op = cl->createOperation(name, returnType, Operation::Idempotent);
    unit->pushContainer(op);
    unit->error("keyword `" + name + "' cannot be used as operation name");
    yyval = op;
;
    break;}
case 70:
#line 719 "Grammar.y"
{
    unit->popContainer();
    yyval = yyvsp[-2];
;
    break;}
case 71:
#line 724 "Grammar.y"
{
    OperationPtr op = OperationPtr::dynamicCast(yyvsp[-1]);
    ExceptionListTokPtr el = ExceptionListTokPtr::dynamicCast(yyvsp[0]);
    assert(el);
    if(op)
    {
        op->setExceptionList(el->v);
    }
;
    break;}
case 72:
#line 734 "Grammar.y"
{
    unit->popContainer();
    yyerrok;
;
    break;}
case 73:
#line 739 "Grammar.y"
{
    OperationPtr op = OperationPtr::dynamicCast(yyvsp[-1]);
    ExceptionListTokPtr el = ExceptionListTokPtr::dynamicCast(yyvsp[0]);
    assert(el);
    if(op)
    {
        op->setExceptionList(el->v);
    }
;
    break;}
case 76:
#line 761 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 77:
#line 765 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("keyword `" + ident->v + "' cannot be used as interface name");
    yyval = yyvsp[0];
;
    break;}
case 78:
#line 776 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-1]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    ClassDeclPtr cl = cont->createClassDecl(ident->v, true, local->v);
    cont->checkIntroduced(ident->v, cl);
    yyval = cl;
;
    break;}
case 79:
#line 790 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-2]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[-1]);
    ContainerPtr cont = unit->currentContainer();
    ClassListTokPtr bases = ClassListTokPtr::dynamicCast(yyvsp[0]);
    ClassDefPtr cl = cont->createClassDef(ident->v, true, bases->v, local->v);
    if(!cl)
    {
	YYERROR; // Can't continue, jump to next yyerrok
    }
    cont->checkIntroduced(ident->v, cl);
    unit->pushContainer(cl);
    yyval = cl;
;
    break;}
case 80:
#line 805 "Grammar.y"
{
    unit->popContainer();
    yyval = yyvsp[-3];
;
    break;}
case 81:
#line 815 "Grammar.y"
{
    ClassListTokPtr intfs = ClassListTokPtr::dynamicCast(yyvsp[0]);
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[-2]);
    ContainerPtr cont = unit->currentContainer();
    TypeList types = cont->lookupType(scoped->v);
    if(!types.empty())
    {
	ClassDeclPtr cl = ClassDeclPtr::dynamicCast(types.front());
	if(!cl || !cl->isInterface())
	{
	    string msg = "`";
	    msg += scoped->v;
	    msg += "' is not an interface";
	    unit->error(msg);
	}
	else
	{
	    ClassDefPtr def = cl->definition();
	    if(!def)
	    {
		string msg = "`";
		msg += scoped->v;
		msg += "' has been declared but not defined";
		unit->error(msg);
	    }
	    else
	    {
	    	cont->checkIntroduced(scoped->v);
		intfs->v.push_front(def);
	    }
	}
    }
    yyval = intfs;
;
    break;}
case 82:
#line 850 "Grammar.y"
{
    ClassListTokPtr intfs = new ClassListTok;
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    TypeList types = cont->lookupType(scoped->v);
    if(!types.empty())
    {
	ClassDeclPtr cl = ClassDeclPtr::dynamicCast(types.front());
	if(!cl || !cl->isInterface())
	{
	    string msg = "`";
	    msg += scoped->v;
	    msg += "' is not an interface";
	    unit->error(msg);
	}
	else
	{
	    ClassDefPtr def = cl->definition();
	    if(!def)
	    {
		string msg = "`";
		msg += scoped->v;
		msg += "' has been declared but not defined";
		unit->error(msg);
	    }
	    else
	    {
	    	cont->checkIntroduced(scoped->v);
		intfs->v.push_front(def);
	    }
	}
    }
    yyval = intfs;
;
    break;}
case 83:
#line 885 "Grammar.y"
{
    unit->error("illegal inheritance from type Object");
    yyval = new ClassListTok;
;
    break;}
case 84:
#line 895 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 85:
#line 899 "Grammar.y"
{
    yyval = new ClassListTok;
;
    break;}
case 86:
#line 908 "Grammar.y"
{
    StringListTokPtr metaData = StringListTokPtr::dynamicCast(yyvsp[-3]);
    ContainedPtr contained = ContainedPtr::dynamicCast(yyvsp[-2]);
    if(contained && !metaData->v.empty())
    {
	contained->setMetaData(metaData->v);
    }
;
    break;}
case 87:
#line 917 "Grammar.y"
{
;
    break;}
case 88:
#line 920 "Grammar.y"
{
    unit->error("`;' missing after definition");
;
    break;}
case 89:
#line 924 "Grammar.y"
{
;
    break;}
case 91:
#line 938 "Grammar.y"
{
    ExceptionPtr exception = ExceptionPtr::dynamicCast(yyvsp[-2]);
    ExceptionListTokPtr exceptionList = ExceptionListTokPtr::dynamicCast(yyvsp[0]);
    exceptionList->v.push_front(exception);
    yyval = exceptionList;
;
    break;}
case 92:
#line 945 "Grammar.y"
{
    ExceptionPtr exception = ExceptionPtr::dynamicCast(yyvsp[0]);
    ExceptionListTokPtr exceptionList = new ExceptionListTok;
    exceptionList->v.push_front(exception);
    yyval = exceptionList;
;
    break;}
case 93:
#line 957 "Grammar.y"
{
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    ExceptionPtr exception = cont->lookupException(scoped->v);
    if(!exception)
    {
	exception = cont->createException(IceUtil::generateUUID(), 0, false);
    }
    cont->checkIntroduced(scoped->v, exception);
    yyval = exception;
;
    break;}
case 94:
#line 969 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("keyword `" + ident->v + "' cannot be used as exception name");
    yyval = unit->currentContainer()->createException(IceUtil::generateUUID(), 0, false);
;
    break;}
case 95:
#line 980 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-5]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    TypePtr type = TypePtr::dynamicCast(yyvsp[-2]);
    ContainerPtr cont = unit->currentContainer();
    yyval = cont->createSequence(ident->v, type, local->v);
;
    break;}
case 96:
#line 988 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-5]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    TypePtr type = TypePtr::dynamicCast(yyvsp[-2]);
    ContainerPtr cont = unit->currentContainer();
    yyval = cont->createSequence(ident->v, type, local->v);
    unit->error("keyword `" + ident->v + "' cannot be used as sequence name");
;
    break;}
case 97:
#line 1002 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-7]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    TypePtr keyType = TypePtr::dynamicCast(yyvsp[-4]);
    TypePtr valueType = TypePtr::dynamicCast(yyvsp[-2]);
    ContainerPtr cont = unit->currentContainer();
    yyval = cont->createDictionary(ident->v, keyType, valueType, local->v);
;
    break;}
case 98:
#line 1011 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-7]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    TypePtr keyType = TypePtr::dynamicCast(yyvsp[-4]);
    TypePtr valueType = TypePtr::dynamicCast(yyvsp[-2]);
    ContainerPtr cont = unit->currentContainer();
    yyval = cont->createDictionary(ident->v, keyType, valueType, local->v);
    unit->error("keyword `" + ident->v + "' cannot be used as dictionary name");
;
    break;}
case 99:
#line 1026 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 100:
#line 1030 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("keyword `" + ident->v + "' cannot be used as enumeration name");
    yyval = yyvsp[0];
;
    break;}
case 101:
#line 1041 "Grammar.y"
{
    BoolTokPtr local = BoolTokPtr::dynamicCast(yyvsp[-1]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    EnumPtr en = cont->createEnum(ident->v, local->v);
    cont->checkIntroduced(ident->v, en);
    yyval = en;
;
    break;}
case 102:
#line 1050 "Grammar.y"
{
    EnumPtr en = EnumPtr::dynamicCast(yyvsp[-3]);
    if(en)
    {
	EnumeratorListTokPtr enumerators = EnumeratorListTokPtr::dynamicCast(yyvsp[-1]);
	if(enumerators->v.empty())
	{
	    unit->error("enum `" + en->name() + "' must have at least one enumerator");
	}
	en->setEnumerators(enumerators->v);
    }
    yyval = yyvsp[-3];
;
    break;}
case 103:
#line 1069 "Grammar.y"
{
    EnumeratorListTokPtr ens = EnumeratorListTokPtr::dynamicCast(yyvsp[-2]);
    ens->v.splice(ens->v.end(), EnumeratorListTokPtr::dynamicCast(yyvsp[0])->v);
    yyval = ens;
;
    break;}
case 104:
#line 1075 "Grammar.y"
{
;
    break;}
case 105:
#line 1083 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    EnumeratorListTokPtr ens = new EnumeratorListTok;
    ContainerPtr cont = unit->currentContainer();
    EnumeratorPtr en = cont->createEnumerator(ident->v);
    if(en)
    {
	ens->v.push_front(en);
    }
    yyval = ens;
;
    break;}
case 106:
#line 1095 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("keyword `" + ident->v + "' cannot be used as enumerator");
    EnumeratorListTokPtr ens = new EnumeratorListTok;
    yyval = ens;
;
    break;}
case 107:
#line 1102 "Grammar.y"
{
    EnumeratorListTokPtr ens = new EnumeratorListTok;
    yyval = ens;
;
    break;}
case 108:
#line 1112 "Grammar.y"
{
    BoolTokPtr out = new BoolTok;
    out->v = true;
    yyval = out;
;
    break;}
case 109:
#line 1118 "Grammar.y"
{
    BoolTokPtr out = new BoolTok;
    out->v = false;
    yyval = out;
;
    break;}
case 110:
#line 1129 "Grammar.y"
{
;
    break;}
case 111:
#line 1132 "Grammar.y"
{
    BoolTokPtr isOutParam = BoolTokPtr::dynamicCast(yyvsp[-1]);
    TypeStringTokPtr tsp = TypeStringTokPtr::dynamicCast(yyvsp[0]);
    TypePtr type = tsp->v.first;
    string ident = tsp->v.second;
    OperationPtr op = OperationPtr::dynamicCast(unit->currentContainer());
    if(op)
    {
	ParamDeclPtr pd = op->createParamDecl(ident, type, isOutParam->v);
	unit->currentContainer()->checkIntroduced(ident, pd);
    }
;
    break;}
case 112:
#line 1145 "Grammar.y"
{
    BoolTokPtr isOutParam = BoolTokPtr::dynamicCast(yyvsp[-1]);
    TypeStringTokPtr tsp = TypeStringTokPtr::dynamicCast(yyvsp[0]);
    TypePtr type = tsp->v.first;
    string ident = tsp->v.second;
    OperationPtr op = OperationPtr::dynamicCast(unit->currentContainer());
    if(op)
    {
	ParamDeclPtr pd = op->createParamDecl(ident, type, isOutParam->v);
	unit->currentContainer()->checkIntroduced(ident, pd);
    }
;
    break;}
case 113:
#line 1158 "Grammar.y"
{
    BoolTokPtr isOutParam = BoolTokPtr::dynamicCast(yyvsp[-2]);
    TypePtr type = TypePtr::dynamicCast(yyvsp[-1]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    OperationPtr op = OperationPtr::dynamicCast(unit->currentContainer());
    if(op)
    {
	op->createParamDecl(ident->v, type, isOutParam->v);
	unit->error("keyword `" + ident->v + "' cannot be used as parameter name");
    }
;
    break;}
case 114:
#line 1170 "Grammar.y"
{
    BoolTokPtr isOutParam = BoolTokPtr::dynamicCast(yyvsp[-2]);
    TypePtr type = TypePtr::dynamicCast(yyvsp[-1]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    OperationPtr op = OperationPtr::dynamicCast(unit->currentContainer());
    if(op)
    {
	op->createParamDecl(ident->v, type, isOutParam->v);
	unit->error("keyword `" + ident->v + "' cannot be used as parameter name");
    }
;
    break;}
case 115:
#line 1182 "Grammar.y"
{
    BoolTokPtr isOutParam = BoolTokPtr::dynamicCast(yyvsp[-1]);
    TypePtr type = TypePtr::dynamicCast(yyvsp[0]);
    OperationPtr op = OperationPtr::dynamicCast(unit->currentContainer());
    if(op)
    {
	op->createParamDecl(IceUtil::generateUUID(), type, isOutParam->v);
	unit->error("missing parameter name");
    }
;
    break;}
case 116:
#line 1193 "Grammar.y"
{
    BoolTokPtr isOutParam = BoolTokPtr::dynamicCast(yyvsp[-1]);
    TypePtr type = TypePtr::dynamicCast(yyvsp[0]);
    OperationPtr op = OperationPtr::dynamicCast(unit->currentContainer());
    if(op)
    {
	op->createParamDecl(IceUtil::generateUUID(), type, isOutParam->v);
	unit->error("missing parameter name");
    }
;
    break;}
case 117:
#line 1209 "Grammar.y"
{
    yyval = yyvsp[0];
;
    break;}
case 118:
#line 1213 "Grammar.y"
{
    yyval = new ExceptionListTok;
;
    break;}
case 119:
#line 1222 "Grammar.y"
{
;
    break;}
case 120:
#line 1225 "Grammar.y"
{
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    ident->v = "::" + ident->v;
    yyval = ident;
;
    break;}
case 121:
#line 1231 "Grammar.y"
{
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[-2]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[0]);
    scoped->v += "::";
    scoped->v += ident->v;
    yyval = scoped;
;
    break;}
case 122:
#line 1244 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindByte);
;
    break;}
case 123:
#line 1248 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindBool);
;
    break;}
case 124:
#line 1252 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindShort);
;
    break;}
case 125:
#line 1256 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindInt);
;
    break;}
case 126:
#line 1260 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindLong);
;
    break;}
case 127:
#line 1264 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindFloat);
;
    break;}
case 128:
#line 1268 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindDouble);
;
    break;}
case 129:
#line 1272 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindString);
;
    break;}
case 130:
#line 1276 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindObject);
;
    break;}
case 131:
#line 1280 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindObjectProxy);
;
    break;}
case 132:
#line 1284 "Grammar.y"
{
    yyval = unit->builtin(Builtin::KindLocalObject);
;
    break;}
case 133:
#line 1288 "Grammar.y"
{
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[0]);
    ContainerPtr cont = unit->currentContainer();
    if(cont)
    {
	TypeList types = cont->lookupType(scoped->v);
	if(types.empty())
	{
	    YYERROR; // Can't continue, jump to next yyerrok
	}
	cont->checkIntroduced(scoped->v);
	yyval = types.front();
    }
    else
    {
        yyval = 0;
    }
;
    break;}
case 134:
#line 1307 "Grammar.y"
{
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[-1]);
    ContainerPtr cont = unit->currentContainer();
    if(cont)
    {
	TypeList types = cont->lookupType(scoped->v);
	if(types.empty())
	{
	    YYERROR; // Can't continue, jump to next yyerrok
	}
	for(TypeList::iterator p = types.begin(); p != types.end(); ++p)
	{
	    ClassDeclPtr cl = ClassDeclPtr::dynamicCast(*p);
	    if(!cl)
	    {
		string msg = "`";
		msg += scoped->v;
		msg += "' must be class or interface";
		unit->error(msg);
		YYERROR; // Can't continue, jump to next yyerrok
	    }
	    cont->checkIntroduced(scoped->v);
	    if(cl->isLocal())
	    {
		unit->error("cannot create proxy for " + cl->kindOf() + " `" + cl->name() + "'");
	    }
	    *p = new Proxy(cl);
	}
	yyval = types.front();
    }
    else
    {
        yyval = 0;
    }
;
    break;}
case 135:
#line 1348 "Grammar.y"
{
    StringTokPtr str1 = StringTokPtr::dynamicCast(yyvsp[-1]);
    StringTokPtr str2 = StringTokPtr::dynamicCast(yyvsp[0]);
    str1->v += str2->v;
;
    break;}
case 136:
#line 1354 "Grammar.y"
{
;
    break;}
case 137:
#line 1362 "Grammar.y"
{
    StringTokPtr str = StringTokPtr::dynamicCast(yyvsp[-2]);
    StringListTokPtr stringList = StringListTokPtr::dynamicCast(yyvsp[0]);
    stringList->v.push_back(str->v);
    yyval = stringList;
;
    break;}
case 138:
#line 1369 "Grammar.y"
{
    StringTokPtr str = StringTokPtr::dynamicCast(yyvsp[0]);
    StringListTokPtr stringList = new StringListTok;
    stringList->v.push_back(str->v);
    yyval = stringList;
;
    break;}
case 139:
#line 1381 "Grammar.y"
{
    BoolTokPtr local = new BoolTok;
    local->v = true;
    yyval = local;
;
    break;}
case 140:
#line 1387 "Grammar.y"
{
    BoolTokPtr local = new BoolTok;
    local->v = false;
    yyval = local;
;
    break;}
case 141:
#line 1398 "Grammar.y"
{
    BuiltinPtr type = unit->builtin(Builtin::KindLong);
    IntegerTokPtr intVal = IntegerTokPtr::dynamicCast(yyvsp[0]);
    ostringstream sstr;
    sstr << intVal->v;
    SyntaxTreeBaseStringTokPtr basestring = new SyntaxTreeBaseStringTok;
    basestring->v = pair<SyntaxTreeBasePtr,string>(type, sstr.str());
    yyval = basestring;
;
    break;}
case 142:
#line 1408 "Grammar.y"
{
    BuiltinPtr type = unit->builtin(Builtin::KindDouble);
    FloatingTokPtr floatVal = FloatingTokPtr::dynamicCast(yyvsp[0]);
    ostringstream sstr;
    sstr << floatVal->v;
    SyntaxTreeBaseStringTokPtr basestring = new SyntaxTreeBaseStringTok;
    basestring->v = pair<SyntaxTreeBasePtr,string>(type, sstr.str());
    yyval = basestring;
;
    break;}
case 143:
#line 1418 "Grammar.y"
{
    StringTokPtr scoped = StringTokPtr::dynamicCast(yyvsp[0]);
    SyntaxTreeBaseStringTokPtr basestring = new SyntaxTreeBaseStringTok;
    ContainedList cl = unit->currentContainer()->lookupContained(scoped->v);
    if(cl.empty())
    {
    	basestring->v = pair<SyntaxTreeBasePtr,string>(TypePtr(0), scoped->v);
    }
    else
    {
	EnumeratorPtr enumerator = EnumeratorPtr::dynamicCast(cl.front());
	if(!enumerator)
	{
	    string msg = "illegal initializer: `" + scoped->v + "' is a";
	    static const string vowels = "aeiou";
	    string kindOf = cl.front()->kindOf();
	    if(vowels.find_first_of(kindOf[0]) != string::npos)
	    {
	    	msg += "n";
	    }
	    msg += " " + kindOf;
	    unit->error(msg);
	}
	unit->currentContainer()->checkIntroduced(scoped->v, enumerator);
	basestring->v = pair<SyntaxTreeBasePtr,string>(enumerator, scoped->v);
    }
    yyval = basestring;
;
    break;}
case 144:
#line 1447 "Grammar.y"
{
    BuiltinPtr type = unit->builtin(Builtin::KindString);
    StringTokPtr literal = StringTokPtr::dynamicCast(yyvsp[0]);
    SyntaxTreeBaseStringTokPtr basestring = new SyntaxTreeBaseStringTok;
    basestring->v = pair<SyntaxTreeBasePtr,string>(type, literal->v);
    yyval = basestring;
;
    break;}
case 145:
#line 1455 "Grammar.y"
{
    BuiltinPtr type = unit->builtin(Builtin::KindBool);
    StringTokPtr literal = StringTokPtr::dynamicCast(yyvsp[0]);
    SyntaxTreeBaseStringTokPtr basestring = new SyntaxTreeBaseStringTok;
    basestring->v = pair<SyntaxTreeBasePtr,string>(type, literal->v);
    yyval = basestring;
;
    break;}
case 146:
#line 1463 "Grammar.y"
{
    BuiltinPtr type = unit->builtin(Builtin::KindBool);
    StringTokPtr literal = StringTokPtr::dynamicCast(yyvsp[0]);
    SyntaxTreeBaseStringTokPtr basestring = new SyntaxTreeBaseStringTok;
    basestring->v = pair<SyntaxTreeBasePtr,string>(type, literal->v);
    yyval = basestring;
;
    break;}
case 147:
#line 1476 "Grammar.y"
{
    TypePtr const_type = TypePtr::dynamicCast(yyvsp[-3]);
    StringTokPtr ident = StringTokPtr::dynamicCast(yyvsp[-2]);
    SyntaxTreeBaseStringTokPtr value = SyntaxTreeBaseStringTokPtr::dynamicCast(yyvsp[0]);
    yyval = unit->currentContainer()->createConst(ident->v, const_type, value->v.first, value->v.second);
;
    break;}
case 148:
#line 1483 "Grammar.y"
{
    TypePtr const_type = TypePtr::dynamicCast(yyvsp[-2]);
    SyntaxTreeBaseStringTokPtr value = SyntaxTreeBaseStringTokPtr::dynamicCast(yyvsp[0]);
    unit->error("missing constant name");
    yyval = unit->currentContainer()->createConst(IceUtil::generateUUID(), const_type, value->v.first, value->v.second);
;
    break;}
case 149:
#line 1495 "Grammar.y"
{
;
    break;}
case 150:
#line 1498 "Grammar.y"
{
;
    break;}
case 151:
#line 1501 "Grammar.y"
{
;
    break;}
case 152:
#line 1504 "Grammar.y"
{
;
    break;}
case 153:
#line 1507 "Grammar.y"
{
;
    break;}
case 154:
#line 1510 "Grammar.y"
{
;
    break;}
case 155:
#line 1513 "Grammar.y"
{
;
    break;}
case 156:
#line 1516 "Grammar.y"
{
;
    break;}
case 157:
#line 1519 "Grammar.y"
{
;
    break;}
case 158:
#line 1522 "Grammar.y"
{
;
    break;}
case 159:
#line 1525 "Grammar.y"
{
;
    break;}
case 160:
#line 1528 "Grammar.y"
{
;
    break;}
case 161:
#line 1531 "Grammar.y"
{
;
    break;}
case 162:
#line 1534 "Grammar.y"
{
;
    break;}
case 163:
#line 1537 "Grammar.y"
{
;
    break;}
case 164:
#line 1540 "Grammar.y"
{
;
    break;}
case 165:
#line 1543 "Grammar.y"
{
;
    break;}
case 166:
#line 1546 "Grammar.y"
{
;
    break;}
case 167:
#line 1549 "Grammar.y"
{
;
    break;}
case 168:
#line 1552 "Grammar.y"
{
;
    break;}
case 169:
#line 1555 "Grammar.y"
{
;
    break;}
case 170:
#line 1558 "Grammar.y"
{
;
    break;}
case 171:
#line 1561 "Grammar.y"
{
;
    break;}
case 172:
#line 1564 "Grammar.y"
{
;
    break;}
case 173:
#line 1567 "Grammar.y"
{
;
    break;}
case 174:
#line 1570 "Grammar.y"
{
;
    break;}
case 175:
#line 1573 "Grammar.y"
{
;
    break;}
case 176:
#line 1576 "Grammar.y"
{
;
    break;}
case 177:
#line 1579 "Grammar.y"
{
;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/lib/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 1583 "Grammar.y"

