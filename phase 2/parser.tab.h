
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
     TOKEN_INT = 258,
     TOKEN_CHAR = 259,
     TOKEN_IF = 260,
     TOKEN_ELSE = 261,
     TOKEN_MINUSEMINUSE = 262,
     TOKEN_PLUSPLUS = 263,
     TOKEN_ELSEIF = 264,
     TOKEN_WHILE = 265,
     TOKEN_FOR = 266,
     TOKEN_RETURN = 267,
     TOKEN_VOID = 268,
     TOKEN_MAIN = 269,
     TOKEN_CONTINUE = 270,
     TOKEN_BREAK = 271,
     TOKEN_DOT = 272,
     TOKEN_LEFTPAR = 273,
     TOKEN_RIGHTPAR = 274,
     TOKEN_LEFTBRACKET = 275,
     TOKEN_RIGHTBRACKET = 276,
     TOKEN_LEFTBRACE = 277,
     TOKEN_RIGHTBRACE = 278,
     TOKEN_COMMA = 279,
     TOKEN_LESS = 280,
     TOKEN_LESSEQ = 281,
     TOKEN_EQUEL = 282,
     TOKEN_NOTEQUEL = 283,
     TOKEN_GREATER = 284,
     TOKEN_GREATEREQ = 285,
     TOKEN_OR = 286,
     TOKEN_AND = 287,
     TOKEN_DUBLEOR = 288,
     TOKEN_DUBLEAND = 289,
     TOKEN_POWER = 290,
     TOKEN_NOT = 291,
     TOKEN_PLUS = 292,
     TOKEN_MINUSE = 293,
     TOKEN_MULTIPLY = 294,
     TOKEN_DIVIDE = 295,
     TOKEN_ASSIGN = 296,
     TOKEN_IDENTIFIER = 297,
     TOKEN_INTCONST = 298,
     TOKEN_INVALIDINTCONST = 299,
     TOKEN_CHARCONST = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


