/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 32 "policy_parse.y" /* yacc.c:339  */

#include <sys/types.h>
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>

#include <sepol/policydb/expand.h>
#include <sepol/policydb/policydb.h>
#include <sepol/policydb/services.h>
#include <sepol/policydb/conditional.h>
#include <sepol/policydb/hierarchy.h>
#include <sepol/policydb/polcaps.h>
#include "queue.h"
#include "checkpolicy.h"
#include "module_compiler.h"
#include "policy_define.h"

extern policydb_t *policydbp;
extern unsigned int pass;

extern char yytext[];
extern int yylex(void);
extern int yywarn(const char *msg);
extern int yyerror(const char *msg);

typedef int (* require_func_t)(int pass);


#line 102 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 68 "policy_parse.y" /* yacc.c:355  */

	unsigned int val;
	uint64_t val64;
	uintptr_t valptr;
	void *ptr;
        require_func_t require_func;

#line 372 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 389 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  198
/* YYNRULES -- Number of rules.  */
#define YYNRULES  407
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  817

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     117,   118,   121,     2,   116,   119,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   115,   114,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   112,     2,   113,   120,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   165,   165,   166,   168,   170,   173,   168,   177,   178,
     180,   183,   184,   186,   189,   191,   192,   194,   195,   197,
     200,   201,   203,   205,   207,   210,   211,   213,   214,   215,
     216,   217,   218,   219,   220,   222,   224,   227,   229,   232,
     234,   237,   239,   241,   243,   245,   247,   249,   252,   253,
     255,   257,   258,   260,   262,   265,   267,   269,   272,   273,
     275,   276,   278,   280,   283,   284,   286,   288,   291,   292,
     294,   295,   297,   300,   303,   304,   306,   307,   308,   309,
     310,   311,   313,   314,   315,   316,   317,   318,   319,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   334,   337,   340,   342,   345,   348,   351,   354,   355,
     357,   360,   363,   365,   368,   371,   374,   376,   378,   381,
     384,   387,   390,   393,   396,   399,   403,   406,   408,   410,
     412,   415,   418,   421,   424,   428,   430,   432,   434,   437,
     441,   445,   449,   454,   456,   458,   460,   463,   465,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   478,   481,
     484,   487,   490,   493,   496,   499,   502,   505,   508,   511,
     514,   516,   518,   521,   524,   526,   529,   531,   534,   537,
     538,   540,   541,   543,   544,   546,   549,   552,   554,   557,
     560,   563,   566,   569,   572,   575,   575,   578,   578,   581,
     581,   584,   584,   587,   587,   590,   590,   593,   593,   596,
     596,   599,   599,   602,   605,   605,   608,   608,   611,   614,
     614,   617,   617,   620,   623,   626,   629,   632,   635,   639,
     641,   644,   646,   648,   650,   653,   654,   656,   659,   660,
     662,   663,   665,   668,   668,   670,   671,   673,   674,   675,
     676,   677,   679,   682,   684,   687,   689,   692,   695,   698,
     699,   701,   702,   704,   707,   709,   710,   712,   713,   715,
     717,   720,   721,   723,   724,   726,   728,   731,   732,   734,
     735,   737,   740,   741,   743,   744,   746,   749,   750,   752,
     753,   755,   757,   760,   761,   763,   764,   766,   768,   770,
     773,   774,   776,   777,   779,   781,   781,   783,   786,   789,
     791,   793,   795,   799,   801,   802,   804,   804,   805,   806,
     808,   811,   813,   814,   816,   818,   821,   823,   826,   827,
     829,   831,   833,   835,   837,   840,   843,   846,   846,   849,
     852,   855,   856,   857,   858,   859,   861,   862,   864,   867,
     868,   870,   872,   872,   874,   874,   874,   874,   876,   879,
     881,   884,   886,   889,   892,   895,   898,   901,   904,   909,
     914,   917,   919,   921,   923,   925,   926,   928,   929,   930,
     931,   932,   933,   935,   937,   938,   940,   941,   943,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   956,   958,
     962,   961,   966,   968,   970,   973,   976,   977
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PATH", "QPATH", "FILENAME", "CLONE",
  "COMMON", "CLASS", "CONSTRAIN", "VALIDATETRANS", "INHERITS", "SID",
  "ROLE", "ROLEATTRIBUTE", "ATTRIBUTE_ROLE", "ROLES", "TYPEALIAS",
  "TYPEATTRIBUTE", "TYPEBOUNDS", "TYPE", "TYPES", "ALIAS", "ATTRIBUTE",
  "EXPANDATTRIBUTE", "BOOL", "TUNABLE", "IF", "ELSE", "TYPE_TRANSITION",
  "TYPE_MEMBER", "TYPE_CHANGE", "ROLE_TRANSITION", "RANGE_TRANSITION",
  "SENSITIVITY", "DOMINANCE", "DOM", "DOMBY", "INCOMP", "CATEGORY",
  "LEVEL", "RANGE", "MLSCONSTRAIN", "MLSVALIDATETRANS", "USER",
  "NEVERALLOW", "ALLOW", "AUDITALLOW", "AUDITDENY", "DONTAUDIT",
  "ALLOWXPERM", "AUDITALLOWXPERM", "DONTAUDITXPERM", "NEVERALLOWXPERM",
  "SOURCE", "TARGET", "SAMEUSER", "FSCON", "PORTCON", "NETIFCON",
  "NODECON", "IBPKEYCON", "IBENDPORTCON", "PIRQCON", "IOMEMCON",
  "IOPORTCON", "PCIDEVICECON", "DEVICETREECON", "FSUSEXATTR", "FSUSETASK",
  "FSUSETRANS", "GENFSCON", "U1", "U2", "U3", "R1", "R2", "R3", "T1", "T2",
  "T3", "L1", "L2", "H1", "H2", "NOT", "AND", "OR", "XOR", "CTRUE",
  "CFALSE", "IDENTIFIER", "NUMBER", "EQUALS", "NOTEQUAL", "IPV4_ADDR",
  "IPV6_ADDR", "MODULE", "VERSION_IDENTIFIER", "REQUIRE", "OPTIONAL",
  "POLICYCAP", "PERMISSIVE", "FILESYSTEM", "DEFAULT_USER", "DEFAULT_ROLE",
  "DEFAULT_TYPE", "DEFAULT_RANGE", "LOW_HIGH", "LOW", "HIGH", "GLBLUB",
  "'{'", "'}'", "';'", "':'", "','", "'('", "')'", "'-'", "'~'", "'*'",
  "$accept", "policy", "base_policy", "$@1", "$@2", "$@3", "classes",
  "class_def", "initial_sids", "initial_sid_def", "access_vectors",
  "opt_common_perms", "common_perms", "common_perms_def", "av_perms",
  "av_perms_def", "opt_default_rules", "default_rules", "default_user_def",
  "default_role_def", "default_type_def", "default_range_def", "opt_mls",
  "mls", "sensitivities", "sensitivity_def", "alias_def", "dominance",
  "opt_categories", "categories", "category_def", "levels", "level_def",
  "mlspolicy", "mlspolicy_decl", "mlsconstraint_def",
  "mlsvalidatetrans_def", "te_rbac", "te_rbac_decl", "rbac_decl",
  "te_decl", "attribute_def", "expandattribute_def", "type_def",
  "typealias_def", "typeattribute_def", "typebounds_def", "opt_attr_list",
  "bool_def", "tunable_def", "bool_val", "cond_stmt_def", "cond_else",
  "cond_expr", "cond_expr_prim", "cond_pol_list", "cond_rule_def",
  "cond_transition_def", "cond_te_avtab_def", "cond_allow_def",
  "cond_auditallow_def", "cond_auditdeny_def", "cond_dontaudit_def",
  "transition_def", "range_trans_def", "te_avtab_def", "allow_def",
  "auditallow_def", "auditdeny_def", "dontaudit_def", "neverallow_def",
  "xperm_allow_def", "xperm_auditallow_def", "xperm_dontaudit_def",
  "xperm_neverallow_def", "attribute_role_def", "role_type_def",
  "role_attr_def", "role_dominance", "role_trans_def", "role_allow_def",
  "roles", "role_def", "roleattribute_def", "opt_constraints",
  "constraints", "constraint_decl", "constraint_def", "validatetrans_def",
  "cexpr", "cexpr_prim", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "op", "role_mls_op",
  "users", "user_def", "opt_mls_user", "initial_sid_contexts",
  "initial_sid_context_def", "opt_dev_contexts", "dev_contexts",
  "dev_context_def", "pirq_context_def", "iomem_context_def",
  "ioport_context_def", "pci_context_def", "dtree_context_def",
  "opt_fs_contexts", "fs_contexts", "fs_context_def", "net_contexts",
  "opt_port_contexts", "port_contexts", "port_context_def",
  "opt_ibpkey_contexts", "ibpkey_contexts", "ibpkey_context_def",
  "opt_ibendport_contexts", "ibendport_contexts", "ibendport_context_def",
  "opt_netif_contexts", "netif_contexts", "netif_context_def",
  "opt_node_contexts", "node_contexts", "node_context_def", "opt_fs_uses",
  "fs_uses", "fs_use_def", "opt_genfs_contexts", "genfs_contexts",
  "genfs_context_def", "$@17", "ipv4_addr_def", "xperms",
  "nested_xperm_set", "nested_xperm_list", "nested_xperm_element", "$@18",
  "xperm", "security_context_def", "opt_mls_range_def", "mls_range_def",
  "mls_level_def", "id_comma_list", "tilde", "asterisk", "names", "$@19",
  "tilde_push", "asterisk_push", "names_push", "identifier_list_push",
  "identifier_push", "identifier_list", "nested_id_set", "nested_id_list",
  "nested_id_element", "$@20", "identifier", "filesystem", "path",
  "filename", "number", "number64", "ipv6_addr", "policycap_def",
  "permissive_def", "module_policy", "module_def", "version_identifier",
  "avrules_block", "avrule_decls", "avrule_decl", "require_block",
  "require_list", "require_decl", "require_class", "require_decl_def",
  "require_id_list", "optional_block", "$@21", "optional_else",
  "optional_decl", "else_decl", "avrule_user_defs", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   123,   125,    59,    58,    44,    40,    41,    45,
     126,    42
};
# endif

#define YYPACT_NINF -714

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-714)))

#define YYTABLE_NINF -232

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -17,   111,  -714,   179,  -714,   834,  -714,   259,  -714,
     -17,   198,  -714,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,    93,   -17,   -17,    92,    93,    93,    93,    93,    93,
      48,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      81,  -714,   -17,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,   508,  -714,  -714,  -714,
     113,  -714,  -714,  -714,  -714,  -714,   126,  -714,   -17,  -714,
     106,  -714,    10,   -17,   219,   330,   -17,   -17,    16,   254,
     -26,  -714,  -714,   -31,  -714,   248,  -714,   147,   248,   248,
      92,    92,   186,  -714,  -714,    93,    93,    93,    93,    93,
     288,    93,    93,    93,    93,    93,    93,    93,    93,    93,
     177,   257,   -17,   311,  -714,  -714,   834,  -714,  -714,   -17,
    -714,  -714,   350,   356,  -714,    93,   -17,   265,   286,  -714,
    -714,    93,   268,   300,   303,   283,   289,  -714,  -714,  -714,
     107,  -714,  -714,  -714,  -714,  -714,  -714,   310,  -714,   324,
     328,   249,    70,    92,    92,    92,    92,    92,  -714,   347,
     360,   372,    89,   170,   363,    20,  -714,   387,   162,   388,
     389,   390,   394,   395,   396,   404,   -17,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,    22,  -714,   358,   -17,
    -714,   491,  -714,   411,   417,   199,   -17,   350,  -714,  -714,
     416,   400,  -714,  -714,   -17,  -714,  -714,  -714,  -714,   428,
    -714,   -17,  -714,  -714,  -714,   -17,  -714,  -714,  -714,   249,
     174,   253,  -714,  -714,    24,    93,    93,    93,    93,   430,
      93,   431,   398,   432,  -714,   322,  -714,  -714,    93,  -714,
      93,    93,    93,    93,    93,    93,    93,    93,    93,  -714,
    -714,  -714,  -714,   321,    93,  -714,   -17,    93,    93,    93,
      93,   512,   199,  -714,  -714,  -714,  -714,    18,  -714,  -714,
    -714,  -714,  -714,  -714,    93,    93,    93,    93,    93,    93,
      93,   520,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
     -17,   -17,   -17,   -17,  -714,   -17,  -714,   -17,   -17,   288,
    -714,    93,    93,    93,    93,    93,   -17,   -17,   -17,   -17,
    -714,  -714,   -17,   509,   522,   -16,  -714,   402,   405,   425,
      25,   -17,   939,  -714,   447,  -714,  -714,  -714,  -714,  -714,
     -17,   -17,    93,    93,    93,    93,    93,    93,    93,   439,
    -714,     6,   448,   449,   451,   452,  -714,   400,    21,   453,
     454,   455,   456,   458,     2,     2,     2,     2,  -714,   -17,
     459,  -714,  -714,   462,  -714,  -714,   461,   463,   464,   465,
     466,   467,   267,   279,   468,    14,   -17,  -714,   620,  -714,
    -714,  -714,  -714,  -714,  -714,   208,  -714,   525,   471,   187,
     469,   470,   472,   473,   474,   476,   477,  -714,  -714,  -714,
     479,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,    32,   480,  -714,  -714,    32,  -714,   481,   482,   483,
     545,  -714,   834,  -714,  -714,  -714,  -714,  -714,  -714,   484,
     485,   486,   487,   488,   489,  -714,  -714,   490,   492,  -714,
     152,  -714,   -17,  -714,   -17,   550,   525,  -714,   -17,  -714,
      93,    93,    93,    93,    93,    93,    93,   119,  -714,  -714,
     232,  -714,   494,  -714,  -714,  -714,  -714,  -714,  -714,   -17,
     496,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,    93,
      93,  -714,   475,  -714,  -714,  -714,  -714,   202,    28,   -17,
     351,  -714,  -714,   216,   -17,   -17,   -17,    93,    93,    93,
      93,  -714,  -714,  -714,  -714,  -714,  -714,    93,   173,   593,
    -714,  -714,  -714,   497,   376,    93,    93,  -714,   450,  -714,
    -714,  -714,  -714,    15,   498,   500,   501,   502,   503,   504,
     528,   173,    46,    95,   244,  -714,   401,   401,   401,    46,
     401,   401,   401,   401,   401,    46,    46,    46,   173,   173,
     149,  -714,   -17,    86,  -714,  -714,  -714,   -17,    93,   173,
    -714,  -714,   507,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
     151,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,   551,  -714,  -714,   547,   549,  -714,  -714,   548,
    -714,  -714,   323,   542,   357,  -714,    83,   173,   173,  -714,
     -17,   528,  -714,   352,   571,  -714,   339,   173,   157,  -714,
    -714,   121,   121,   121,   121,  -714,   121,   121,   121,   121,
    -714,   121,   121,  -714,   121,   121,   121,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,   543,  -714,   515,   528,   245,
     -17,   -17,   560,   352,  -714,  -714,  -714,   183,  -714,   363,
    -714,  -714,   241,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   -17,   -17,
    -714,  -714,   -17,   -17,   -17,   245,   574,   560,  -714,  -714,
    -714,   217,  -714,   363,  -714,   521,   -17,   527,   534,   540,
     493,   -17,   346,   583,   574,  -714,  -714,  -714,  -714,   228,
     -17,  -714,  -714,  -714,  -714,  -714,  -714,   -15,   528,   528,
     564,   528,   528,   493,   596,   346,  -714,  -714,  -714,  -714,
    -714,  -714,   -17,   598,   583,  -714,  -714,  -714,   546,    80,
    -714,    88,   -17,  -714,    98,   103,   -17,   -17,   567,   612,
     596,  -714,  -714,   -17,   403,  -714,   598,  -714,  -714,   -17,
    -714,  -714,   -17,   528,  -714,  -714,   564,  -714,   528,  -714,
    -714,  -714,  -714,   528,   -17,  -714,   612,  -714,  -714,   -17,
     580,   567,  -714,  -714,   -17,  -714,   -17,   -17,   -17,   140,
     528,  -714,  -714,   -17,   -17,  -714,  -714,  -714,  -714,   528,
    -714,   -17,  -714,  -714,   -17,  -714,  -714
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,     2,     0,     3,     0,   358,     0,     1,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   404,     0,   382,   377,   378,    89,    90,    91,    92,
      93,    94,    95,    96,   379,    97,    98,    99,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    82,    83,    88,
      84,    85,    86,    87,   100,   369,   407,   376,   380,   381,
       0,   364,   308,   371,   373,   372,     0,    10,     0,     9,
      16,    11,   109,     0,     0,     0,     0,     0,   109,     0,
       0,   330,   331,     0,   334,     0,   333,   332,     0,     0,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   375,   374,     0,   370,    13,     0,
      12,     5,     0,    15,    17,     0,     0,     0,     0,   328,
     167,     0,     0,     0,     0,   109,     0,   101,   355,   357,
       0,   352,   354,   336,   335,   112,   113,     0,   337,     0,
       0,   118,     0,     0,     0,     0,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   389,   392,   390,
     391,   394,   395,   396,   397,   393,     0,   385,     0,     0,
     368,     0,   406,     0,     0,    26,     0,    14,    20,    18,
       0,   108,   169,   178,     0,    55,   105,   106,   107,     0,
     104,     0,   351,   353,   102,     0,   110,   111,   117,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,     0,
       0,     0,   325,   327,   348,     0,   170,   175,     0,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   383,
     384,   386,   398,     0,     0,   400,     0,     0,     0,     0,
       0,    49,    25,    27,    28,    29,    30,     0,    21,   168,
     329,   103,   356,   338,     0,     0,     0,     0,     0,     0,
       0,   116,   126,   128,   129,   135,   136,   137,   138,   130,
       0,     0,     0,     0,   171,     0,   147,     0,     0,     0,
     176,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     388,   387,     0,   239,   403,     0,   349,     0,     0,     0,
       0,     0,     0,    48,     0,    51,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,   324,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,     0,
       0,   405,   401,     0,    19,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,    74,
      77,    76,    78,    80,    79,     0,    52,    59,    23,     0,
       0,     0,     0,     0,     0,     0,     0,   127,   363,   144,
       0,   145,   146,   172,   148,   177,   162,   158,   159,   160,
     161,     0,     0,   310,   309,     0,   320,     0,     0,     0,
       0,   237,     0,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,     0,    47,    54,     0,     0,    75,
     180,   235,     0,    56,     0,     0,    58,    60,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,   143,   319,
       0,   314,   318,   163,   312,   311,   164,   165,   166,     0,
       0,    43,    41,    42,    46,    44,    45,    53,   367,     0,
       0,     6,   179,   181,   183,   184,   236,     0,     0,     0,
       0,    64,    61,     0,     0,     0,     0,     0,     0,     0,
       0,   115,   313,   315,   316,   238,   402,     0,     0,     0,
     182,    57,    63,     0,     0,     0,     0,    65,    50,    68,
      70,    71,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,     0,   260,   240,    62,    67,     0,     0,     0,
      69,   132,     0,   133,   134,   139,   140,   141,   142,   317,
       0,   232,   233,   234,   229,   230,   231,   218,   214,   219,
     216,   221,   195,   197,   199,   201,     0,   203,   205,   207,
     209,   211,     0,     0,     0,   188,     0,     0,     0,   186,
       0,     0,   241,   294,   259,   261,     0,     0,     0,   131,
     185,     0,     0,     0,     0,   192,     0,     0,     0,     0,
     193,     0,     0,   194,     0,     0,     0,   223,   227,   224,
     228,   225,   226,   187,   189,   190,   242,     0,     0,     0,
       0,     0,   301,   293,   295,   262,    66,     0,    73,     0,
     339,   340,     0,   343,   215,   341,   220,   217,   222,   196,
     198,   200,   202,   204,   206,   208,   210,   212,     0,     0,
     360,   359,     0,     0,     0,     0,   266,   300,   302,   296,
      72,     0,   346,     0,   344,     0,     0,     0,     0,     0,
       0,     0,   244,   283,   265,   267,   303,   342,   347,     0,
       0,   263,   297,   298,   299,   361,   362,     0,     0,     0,
       0,     0,     0,     0,   272,   243,   245,   247,   248,   249,
     250,   251,     0,   288,   282,   284,   268,   345,   323,     0,
     307,     0,     0,   365,     0,     0,     0,     0,     0,   278,
     271,   273,   246,     0,     0,   264,   287,   289,   285,     0,
     321,   305,     0,     0,   269,   252,     0,   253,     0,   255,
     257,   258,   366,     0,     0,     7,   277,   279,   274,     0,
       0,     0,   290,   322,     0,   304,     0,     0,     0,     0,
       0,   280,   286,     0,     0,   306,   270,   254,   256,     0,
     275,     0,   291,   292,     0,   281,   276
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -714,  -714,  -714,  -714,  -714,  -714,  -714,   665,  -714,   587,
    -714,  -714,  -714,   535,  -714,   478,  -714,  -714,   397,   399,
     407,   408,  -714,  -714,  -714,   336,   -93,  -714,  -714,  -714,
     218,  -714,   172,  -714,   145,  -714,  -714,  -714,   287,  -298,
    -273,  -714,  -714,  -714,  -714,  -714,  -714,   -52,  -714,  -714,
     392,  -257,  -714,   -22,  -714,   269,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,   375,  -177,  -714,  -714,  -714,   194,  -714,  -714,  -511,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -112,  -169,  -714,  -359,  -714,  -714,
     124,  -714,  -714,   -37,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,    76,  -714,  -714,  -714,   -13,  -714,  -714,   -58,  -714,
    -714,   -83,  -714,  -714,   -40,  -714,  -714,   -60,  -714,  -714,
      44,  -714,  -714,    11,  -714,  -673,    54,  -368,  -714,   229,
    -714,  -403,  -371,  -714,  -311,  -274,   -94,  -350,  -272,   800,
    -714,  -714,  -714,  -168,     8,  -183,  -341,   -41,  -714,   552,
    -714,    -1,    19,   -20,   175,    41,   -61,  -713,  -714,  -714,
    -714,  -714,  -714,  -129,  -714,   640,  -238,  -714,   511,  -714,
    -714,  -714,  -252,  -714,  -714,  -714,  -714,   590
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,   215,   529,    11,    12,    90,    91,
     141,   142,   143,   144,   217,   218,   281,   282,   283,   284,
     285,   286,   342,   343,   344,   345,   152,   407,   465,   466,
     467,   510,   511,   538,   539,   540,   541,   398,   399,    44,
      45,    46,    47,    48,    49,    50,    51,   147,    52,    53,
     167,    54,   360,   112,   113,   244,   302,   303,   304,   305,
     306,   307,   308,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   185,   186,    73,   501,   502,   503,   504,   505,   570,
     571,   636,   637,   638,   639,   641,   642,   644,   645,   646,
     631,   633,   632,   634,   596,   597,   460,   133,   380,   573,
     574,   734,   735,   736,   737,   738,   739,   740,   741,   623,
     624,   625,   712,   713,   714,   715,   759,   760,   761,   785,
     786,   787,   743,   744,   745,   765,   766,   767,   662,   663,
     664,   696,   697,   698,   794,    84,   432,   433,   480,   481,
     550,   434,   656,   770,   251,   252,   148,   103,   104,   105,
     235,   672,   673,   674,   701,   675,   335,   106,   160,   161,
     231,   107,   692,   727,   420,   436,   754,   783,   403,    74,
       5,     6,    86,    75,    76,    77,    78,   206,   207,   208,
     209,   273,    79,   334,   382,    80,   383,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   255,   153,   154,   365,   155,   309,   213,   257,    87,
     409,   418,    92,    93,    94,    95,    96,    97,    98,    99,
     418,   108,   109,   114,   435,   435,   435,   435,   482,   350,
     196,   145,   485,   184,   184,   197,   151,   198,   151,   461,
     590,   131,   199,   366,   400,   200,   156,   201,   202,    85,
     151,   791,   221,   294,   295,   296,   203,   615,   616,   159,
       7,   204,   163,   479,     1,     7,   205,   484,   628,   401,
     297,   298,   299,   300,     7,     7,     7,   482,   804,   392,
     393,   100,   591,   592,   593,   402,   100,   138,   171,   172,
     404,   790,   149,   158,    81,   149,   149,   384,   572,   162,
     400,   506,   164,   229,   749,   440,   654,   655,   598,   114,
     114,     9,   479,   139,   431,   599,   667,   803,    88,   159,
     419,   507,   101,    40,    81,   401,   146,   513,   456,   581,
     351,   211,   146,   256,   425,   269,   394,   301,   214,   594,
     595,   402,   532,   621,   431,   149,   404,   589,   294,   295,
     296,   239,   240,   241,   242,   243,   173,   174,   175,   162,
     120,   499,   500,   176,   177,   297,   298,   299,   300,   617,
     618,     7,   114,   114,   114,   114,   114,   110,   525,     7,
       7,   249,   253,     7,     7,   196,   552,    10,   238,     7,
     197,   257,   198,   130,     7,   268,   132,   199,     7,   771,
     200,   653,   201,   202,   248,   100,    10,   773,   272,   111,
      88,   203,   254,   101,   102,   287,   204,   776,    40,   100,
     232,   205,   778,   290,   367,   136,   158,   553,   554,   555,
     292,     7,   521,   669,   293,   617,   618,   617,   618,   309,
     137,   101,   102,   617,   618,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   600,   568,   809,
     173,     7,   175,   619,   601,   630,   168,   176,   177,   617,
     618,   668,   173,   174,   175,   336,   259,   260,     7,   176,
     177,   670,   670,   670,   670,   250,   670,   670,   670,   670,
     569,   670,   670,     7,   670,   670,   670,   700,   178,     7,
     469,   184,   457,   277,   278,   279,   280,     7,   254,   361,
     362,   363,   364,   490,   253,   531,   253,   149,   706,   254,
     462,   707,   708,   709,    81,   374,   375,   376,   377,   542,
     717,   378,   254,   150,   385,   721,   690,   165,   166,   173,
     395,   747,   176,   177,   431,   522,   176,   177,   691,   408,
     336,    81,   151,   703,    82,   132,   750,    83,   216,   671,
     671,   671,   671,   139,   671,   671,   671,   671,   157,   671,
     671,   210,   671,   671,   671,   449,   450,   451,   253,   222,
     774,   775,   226,   777,   779,   780,   781,   452,   453,   454,
     606,   509,   789,   535,   536,   458,   612,   613,   614,   146,
     223,   795,   224,   230,   463,   647,   648,   649,   385,   729,
     730,   731,   732,   733,   227,   533,   224,   228,   802,   224,
     659,   660,   661,   805,   234,   806,   807,   808,   810,   437,
     438,   439,   812,   813,   319,   331,   320,   332,   236,   651,
     815,   652,   237,   816,   602,   603,   604,   605,   607,   608,
     609,   610,   611,   666,   254,   224,   386,   387,   793,   388,
     389,   336,   245,   508,   676,   677,   678,   336,   679,   680,
     681,   682,   271,   683,   684,   246,   685,   686,   687,   390,
     391,   341,   405,   626,   499,   500,   702,   247,   253,   704,
     576,   577,   535,   536,   594,   595,   725,   726,    82,   782,
     169,   170,   258,   261,   262,   263,   385,   274,   534,   264,
     265,   266,   385,   543,   544,   545,   224,   317,   718,   267,
     702,    13,    14,    15,   275,    16,    17,    18,    19,   276,
     289,    20,    21,    22,    23,    24,   718,    25,    26,    27,
      28,    29,   291,    30,   314,   316,   341,   318,   359,   379,
     381,   417,   132,    31,    32,    33,    34,    35,    36,    37,
      38,    39,   421,   422,   464,   423,   424,   426,   427,   428,
     429,   620,   430,   441,   442,   443,   149,   444,   445,   446,
     447,   448,   455,   468,   470,   471,   489,   472,   473,   474,
     509,   475,   476,   478,   483,   486,   487,   488,   491,   492,
     493,   494,   495,   496,   497,   572,   498,    40,    41,   526,
      42,   575,   583,   524,   584,   585,   586,   587,   588,   657,
      81,   629,    43,  -231,   635,   640,   650,   643,   621,   617,
     688,   695,   711,    13,    14,    15,   720,    16,    17,    18,
      19,   722,   742,    20,    21,    22,    23,    24,   723,    25,
      26,    27,    28,    29,   724,    30,   753,   758,   764,   693,
     694,   769,   658,   782,   132,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   784,    82,    89,   140,   219,   346,
     406,   347,   537,   580,   512,   459,   477,   705,   657,   348,
     349,   657,   657,   657,   368,   288,   530,   622,   762,   689,
     665,   746,   788,   801,   768,   657,   792,   699,   716,   523,
     728,   719,   233,   757,   710,   797,   134,   270,   582,   748,
      41,   396,    42,   212,     0,     0,   657,     0,     0,     0,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,   772,     0,
     657,   657,     0,   657,   657,   657,   657,     0,     0,     0,
       0,     0,   657,     0,     0,     0,     0,     0,   253,   751,
     752,   657,   755,   756,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   800,     0,     0,     0,     0,   657,     0,
       0,     0,     0,   657,     0,   657,   657,   657,   657,     0,
       0,     0,   657,   657,     0,     0,     0,     0,     0,     0,
     657,     0,     0,   657,   796,     0,     0,     0,     0,   798,
       0,     0,     0,     0,   799,   115,   116,   117,   118,   119,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
       0,   811,     0,     0,     0,     0,     0,    13,    14,    15,
     814,    16,    17,    18,    19,     0,     0,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,   180,   181,   182,   183,
       0,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,     0,     0,    40,    41,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,    43,     0,
       0,   225,    13,    14,    15,     0,    16,    17,    18,    19,
       0,     0,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     396,    42,     0,     0,     0,   310,   311,   312,   313,     0,
     315,     0,     0,   397,     0,     0,     0,     0,   321,     0,
     322,   323,   324,   325,   326,   327,   328,   329,   330,     0,
       0,     0,     0,     0,   333,     0,     0,   337,   338,   339,
     340,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,   354,   355,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   370,   371,   372,   373,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,   412,   413,   414,   415,   416,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     514,   515,   516,   517,   518,   519,   520,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   527,
     528,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   546,   547,   548,
     549,     0,     0,     0,     0,     0,     0,   551,     0,     0,
       0,     0,     0,     0,     0,   578,   579,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   627
};

static const yytype_int16 yycheck[] =
{
       1,   184,    96,    97,   315,    98,   244,   136,   185,    10,
     351,     5,    13,    14,    15,    16,    17,    18,    19,    20,
       5,    22,    23,    24,   374,   375,   376,   377,   431,    11,
       8,    21,   435,    13,    13,    13,    22,    15,    22,   398,
     551,    42,    20,   317,   342,    23,    98,    25,    26,     8,
      22,   764,   146,    29,    30,    31,    34,   568,   569,   100,
      91,    39,   103,   431,    97,    91,    44,   435,   579,   342,
      46,    47,    48,    49,    91,    91,    91,   480,   791,    54,
      55,   112,    36,    37,    38,   342,   112,    88,   110,   111,
     342,   764,    93,   119,    92,    96,    97,   113,    12,   100,
     398,   460,   103,   155,   119,   379,   617,   618,    13,   110,
     111,     0,   480,     7,   112,    20,   627,   790,    12,   160,
     114,   462,   120,    99,    92,   398,   116,   468,   114,   114,
     112,   132,   116,   113,   113,   113,   111,   113,   139,    93,
      94,   398,   114,    57,   112,   146,   398,   550,    29,    30,
      31,   173,   174,   175,   176,   177,    86,    87,    88,   160,
     112,     9,    10,    93,    94,    46,    47,    48,    49,    86,
      87,    91,   173,   174,   175,   176,   177,    85,   489,    91,
      91,   182,   183,    91,    91,     8,    13,     8,   118,    91,
      13,   368,    15,   112,    91,   196,    44,    20,    91,   119,
      23,   118,    25,    26,   115,   112,     8,   119,   209,   117,
      12,    34,    91,   120,   121,   216,    39,   119,    99,   112,
     113,    44,   119,   224,   318,   112,   119,    54,    55,    56,
     231,    91,   113,   112,   235,    86,    87,    86,    87,   477,
     114,   120,   121,    86,    87,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    13,    85,   119,
      86,    91,    88,   114,    20,   114,   119,    93,    94,    86,
      87,   114,    86,    87,    88,   276,   114,   115,    91,    93,
      94,   631,   632,   633,   634,   115,   636,   637,   638,   639,
     117,   641,   642,    91,   644,   645,   646,   114,   112,    91,
     113,    13,   395,   104,   105,   106,   107,    91,    91,   310,
     311,   312,   313,   442,   315,   113,   317,   318,   689,    91,
     112,   692,   693,   694,    92,   326,   327,   328,   329,   113,
     113,   332,    91,   114,   335,   706,    91,    89,    90,    86,
     341,   113,    93,    94,   112,   113,    93,    94,   103,   350,
     351,    92,    22,   112,    95,    44,   727,    98,     8,   631,
     632,   633,   634,     7,   636,   637,   638,   639,   114,   641,
     642,   114,   644,   645,   646,   108,   109,   110,   379,   114,
     751,   752,   114,   754,   755,   756,   757,   108,   109,   110,
     559,    40,   763,    42,    43,   396,   565,   566,   567,   116,
     114,   772,   116,   114,   405,    82,    83,    84,   409,    63,
      64,    65,    66,    67,   114,   508,   116,   114,   789,   116,
      68,    69,    70,   794,   114,   796,   797,   798,   799,   375,
     376,   377,   803,   804,   112,   114,   114,   116,   114,    82,
     811,    84,   114,   814,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   114,    91,   116,    54,    55,   769,    54,
      55,   462,   115,   464,   632,   633,   634,   468,   636,   637,
     638,   639,   114,   641,   642,   115,   644,   645,   646,    54,
      55,    34,    35,   577,     9,    10,   669,   115,   489,   672,
     114,   115,    42,    43,    93,    94,     3,     4,    95,    96,
     108,   109,   115,   115,   115,   115,   507,    16,   509,   115,
     115,   115,   513,   514,   515,   516,   116,   119,   701,   115,
     703,    13,    14,    15,   113,    17,    18,    19,    20,   112,
     114,    23,    24,    25,    26,    27,   719,    29,    30,    31,
      32,    33,   114,    35,   114,   114,    34,   115,    28,    40,
      28,   112,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   114,   114,    39,   114,   114,   114,   114,   114,
     114,   572,   114,   114,   112,   114,   577,   114,   114,   114,
     114,   114,   114,   112,   115,   115,    41,   115,   115,   115,
      40,   115,   115,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,    12,   114,    99,   100,   113,
     102,   114,   114,   119,   114,   114,   114,   114,   114,   620,
      92,   114,   114,    76,    73,    76,    84,    79,    57,    86,
     115,    71,    58,    13,    14,    15,   115,    17,    18,    19,
      20,   114,    59,    23,    24,    25,    26,    27,   114,    29,
      30,    31,    32,    33,   114,    35,    92,    61,    60,   660,
     661,   115,   621,    96,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    62,    95,    11,    90,   143,   282,
     344,   282,   510,   538,   466,   398,   417,   688,   689,   282,
     282,   692,   693,   694,   319,   217,   502,   573,   735,   658,
     624,   714,   760,   786,   744,   706,   766,   663,   697,   480,
     711,   703,   160,   733,   695,   776,    76,   206,   543,   720,
     100,   101,   102,   133,    -1,    -1,   727,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,   742,    -1,    -1,    -1,    -1,    -1,    -1,   749,    -1,
     751,   752,    -1,   754,   755,   756,   757,    -1,    -1,    -1,
      -1,    -1,   763,    -1,    -1,    -1,    -1,    -1,   769,   728,
     729,   772,   731,   732,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   784,    -1,    -1,    -1,    -1,   789,    -1,
      -1,    -1,    -1,   794,    -1,   796,   797,   798,   799,    -1,
      -1,    -1,   803,   804,    -1,    -1,    -1,    -1,    -1,    -1,
     811,    -1,    -1,   814,   773,    -1,    -1,    -1,    -1,   778,
      -1,    -1,    -1,    -1,   783,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,   800,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
     809,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,   114,    -1,
      -1,   151,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,    -1,    -1,    -1,   245,   246,   247,   248,    -1,
     250,    -1,    -1,   114,    -1,    -1,    -1,    -1,   258,    -1,
     260,   261,   262,   263,   264,   265,   266,   267,   268,    -1,
      -1,    -1,    -1,    -1,   274,    -1,    -1,   277,   278,   279,
     280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   294,   295,   296,   297,   298,   299,
     300,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   321,   322,   323,   324,   325,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,   353,   354,   355,   356,   357,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,
     500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   517,   518,   519,
     520,    -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   535,   536,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   578
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    97,   123,   124,   125,   302,   303,    91,   293,     0,
       8,   128,   129,    13,    14,    15,    17,    18,    19,    20,
      23,    24,    25,    26,    27,    29,    30,    31,    32,    33,
      35,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      99,   100,   102,   114,   161,   162,   163,   164,   165,   166,
     167,   168,   170,   171,   173,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   205,   301,   305,   306,   307,   308,   314,
     317,    92,    95,    98,   267,   297,   304,   293,    12,   129,
     130,   131,   293,   293,   293,   293,   293,   293,   293,   293,
     112,   120,   121,   279,   280,   281,   289,   293,   293,   293,
      85,   117,   175,   176,   293,   281,   281,   281,   281,   281,
     112,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     112,   293,    44,   229,   307,   319,   112,   114,   293,     7,
     131,   132,   133,   134,   135,    21,   116,   169,   278,   293,
     114,    22,   148,   278,   278,   148,   169,   114,   119,   289,
     290,   291,   293,   289,   293,    89,    90,   172,   119,   172,
     172,   175,   175,    86,    87,    88,    93,    94,   112,   281,
     281,   281,   281,   281,    13,   203,   204,   281,   281,   281,
     281,   281,   281,   281,   281,   281,     8,    13,    15,    20,
      23,    25,    26,    34,    39,    44,   309,   310,   311,   312,
     114,   293,   319,   305,   293,   126,     8,   136,   137,   135,
     281,   278,   114,   114,   116,   281,   114,   114,   114,   169,
     114,   292,   113,   291,   114,   282,   114,   114,   118,   175,
     175,   175,   175,   175,   177,   115,   115,   115,   115,   293,
     115,   276,   277,   293,    91,   287,   113,   204,   115,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   293,   113,
     310,   114,   293,   313,    16,   113,   112,   104,   105,   106,
     107,   138,   139,   140,   141,   142,   143,   293,   137,   114,
     293,   114,   293,   293,    29,    30,    31,    46,    47,    48,
      49,   113,   178,   179,   180,   181,   182,   183,   184,   308,
     281,   281,   281,   281,   114,   281,   114,   119,   115,   112,
     114,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   114,   116,   281,   315,   288,   293,   281,   281,   281,
     281,    34,   144,   145,   146,   147,   140,   141,   142,   143,
      11,   112,   281,   281,   281,   281,   281,   281,   281,    28,
     174,   293,   293,   293,   293,   276,   277,   278,   203,   281,
     281,   281,   281,   281,   293,   293,   293,   293,   293,    40,
     230,    28,   316,   318,   113,   293,    54,    55,    54,    55,
      54,    55,    54,    55,   111,   293,   101,   114,   159,   160,
     161,   162,   173,   300,   314,    35,   147,   149,   293,   288,
     281,   281,   281,   281,   281,   281,   281,   112,     5,   114,
     296,   114,   114,   114,   114,   113,   114,   114,   114,   114,
     114,   112,   268,   269,   273,   279,   297,   268,   268,   268,
     277,   114,   112,   114,   114,   114,   114,   114,   114,   108,
     109,   110,   108,   109,   110,   114,   114,   148,   293,   160,
     228,   229,   112,   293,    39,   150,   151,   152,   112,   113,
     115,   115,   115,   115,   115,   115,   115,   177,   114,   269,
     270,   271,   273,   114,   269,   273,   114,   114,   114,    41,
     305,   114,   114,   114,   114,   114,   114,   114,   114,     9,
      10,   206,   207,   208,   209,   210,   229,   288,   293,    40,
     153,   154,   152,   288,   281,   281,   281,   281,   281,   281,
     281,   113,   113,   271,   119,   276,   113,   281,   281,   127,
     208,   113,   114,   148,   293,    42,    43,   154,   155,   156,
     157,   158,   113,   293,   293,   293,   281,   281,   281,   281,
     272,   281,    13,    54,    55,    56,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    85,   117,
     211,   212,    12,   231,   232,   114,   114,   115,   281,   281,
     156,   114,   296,   114,   114,   114,   114,   114,   114,   273,
     211,    36,    37,    38,    93,    94,   226,   227,    13,    20,
      13,    20,   226,   226,   226,   226,   227,   226,   226,   226,
     226,   226,   227,   227,   227,   211,   211,    86,    87,   114,
     293,    57,   232,   241,   242,   243,   278,   281,   211,   114,
     114,   222,   224,   223,   225,    73,   213,   214,   215,   216,
      76,   217,   218,    79,   219,   220,   221,    82,    83,    84,
      84,    82,    84,   118,   211,   211,   274,   293,   297,    68,
      69,    70,   260,   261,   262,   243,   114,   211,   114,   112,
     279,   280,   283,   284,   285,   287,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   115,   297,
      91,   103,   294,   293,   293,    71,   263,   264,   265,   262,
     114,   286,   287,   112,   287,   293,   274,   274,   274,   274,
     294,    58,   244,   245,   246,   247,   265,   113,   287,   286,
     115,   274,   114,   114,   114,     3,     4,   295,   293,    63,
      64,    65,    66,    67,   233,   234,   235,   236,   237,   238,
     239,   240,    59,   254,   255,   256,   247,   113,   293,   119,
     274,   297,   297,    92,   298,   297,   297,   295,    61,   248,
     249,   250,   235,   293,    60,   257,   258,   259,   256,   115,
     275,   119,   293,   119,   274,   274,   119,   274,   119,   274,
     274,   274,    96,   299,    62,   251,   252,   253,   250,   274,
     267,   299,   259,   276,   266,   274,   297,   298,   297,   297,
     293,   253,   274,   267,   299,   274,   274,   274,   274,   119,
     274,   297,   274,   274,   297,   274,   274
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   122,   123,   123,   125,   126,   127,   124,   128,   128,
     129,   130,   130,   131,   132,   133,   133,   134,   134,   135,
     136,   136,   137,   137,   137,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   143,   143,   143,   143,   143,   144,   144,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   159,   159,   160,   160,   160,   160,
     160,   160,   161,   161,   161,   161,   161,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   163,   164,   165,   165,   166,   167,   168,   169,   169,
     170,   171,   172,   172,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   177,   177,   178,   178,
     178,   179,   179,   179,   179,   180,   180,   180,   180,   181,
     182,   183,   184,   185,   185,   185,   185,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   201,   202,   203,   203,   204,   204,   205,   206,
     206,   207,   207,   208,   208,   209,   210,   211,   211,   211,
     211,   211,   212,   212,   212,   213,   212,   214,   212,   215,
     212,   216,   212,   217,   212,   218,   212,   219,   212,   220,
     212,   221,   212,   212,   222,   212,   223,   212,   212,   224,
     212,   225,   212,   212,   212,   212,   212,   212,   212,   226,
     226,   227,   227,   227,   227,   228,   228,   229,   230,   230,
     231,   231,   232,   233,   233,   234,   234,   235,   235,   235,
     235,   235,   236,   237,   237,   238,   238,   239,   240,   241,
     241,   242,   242,   243,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   250,   251,   251,   252,
     252,   253,   254,   254,   255,   255,   256,   257,   257,   258,
     258,   259,   259,   260,   260,   261,   261,   262,   262,   262,
     263,   263,   264,   264,   265,   266,   265,   265,   267,   268,
     268,   268,   268,   269,   270,   270,   272,   271,   271,   271,
     273,   274,   275,   275,   276,   276,   277,   277,   278,   278,
     279,   280,   281,   281,   281,   281,   281,   282,   281,   283,
     284,   285,   285,   285,   285,   285,   286,   286,   287,   288,
     288,   289,   290,   290,   291,   292,   291,   291,   293,   294,
     294,   295,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   304,   304,   305,   306,   306,   307,   307,   307,
     307,   307,   307,   308,   309,   309,   310,   310,   311,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   313,   313,
     315,   314,   316,   316,   317,   318,   319,   319
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     0,    19,     1,     2,
       2,     1,     2,     2,     2,     1,     0,     1,     2,     5,
       1,     2,     5,     4,     7,     1,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     5,     5,     5,     5,     5,     5,     4,     1,     0,
       5,     1,     2,     4,     3,     2,     2,     4,     1,     0,
       1,     2,     4,     3,     1,     2,     5,     3,     1,     2,
       1,     1,     5,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     5,     4,     4,     4,     4,     2,     0,
       4,     4,     1,     1,     6,     4,     0,     3,     2,     3,
       3,     3,     3,     3,     1,     1,     2,     0,     1,     1,
       1,     8,     7,     7,     7,     1,     1,     1,     1,     7,
       7,     7,     7,     8,     7,     7,     7,     5,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     7,
       7,     7,     7,     8,     8,     8,     8,     3,     5,     4,
       4,     5,     7,     4,     1,     2,     3,     5,     4,     1,
       0,     1,     2,     1,     1,     5,     4,     3,     2,     3,
       3,     1,     3,     3,     3,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     2,     0,
       4,     0,     4,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     6,     4,     0,
       1,     2,     3,     1,     0,     1,     2,     1,     1,     1,
       1,     1,     3,     3,     5,     3,     5,     3,     3,     1,
       0,     1,     2,     5,     3,     1,     0,     1,     2,     4,
       6,     1,     0,     1,     2,     4,     6,     1,     0,     1,
       2,     4,     1,     0,     1,     2,     4,     1,     0,     1,
       2,     4,     4,     1,     0,     1,     2,     4,     4,     4,
       1,     0,     1,     2,     6,     0,     7,     4,     1,     1,
       1,     2,     2,     3,     1,     2,     0,     4,     1,     1,
       1,     6,     2,     0,     3,     1,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     2,     2,     0,     4,     1,
       1,     1,     3,     1,     2,     4,     1,     2,     1,     1,
       2,     3,     1,     2,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       4,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     1,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     6,     4,     0,     1,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 168 "policy_parse.y" /* yacc.c:1646  */
    { if (define_policy(pass, 0) == -1) return -1; }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 170 "policy_parse.y" /* yacc.c:1646  */
    { if (pass == 1) { if (policydb_index_classes(policydbp)) return -1; }
                            else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1; }}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 173 "policy_parse.y" /* yacc.c:1646  */
    { if (pass == 1) { if (policydb_index_bools(policydbp)) return -1;}
			   else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1;}}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 181 "policy_parse.y" /* yacc.c:1646  */
    {if (define_class()) return -1;}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 187 "policy_parse.y" /* yacc.c:1646  */
    {if (define_initial_sid()) return -1;}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 198 "policy_parse.y" /* yacc.c:1646  */
    {if (define_common_perms()) return -1;}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "policy_parse.y" /* yacc.c:1646  */
    {if (define_av_perms(FALSE)) return -1;}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 206 "policy_parse.y" /* yacc.c:1646  */
    {if (define_av_perms(TRUE)) return -1;}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 208 "policy_parse.y" /* yacc.c:1646  */
    {if (define_av_perms(TRUE)) return -1;}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 223 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_user(DEFAULT_SOURCE)) return -1; }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 225 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_user(DEFAULT_TARGET)) return -1; }
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 228 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_role(DEFAULT_SOURCE)) return -1; }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 230 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_role(DEFAULT_TARGET)) return -1; }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 233 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_type(DEFAULT_SOURCE)) return -1; }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 235 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_type(DEFAULT_TARGET)) return -1; }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 238 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_SOURCE_LOW)) return -1; }
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 240 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_SOURCE_HIGH)) return -1; }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 242 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_SOURCE_LOW_HIGH)) return -1; }
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 244 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_TARGET_LOW)) return -1; }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 246 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_TARGET_HIGH)) return -1; }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 248 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_TARGET_LOW_HIGH)) return -1; }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 250 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_GLBLUB)) return -1; }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 261 "policy_parse.y" /* yacc.c:1646  */
    {if (define_sens()) return -1;}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 263 "policy_parse.y" /* yacc.c:1646  */
    {if (define_sens()) return -1;}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 268 "policy_parse.y" /* yacc.c:1646  */
    {if (define_dominance()) return -1;}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 270 "policy_parse.y" /* yacc.c:1646  */
    {if (define_dominance()) return -1;}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 279 "policy_parse.y" /* yacc.c:1646  */
    {if (define_category()) return -1;}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 281 "policy_parse.y" /* yacc.c:1646  */
    {if (define_category()) return -1;}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 287 "policy_parse.y" /* yacc.c:1646  */
    {if (define_level()) return -1;}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 289 "policy_parse.y" /* yacc.c:1646  */
    {if (define_level()) return -1;}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 298 "policy_parse.y" /* yacc.c:1646  */
    { if (define_constraint((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 301 "policy_parse.y" /* yacc.c:1646  */
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 335 "policy_parse.y" /* yacc.c:1646  */
    { if (define_attrib()) return -1;}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 338 "policy_parse.y" /* yacc.c:1646  */
    { if (expand_attrib()) return -1;}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 341 "policy_parse.y" /* yacc.c:1646  */
    {if (define_type(1)) return -1;}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 343 "policy_parse.y" /* yacc.c:1646  */
    {if (define_type(0)) return -1;}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 346 "policy_parse.y" /* yacc.c:1646  */
    {if (define_typealias()) return -1;}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 349 "policy_parse.y" /* yacc.c:1646  */
    {if (define_typeattribute()) return -1;}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 352 "policy_parse.y" /* yacc.c:1646  */
    {if (define_typebounds()) return -1;}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 358 "policy_parse.y" /* yacc.c:1646  */
    { if (define_bool_tunable(0)) return -1; }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 361 "policy_parse.y" /* yacc.c:1646  */
    { if (define_bool_tunable(1)) return -1; }
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 364 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("T",0)) return -1; }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 366 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("F",0)) return -1; }
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 369 "policy_parse.y" /* yacc.c:1646  */
    { if (pass == 2) { if (define_conditional((cond_expr_t*)(yyvsp[-4].ptr), (avrule_t*)(yyvsp[-2].ptr), (avrule_t*)(yyvsp[0].ptr)) < 0) return -1;  }}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 372 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 374 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 377 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr);}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 379 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_NOT, (yyvsp[0].ptr), 0);
			  if ((yyval.ptr) == 0) return -1; }
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 382 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_AND, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 385 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_OR, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return   -1; }
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 388 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_XOR, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 391 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_EQ, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 394 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_NEQ, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 397 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 400 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_BOOL,0, 0);
			  if ((yyval.ptr) == COND_ERR) return   -1; }
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 404 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_pol_list((avrule_t *)(yyvsp[-1].ptr), (avrule_t *)(yyvsp[0].ptr)); }
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 406 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 409 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 411 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 413 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 416 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_filename_trans() ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 419 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_compute_type(AVRULE_TRANSITION) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 422 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_compute_type(AVRULE_MEMBER) ;
                          if ((yyval.ptr) ==  COND_ERR) return -1;}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 425 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_compute_type(AVRULE_CHANGE) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 429 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 431 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 433 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 435 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 438 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_ALLOWED) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 442 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITALLOW) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 446 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITDENY) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 450 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_DONTAUDIT);
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 455 "policy_parse.y" /* yacc.c:1646  */
    {if (define_filename_trans()) return -1; }
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 457 "policy_parse.y" /* yacc.c:1646  */
    {if (define_compute_type(AVRULE_TRANSITION)) return -1;}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 459 "policy_parse.y" /* yacc.c:1646  */
    {if (define_compute_type(AVRULE_MEMBER)) return -1;}
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 461 "policy_parse.y" /* yacc.c:1646  */
    {if (define_compute_type(AVRULE_CHANGE)) return -1;}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 464 "policy_parse.y" /* yacc.c:1646  */
    { if (define_range_trans(0)) return -1; }
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 466 "policy_parse.y" /* yacc.c:1646  */
    { if (define_range_trans(1)) return -1; }
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 479 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_ALLOWED)) return -1; }
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 482 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_AUDITALLOW)) return -1; }
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 485 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_AUDITDENY)) return -1; }
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 488 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_DONTAUDIT)) return -1; }
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 491 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_NEVERALLOW)) return -1; }
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 494 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_ALLOWED)) return -1; }
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 497 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_AUDITALLOW)) return -1; }
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 500 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_DONTAUDIT)) return -1; }
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 503 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_NEVERALLOW)) return -1; }
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 506 "policy_parse.y" /* yacc.c:1646  */
    {if (define_attrib_role()) return -1; }
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 509 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_types()) return -1;}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 512 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_attr()) return -1;}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 517 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_trans(0)) return -1; }
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 519 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_trans(1)) return -1;}
#line 2781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 522 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_allow()) return -1; }
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 525 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 527 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = merge_roles_dom((role_datum_t*)(yyvsp[-1].ptr), (role_datum_t*)(yyvsp[0].ptr)); if ((yyval.ptr) == 0) return -1;}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 530 "policy_parse.y" /* yacc.c:1646  */
    {(yyval.ptr) = define_role_dom(NULL); if ((yyval.ptr) == 0) return -1;}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 532 "policy_parse.y" /* yacc.c:1646  */
    {(yyval.ptr) = define_role_dom((role_datum_t*)(yyvsp[-1].ptr)); if ((yyval.ptr) == 0) return -1;}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 535 "policy_parse.y" /* yacc.c:1646  */
    {if (define_roleattribute()) return -1;}
#line 2817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 547 "policy_parse.y" /* yacc.c:1646  */
    { if (define_constraint((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 550 "policy_parse.y" /* yacc.c:1646  */
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 553 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = (yyvsp[-1].valptr); }
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 555 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NOT, (yyvsp[0].valptr), 0);
			  if ((yyval.valptr) == 0) return -1; }
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 558 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_AND, (yyvsp[-2].valptr), (yyvsp[0].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 561 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_OR, (yyvsp[-2].valptr), (yyvsp[0].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 564 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = (yyvsp[0].valptr); }
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 567 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 570 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 573 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_TYPE, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 575 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 576 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_USER, (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 578 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 579 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_TARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 581 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 582 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_XTARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 584 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 585 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 587 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 588 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 590 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 591 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_XTARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 593 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 594 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 596 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 597 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 599 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 600 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_XTARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 603 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 605 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 606 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 608 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 609 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 612 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[0].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 614 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 615 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 617 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 618 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 621 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1L2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 624 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 627 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1L2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 630 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1H2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 633 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H1, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 636 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L2H2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 640 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_EQ; }
#line 3114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 642 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_NEQ; }
#line 3120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 645 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = (yyvsp[0].valptr); }
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 647 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_DOM; }
#line 3132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 649 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_DOMBY; }
#line 3138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 651 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_INCOMP; }
#line 3144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 657 "policy_parse.y" /* yacc.c:1646  */
    {if (define_user()) return -1;}
#line 3150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 666 "policy_parse.y" /* yacc.c:1646  */
    {if (define_initial_sid_context()) return -1;}
#line 3156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 680 "policy_parse.y" /* yacc.c:1646  */
    {if (define_pirq_context((yyvsp[-1].val))) return -1;}
#line 3162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 683 "policy_parse.y" /* yacc.c:1646  */
    {if (define_iomem_context((yyvsp[-1].val64),(yyvsp[-1].val64))) return -1;}
#line 3168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 685 "policy_parse.y" /* yacc.c:1646  */
    {if (define_iomem_context((yyvsp[-3].val64),(yyvsp[-1].val64))) return -1;}
#line 3174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 688 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ioport_context((yyvsp[-1].val),(yyvsp[-1].val))) return -1;}
#line 3180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 690 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ioport_context((yyvsp[-3].val),(yyvsp[-1].val))) return -1;}
#line 3186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 693 "policy_parse.y" /* yacc.c:1646  */
    {if (define_pcidevice_context((yyvsp[-1].val))) return -1;}
#line 3192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 696 "policy_parse.y" /* yacc.c:1646  */
    {if (define_devicetree_context()) return -1;}
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 705 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_context((yyvsp[-3].val),(yyvsp[-2].val))) return -1;}
#line 3204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 716 "policy_parse.y" /* yacc.c:1646  */
    {if (define_port_context((yyvsp[-1].val),(yyvsp[-1].val))) return -1;}
#line 3210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 718 "policy_parse.y" /* yacc.c:1646  */
    {if (define_port_context((yyvsp[-3].val),(yyvsp[-1].val))) return -1;}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 727 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ibpkey_context((yyvsp[-1].val),(yyvsp[-1].val))) return -1;}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 729 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ibpkey_context((yyvsp[-3].val),(yyvsp[-1].val))) return -1;}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 738 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ibendport_context((yyvsp[-1].val))) return -1;}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 747 "policy_parse.y" /* yacc.c:1646  */
    {if (define_netif_context()) return -1;}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 756 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ipv4_node_context()) return -1;}
#line 3246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 758 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ipv6_node_context()) return -1;}
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 767 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_use(SECURITY_FS_USE_XATTR)) return -1;}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 769 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_use(SECURITY_FS_USE_TASK)) return -1;}
#line 3264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 771 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_use(SECURITY_FS_USE_TRANS)) return -1;}
#line 3270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 780 "policy_parse.y" /* yacc.c:1646  */
    {if (define_genfs_context(1)) return -1;}
#line 3276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 781 "policy_parse.y" /* yacc.c:1646  */
    {insert_id("-", 0);}
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 782 "policy_parse.y" /* yacc.c:1646  */
    {if (define_genfs_context(1)) return -1;}
#line 3288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 784 "policy_parse.y" /* yacc.c:1646  */
    {if (define_genfs_context(0)) return -1;}
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 787 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 790 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 792 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 794 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1; }
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 796 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 804 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("-", 0)) return -1; }
#line 3331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 809 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 817 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 819 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 822 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 824 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 834 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 836 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 838 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("*", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 841 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
#line 3387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 844 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
#line 3394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 846 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("-", 0)) return -1; }
#line 3400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 847 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 850 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 1)) return -1; }
#line 3412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 853 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("*", 1)) return -1; }
#line 3418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 865 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext, 1)) return -1; }
#line 3424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 874 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("-", 0)) return -1; }
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 877 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 880 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 882 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 885 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 887 "policy_parse.y" /* yacc.c:1646  */
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
#line 3460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 890 "policy_parse.y" /* yacc.c:1646  */
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 893 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.val) = strtoul(yytext,NULL,0); }
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 896 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.val64) = strtoull(yytext,NULL,0); }
#line 3478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 899 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 902 "policy_parse.y" /* yacc.c:1646  */
    {if (define_polcap()) return -1;}
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 905 "policy_parse.y" /* yacc.c:1646  */
    {if (define_permissive()) return -1;}
#line 3496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 910 "policy_parse.y" /* yacc.c:1646  */
    { if (end_avrule_block(pass) == -1) return -1;
                          if (policydb_index_others(NULL, policydbp, 0)) return -1;
                        }
#line 3504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 915 "policy_parse.y" /* yacc.c:1646  */
    { if (define_policy(pass, 1) == -1) return -1; }
#line 3510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 918 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 920 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 944 "policy_parse.y" /* yacc.c:1646  */
    { if (require_class(pass)) return -1; }
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 946 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_role; }
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 947 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_type; }
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 948 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_attribute; }
#line 3546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 949 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_attribute_role; }
#line 3552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 950 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_user; }
#line 3558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 951 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_bool; }
#line 3564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 952 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_tunable; }
#line 3570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 953 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_sens; }
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 954 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_cat; }
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 957 "policy_parse.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].require_func) (pass)) return -1; }
#line 3588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 959 "policy_parse.y" /* yacc.c:1646  */
    { if ((yyvsp[-3].require_func) (pass)) return -1; }
#line 3594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 962 "policy_parse.y" /* yacc.c:1646  */
    { if (end_avrule_block(pass) == -1) return -1; }
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 964 "policy_parse.y" /* yacc.c:1646  */
    { if (end_optional(pass) == -1) return -1; }
#line 3606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 967 "policy_parse.y" /* yacc.c:1646  */
    { if (end_avrule_block(pass) == -1) return -1; }
#line 3612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 971 "policy_parse.y" /* yacc.c:1646  */
    { if (begin_optional(pass) == -1) return -1; }
#line 3618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 974 "policy_parse.y" /* yacc.c:1646  */
    { if (begin_optional_else(pass) == -1) return -1; }
#line 3624 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3628 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
