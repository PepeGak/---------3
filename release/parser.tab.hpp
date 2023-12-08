/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PROGRAM = 258,                 /* PROGRAM  */
    END_PROGRAM = 259,             /* END_PROGRAM  */
    NEW_LINE = 260,                /* NEW_LINE  */
    OPERATOR = 261,                /* OPERATOR  */
    VAR = 262,                     /* VAR  */
    END_VAR = 263,                 /* END_VAR  */
    FOR = 264,                     /* FOR  */
    TO = 265,                      /* TO  */
    DO = 266,                      /* DO  */
    END_FOR = 267,                 /* END_FOR  */
    IF = 268,                      /* IF  */
    THEN = 269,                    /* THEN  */
    ELSIF = 270,                   /* ELSIF  */
    END_IF = 271,                  /* END_IF  */
    WHILE = 272,                   /* WHILE  */
    END_WHILE = 273,               /* END_WHILE  */
    INT = 274,                     /* INT  */
    AS = 275,                      /* AS  */
    ASSIGNMENT = 276,              /* ASSIGNMENT  */
    EQUAL = 277,                   /* EQUAL  */
    NOT_EQUAL = 278,               /* NOT_EQUAL  */
    IDENTIFIER = 279,              /* IDENTIFIER  */
    NUMBER = 280                   /* NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PROGRAM 258
#define END_PROGRAM 259
#define NEW_LINE 260
#define OPERATOR 261
#define VAR 262
#define END_VAR 263
#define FOR 264
#define TO 265
#define DO 266
#define END_FOR 267
#define IF 268
#define THEN 269
#define ELSIF 270
#define END_IF 271
#define WHILE 272
#define END_WHILE 273
#define INT 274
#define AS 275
#define ASSIGNMENT 276
#define EQUAL 277
#define NOT_EQUAL 278
#define IDENTIFIER 279
#define NUMBER 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "./src/parser.ypp"

    char* sVal;

#line 121 "parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
