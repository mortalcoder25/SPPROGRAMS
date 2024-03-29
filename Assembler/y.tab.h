
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DD = 258,
     MVI = 259,
     LOADI = 260,
     ADD = 261,
     MOV = 262,
     INC = 263,
     CMP = 264,
     JE = 265,
     ADDI = 266,
     JMP = 267,
     STORE = 268,
     STOP = 269,
     SPACE = 270,
     NUMBER = 271,
     ID = 272,
     NEWLINE = 273,
     COMMENT = 274,
     A = 275,
     B = 276,
     C = 277,
     I = 278,
     STORI = 279,
     LOAD = 280
   };
#endif
/* Tokens.  */
#define DD 258
#define MVI 259
#define LOADI 260
#define ADD 261
#define MOV 262
#define INC 263
#define CMP 264
#define JE 265
#define ADDI 266
#define JMP 267
#define STORE 268
#define STOP 269
#define SPACE 270
#define NUMBER 271
#define ID 272
#define NEWLINE 273
#define COMMENT 274
#define A 275
#define B 276
#define C 277
#define I 278
#define STORI 279
#define LOAD 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 23 "Assembler.y"

    char* s;
    int i;



/* Line 1676 of yacc.c  */
#line 109 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


