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

#ifndef YY_SEMANAGE_Y_TAB_H_INCLUDED
# define YY_SEMANAGE_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int semanage_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MODULE_STORE = 258,
    VERSION = 259,
    EXPAND_CHECK = 260,
    FILE_MODE = 261,
    SAVE_PREVIOUS = 262,
    SAVE_LINKED = 263,
    TARGET_PLATFORM = 264,
    COMPILER_DIR = 265,
    IGNORE_MODULE_CACHE = 266,
    STORE_ROOT = 267,
    OPTIMIZE_POLICY = 268,
    LOAD_POLICY_START = 269,
    SETFILES_START = 270,
    SEFCONTEXT_COMPILE_START = 271,
    DISABLE_GENHOMEDIRCON = 272,
    HANDLE_UNKNOWN = 273,
    USEPASSWD = 274,
    IGNOREDIRS = 275,
    BZIP_BLOCKSIZE = 276,
    BZIP_SMALL = 277,
    REMOVE_HLL = 278,
    VERIFY_MOD_START = 279,
    VERIFY_LINKED_START = 280,
    VERIFY_KERNEL_START = 281,
    BLOCK_END = 282,
    PROG_PATH = 283,
    PROG_ARGS = 284,
    ARG = 285
  };
#endif
/* Tokens.  */
#define MODULE_STORE 258
#define VERSION 259
#define EXPAND_CHECK 260
#define FILE_MODE 261
#define SAVE_PREVIOUS 262
#define SAVE_LINKED 263
#define TARGET_PLATFORM 264
#define COMPILER_DIR 265
#define IGNORE_MODULE_CACHE 266
#define STORE_ROOT 267
#define OPTIMIZE_POLICY 268
#define LOAD_POLICY_START 269
#define SETFILES_START 270
#define SEFCONTEXT_COMPILE_START 271
#define DISABLE_GENHOMEDIRCON 272
#define HANDLE_UNKNOWN 273
#define USEPASSWD 274
#define IGNOREDIRS 275
#define BZIP_BLOCKSIZE 276
#define BZIP_SMALL 277
#define REMOVE_HLL 278
#define VERIFY_MOD_START 279
#define VERIFY_LINKED_START 280
#define VERIFY_KERNEL_START 281
#define BLOCK_END 282
#define PROG_PATH 283
#define PROG_ARGS 284
#define ARG 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 57 "conf-parse.y" /* yacc.c:1909  */

        int d;
        char *s;

#line 119 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE semanage_lval;

int semanage_parse (void);

#endif /* !YY_SEMANAGE_Y_TAB_H_INCLUDED  */
