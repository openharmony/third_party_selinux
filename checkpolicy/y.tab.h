/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PATH = 258,
    QPATH = 259,
    FILENAME = 260,
    CLONE = 261,
    COMMON = 262,
    CLASS = 263,
    CONSTRAIN = 264,
    VALIDATETRANS = 265,
    INHERITS = 266,
    SID = 267,
    ROLE = 268,
    ROLEATTRIBUTE = 269,
    ATTRIBUTE_ROLE = 270,
    ROLES = 271,
    TYPEALIAS = 272,
    TYPEATTRIBUTE = 273,
    TYPEBOUNDS = 274,
    TYPE = 275,
    TYPES = 276,
    ALIAS = 277,
    ATTRIBUTE = 278,
    EXPANDATTRIBUTE = 279,
    BOOL = 280,
    TUNABLE = 281,
    IF = 282,
    ELSE = 283,
    TYPE_TRANSITION = 284,
    TYPE_MEMBER = 285,
    TYPE_CHANGE = 286,
    ROLE_TRANSITION = 287,
    RANGE_TRANSITION = 288,
    SENSITIVITY = 289,
    DOMINANCE = 290,
    DOM = 291,
    DOMBY = 292,
    INCOMP = 293,
    CATEGORY = 294,
    LEVEL = 295,
    RANGE = 296,
    MLSCONSTRAIN = 297,
    MLSVALIDATETRANS = 298,
    USER = 299,
    NEVERALLOW = 300,
    ALLOW = 301,
    AUDITALLOW = 302,
    AUDITDENY = 303,
    DONTAUDIT = 304,
    ALLOWXPERM = 305,
    AUDITALLOWXPERM = 306,
    DONTAUDITXPERM = 307,
    NEVERALLOWXPERM = 308,
    SOURCE = 309,
    TARGET = 310,
    SAMEUSER = 311,
    FSCON = 312,
    PORTCON = 313,
    NETIFCON = 314,
    NODECON = 315,
    IBPKEYCON = 316,
    IBENDPORTCON = 317,
    PIRQCON = 318,
    IOMEMCON = 319,
    IOPORTCON = 320,
    PCIDEVICECON = 321,
    DEVICETREECON = 322,
    FSUSEXATTR = 323,
    FSUSETASK = 324,
    FSUSETRANS = 325,
    GENFSCON = 326,
    U1 = 327,
    U2 = 328,
    U3 = 329,
    R1 = 330,
    R2 = 331,
    R3 = 332,
    T1 = 333,
    T2 = 334,
    T3 = 335,
    L1 = 336,
    L2 = 337,
    H1 = 338,
    H2 = 339,
    NOT = 340,
    AND = 341,
    OR = 342,
    XOR = 343,
    CTRUE = 344,
    CFALSE = 345,
    IDENTIFIER = 346,
    NUMBER = 347,
    EQUALS = 348,
    NOTEQUAL = 349,
    IPV4_ADDR = 350,
    IPV6_ADDR = 351,
    MODULE = 352,
    VERSION_IDENTIFIER = 353,
    REQUIRE = 354,
    OPTIONAL = 355,
    POLICYCAP = 356,
    PERMISSIVE = 357,
    FILESYSTEM = 358,
    DEFAULT_USER = 359,
    DEFAULT_ROLE = 360,
    DEFAULT_TYPE = 361,
    DEFAULT_RANGE = 362,
    LOW_HIGH = 363,
    LOW = 364,
    HIGH = 365,
    GLBLUB = 366
  };
#endif
/* Tokens.  */
#define PATH 258
#define QPATH 259
#define FILENAME 260
#define CLONE 261
#define COMMON 262
#define CLASS 263
#define CONSTRAIN 264
#define VALIDATETRANS 265
#define INHERITS 266
#define SID 267
#define ROLE 268
#define ROLEATTRIBUTE 269
#define ATTRIBUTE_ROLE 270
#define ROLES 271
#define TYPEALIAS 272
#define TYPEATTRIBUTE 273
#define TYPEBOUNDS 274
#define TYPE 275
#define TYPES 276
#define ALIAS 277
#define ATTRIBUTE 278
#define EXPANDATTRIBUTE 279
#define BOOL 280
#define TUNABLE 281
#define IF 282
#define ELSE 283
#define TYPE_TRANSITION 284
#define TYPE_MEMBER 285
#define TYPE_CHANGE 286
#define ROLE_TRANSITION 287
#define RANGE_TRANSITION 288
#define SENSITIVITY 289
#define DOMINANCE 290
#define DOM 291
#define DOMBY 292
#define INCOMP 293
#define CATEGORY 294
#define LEVEL 295
#define RANGE 296
#define MLSCONSTRAIN 297
#define MLSVALIDATETRANS 298
#define USER 299
#define NEVERALLOW 300
#define ALLOW 301
#define AUDITALLOW 302
#define AUDITDENY 303
#define DONTAUDIT 304
#define ALLOWXPERM 305
#define AUDITALLOWXPERM 306
#define DONTAUDITXPERM 307
#define NEVERALLOWXPERM 308
#define SOURCE 309
#define TARGET 310
#define SAMEUSER 311
#define FSCON 312
#define PORTCON 313
#define NETIFCON 314
#define NODECON 315
#define IBPKEYCON 316
#define IBENDPORTCON 317
#define PIRQCON 318
#define IOMEMCON 319
#define IOPORTCON 320
#define PCIDEVICECON 321
#define DEVICETREECON 322
#define FSUSEXATTR 323
#define FSUSETASK 324
#define FSUSETRANS 325
#define GENFSCON 326
#define U1 327
#define U2 328
#define U3 329
#define R1 330
#define R2 331
#define R3 332
#define T1 333
#define T2 334
#define T3 335
#define L1 336
#define L2 337
#define H1 338
#define H2 339
#define NOT 340
#define AND 341
#define OR 342
#define XOR 343
#define CTRUE 344
#define CFALSE 345
#define IDENTIFIER 346
#define NUMBER 347
#define EQUALS 348
#define NOTEQUAL 349
#define IPV4_ADDR 350
#define IPV6_ADDR 351
#define MODULE 352
#define VERSION_IDENTIFIER 353
#define REQUIRE 354
#define OPTIONAL 355
#define POLICYCAP 356
#define PERMISSIVE 357
#define FILESYSTEM 358
#define DEFAULT_USER 359
#define DEFAULT_ROLE 360
#define DEFAULT_TYPE 361
#define DEFAULT_RANGE 362
#define LOW_HIGH 363
#define LOW 364
#define HIGH 365
#define GLBLUB 366

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 68 "policy_parse.y" /* yacc.c:1909  */

	unsigned int val;
	uint64_t val64;
	uintptr_t valptr;
	void *ptr;
        require_func_t require_func;

#line 284 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
