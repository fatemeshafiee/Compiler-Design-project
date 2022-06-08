
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

	#include <stdio.h>
	extern  FILE* yyin;


/* Line 189 of yacc.c  */
#line 79 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 166 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  252

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,    14,    16,    19,    28,    29,
      33,    34,    39,    40,    44,    46,    48,    50,    52,    53,
      56,    57,    60,    62,    64,    66,    68,    70,    72,    74,
      76,    78,    80,    82,    84,    86,    88,    90,    92,    95,
      98,   102,   105,   109,   113,   121,   122,   129,   130,   133,
     141,   142,   149,   150,   153,   159,   169,   172,   177,   182,
     189,   196,   198,   201,   205,   208,   211,   214,   219,   224,
     228,   230,   232,   234,   236,   238,   240,   242,   244,   246,
     248,   250,   252,   256,   260,   266,   272,   274,   276,   280,
     286,   288,   289,   291,   293,   294,   296,   297,   299,   301,
     303,   305,   307,   309,   311,   313,   315,   317,   319,   322,
     324,   329,   333,   335,   339,   341,   347,   353,   358,   363,
     367,   370,   376,   377,   380,   381,   385,   386,   389,   391,
     393,   395,   397,   399,   403
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    -1,    49,    -1,     3,    14,    18,    19,
      22,    56,    23,    -1,    48,    -1,    50,    49,    -1,    54,
      42,    18,    51,    19,    22,    56,    23,    -1,    -1,    55,
      42,    52,    -1,    -1,    24,    55,    42,    53,    -1,    -1,
      24,    55,    42,    -1,    55,    -1,    13,    -1,     3,    -1,
       4,    -1,    -1,    58,    56,    -1,    -1,    59,    57,    -1,
      65,    -1,    71,    -1,    72,    -1,    89,    -1,    73,    -1,
      94,    -1,    62,    -1,    68,    -1,    71,    -1,    72,    -1,
      89,    -1,    73,    -1,    94,    -1,    62,    -1,    60,    -1,
      61,    -1,    16,    17,    -1,    15,    17,    -1,    12,    98,
      17,    -1,    12,    17,    -1,    22,    56,    23,    -1,    22,
      57,    23,    -1,     5,    18,    79,    19,    63,    66,    67,
      -1,    -1,     9,    18,    79,    19,    63,    66,    -1,    -1,
       6,    63,    -1,     5,    18,    79,    19,    64,    69,    70,
      -1,    -1,     9,    18,    79,    19,    64,    69,    -1,    -1,
       6,    64,    -1,    10,    18,    79,    19,    64,    -1,    11,
      18,    82,    24,    81,    24,    83,    19,    64,    -1,    75,
      17,    -1,    42,    41,    75,    17,    -1,    93,    41,    75,
      17,    -1,    18,    42,    41,    75,    19,    17,    -1,    18,
      93,    41,    75,    19,    17,    -1,    98,    -1,    76,    98,
      -1,    75,    77,    75,    -1,    36,    75,    -1,    78,    42,
      -1,    42,    78,    -1,    78,    18,    42,    19,    -1,    18,
      42,    19,    78,    -1,    18,    74,    19,    -1,    74,    -1,
      37,    -1,    38,    -1,    85,    -1,    84,    -1,    35,    -1,
      37,    -1,    38,    -1,    39,    -1,    40,    -1,     8,    -1,
       7,    -1,    80,    84,    79,    -1,    80,    85,    79,    -1,
      18,    80,    84,    79,    19,    -1,    18,    80,    85,    79,
      19,    -1,    80,    -1,    75,    -1,    42,    41,    75,    -1,
      18,    42,    41,    75,    19,    -1,    79,    -1,    -1,    79,
      -1,    86,    -1,    -1,    79,    -1,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,    25,    -1,    31,
      -1,    32,    -1,    33,    -1,    34,    -1,    87,    -1,    55,
      99,    -1,    88,    -1,    55,    99,    41,    75,    -1,    55,
      42,    92,    -1,    90,    -1,    55,    99,    17,    -1,    91,
      -1,    55,    99,    41,    98,    17,    -1,    55,    99,    41,
      75,    17,    -1,    55,    42,    92,    17,    -1,    20,    43,
      21,    92,    -1,    20,    43,    21,    -1,    42,    92,    -1,
      42,    18,    95,    19,    17,    -1,    -1,    98,    96,    -1,
      -1,    24,    98,    97,    -1,    -1,    24,    98,    -1,    45,
      -1,    43,    -1,    44,    -1,    42,    -1,    93,    -1,    42,
      24,    99,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    33,    36,    40,    41,    44,    47,    49,
      51,    53,    55,    57,    60,    61,    64,    65,    67,    69,
      71,    73,    76,    77,    78,    79,    80,    81,    82,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    96,    99,
     102,   103,   106,   110,   113,   115,   117,   119,   121,   124,
     126,   128,   130,   132,   135,   138,   142,   143,   144,   145,
     146,   149,   150,   151,   152,   153,   154,   155,   156,   159,
     160,   167,   168,   171,   172,   173,   174,   175,   176,   177,
     180,   181,   184,   185,   186,   187,   188,   191,   192,   193,
     196,   197,   200,   201,   202,   205,   206,   209,   210,   211,
     212,   213,   214,   217,   218,   219,   220,   223,   224,   225,
     228,   231,   234,   235,   236,   239,   240,   243,   246,   247,
     250,   253,   255,   257,   259,   261,   263,   265,   268,   269,
     270,   271,   272,   275,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_INT", "TOKEN_CHAR", "TOKEN_IF",
  "TOKEN_ELSE", "TOKEN_MINUSEMINUSE", "TOKEN_PLUSPLUS", "TOKEN_ELSEIF",
  "TOKEN_WHILE", "TOKEN_FOR", "TOKEN_RETURN", "TOKEN_VOID", "TOKEN_MAIN",
  "TOKEN_CONTINUE", "TOKEN_BREAK", "TOKEN_DOT", "TOKEN_LEFTPAR",
  "TOKEN_RIGHTPAR", "TOKEN_LEFTBRACKET", "TOKEN_RIGHTBRACKET",
  "TOKEN_LEFTBRACE", "TOKEN_RIGHTBRACE", "TOKEN_COMMA", "TOKEN_LESS",
  "TOKEN_LESSEQ", "TOKEN_EQUEL", "TOKEN_NOTEQUEL", "TOKEN_GREATER",
  "TOKEN_GREATEREQ", "TOKEN_OR", "TOKEN_AND", "TOKEN_DUBLEOR",
  "TOKEN_DUBLEAND", "TOKEN_POWER", "TOKEN_NOT", "TOKEN_PLUS",
  "TOKEN_MINUSE", "TOKEN_MULTIPLY", "TOKEN_DIVIDE", "TOKEN_ASSIGN",
  "TOKEN_IDENTIFIER", "TOKEN_INTCONST", "TOKEN_INVALIDINTCONST",
  "TOKEN_CHARCONST", "$accept", "input", "main_func", "functions",
  "function", "declaration1_func", "declaration2_func",
  "declaration3_func", "return_type", "type", "statements",
  "loop_statements", "statement", "loop_statement", "break_statement",
  "continue_statement", "return_statement", "brace", "loop_brace",
  "if_statement", "elseif_statement", "else_statement",
  "loop_if_statement", "loop_elseif_statement", "loop_else_statement",
  "while_statment", "for_statment", "expr_statment", "other_expr", "par",
  "sign_state", "opr", "single_opr", "conditions", "condition",
  "for_conditions", "initial", "iteration", "comp_opr", "bin_opr",
  "for_dec_statment", "for_dec_assign", "for_array_dec", "dec_statment",
  "dec_assign", "array_dec", "dim", "array", "call_func_statment", "arg1",
  "arg2", "arg3", "value", "names", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    49,    49,    50,    51,    51,
      52,    52,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    61,
      62,    62,    63,    64,    65,    66,    66,    67,    67,    68,
      69,    69,    70,    70,    71,    72,    73,    73,    73,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    80,    80,    80,
      81,    81,    82,    82,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    86,    86,    86,
      87,    88,    89,    89,    89,    90,    90,    91,    92,    92,
      93,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      98,    98,    98,    99,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     7,     1,     2,     8,     0,     3,
       0,     4,     0,     3,     1,     1,     1,     1,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     3,     3,     7,     0,     6,     0,     2,     7,
       0,     6,     0,     2,     5,     9,     2,     4,     4,     6,
       6,     1,     2,     3,     2,     2,     2,     4,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     5,     5,     1,     1,     3,     5,
       1,     0,     1,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     3,     1,     3,     1,     5,     5,     4,     4,     3,
       2,     5,     0,     2,     0,     3,     0,     2,     1,     1,
       1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    16,    17,    15,     0,     5,     3,     0,     0,    14,
       0,     1,     6,     0,     0,     8,     0,    16,     0,     0,
      18,     0,    10,     0,    81,    80,     0,     0,     0,     0,
       0,    71,    72,   131,   129,   130,   128,     0,     0,    18,
      28,    22,    23,    24,    26,    70,     0,     0,     0,    25,
     112,   114,   132,    27,    61,    18,     0,     9,     0,     0,
      94,    41,   131,   132,     0,     0,   131,    70,     0,   132,
     131,    64,   122,     0,     0,    66,   120,   134,     0,     4,
      19,    56,   102,    97,    98,    99,   100,   101,   103,   104,
     105,   106,    75,    76,    77,    78,    79,     0,    74,    73,
      62,     0,    65,     0,     0,     0,     0,   131,    87,     0,
      86,     0,     0,    92,     0,    93,   107,   109,    40,   131,
       0,     0,    69,     0,     0,   124,     0,     0,     0,     0,
     113,     0,    63,     0,     0,     7,    12,     0,   131,     0,
       0,     0,     0,     0,     0,   134,   108,    91,    68,     0,
       0,     0,     0,   123,   119,    57,   134,   133,   117,     0,
      61,    67,    58,     0,    11,   131,     0,     0,     0,    88,
      18,    45,    82,    83,    20,    54,   111,     0,    90,     0,
       0,     0,   121,   126,   118,   116,   115,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,    20,
      36,    37,    35,    29,    30,    31,    33,    32,    34,   110,
      96,    59,    60,     0,   125,    13,     0,    89,    84,    85,
      42,     0,     0,    44,     0,    39,    38,    43,    21,    95,
       0,   127,     0,    48,     0,     0,     0,     0,    55,    45,
      50,    46,     0,    52,     0,     0,    49,     0,    53,     0,
      50,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    18,    57,   164,     8,    37,
      38,   198,    39,   199,   200,   201,    40,   171,   175,    41,
     194,   223,   203,   243,   246,    42,    43,    44,    45,   108,
      47,    97,    48,   109,   110,   179,   114,   230,    98,    99,
     115,   116,   117,    49,    50,    51,    76,    63,    53,   124,
     153,   214,    54,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -169
static const yytype_int16 yypact[] =
{
     114,     6,  -169,  -169,    27,  -169,  -169,   114,    11,  -169,
      38,  -169,  -169,    63,    72,    93,    80,  -169,    88,    74,
      25,    97,    98,   113,  -169,  -169,   121,   126,    32,    92,
     198,  -169,  -169,   125,  -169,  -169,  -169,   104,   124,    25,
    -169,  -169,  -169,  -169,  -169,  -169,   293,   153,    47,  -169,
    -169,  -169,   107,  -169,  -169,    25,    93,  -169,   219,   219,
     186,  -169,   130,  -169,   135,   231,   192,   137,   417,   117,
      65,   119,   153,   118,   198,  -169,  -169,   101,    49,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,   198,  -169,  -169,
    -169,   122,  -169,   198,   140,   132,   252,    51,   417,   159,
     433,   160,   144,  -169,   164,  -169,  -169,  -169,  -169,   296,
     134,   198,  -169,   198,   172,   168,   193,   312,   171,   200,
    -169,   198,   417,   196,   331,  -169,   194,   264,   246,   433,
     198,   197,   219,   219,   199,   101,   179,   219,  -169,   367,
     384,   208,   153,  -169,   130,  -169,   220,  -169,  -169,   350,
     215,  -169,  -169,    93,  -169,   272,   198,   219,   219,   417,
      25,   236,  -169,  -169,   165,  -169,  -169,   198,  -169,   222,
     230,   233,  -169,   224,  -169,  -169,  -169,   209,   198,   401,
     239,   258,   229,   260,   275,   265,   267,   268,   263,   165,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,   417,
     219,  -169,  -169,   153,  -169,  -169,   401,  -169,  -169,  -169,
    -169,   219,   197,  -169,   219,  -169,  -169,  -169,  -169,  -169,
     274,  -169,   279,  -169,   280,   199,   197,   199,  -169,   236,
     302,  -169,   287,   306,   219,   199,  -169,   295,  -169,   199,
     302,  -169
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,   310,  -169,  -169,  -169,  -169,  -169,     4,
     -32,   136,  -169,  -169,  -169,  -169,  -168,  -124,  -134,  -169,
      95,  -169,  -169,    86,  -169,  -165,  -157,  -149,   -13,   -17,
    -169,  -169,   -25,   -59,   247,  -169,  -169,  -169,   -95,   -92,
    -169,  -169,  -169,  -148,  -169,  -169,   -67,   -15,  -120,  -169,
    -169,  -169,   -26,   -73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     111,   113,    64,    46,     9,    52,   202,    80,    75,   204,
     129,     9,    68,    71,    69,   142,    67,   205,   143,    19,
      10,   100,    46,   104,    52,   206,   207,    11,    17,     2,
      23,   202,    24,    25,   204,    26,    27,    28,    46,   146,
      52,    75,   205,    29,   167,    75,   125,   168,    68,    61,
     206,   207,    67,    13,   208,   157,    14,   127,    24,    25,
     105,    30,    31,    32,   112,   101,   130,    33,    34,    35,
      36,    73,    24,    25,    62,    34,    35,    36,   176,   208,
     132,    15,    75,   172,   173,    73,   134,   184,   178,   102,
     131,    16,   140,    67,    75,   148,    17,     2,   233,    24,
      25,   238,    20,   240,   149,   160,   150,    21,   190,   191,
      65,   248,   239,    75,   159,   250,    22,     1,     2,    55,
      68,    73,    56,   169,    67,   128,   183,     3,    30,    31,
      32,    58,    24,    25,    66,    34,    35,    36,   192,    59,
      75,    24,    25,    72,    60,    73,    77,    79,   103,   189,
      73,   229,   118,    46,    92,    52,   122,    46,   123,    52,
     209,   126,   232,   135,   133,   234,    74,   187,    17,     2,
     195,   216,    24,    25,   136,    26,    27,    28,   141,   144,
     196,   197,    46,    29,    52,   247,   145,   231,   147,    17,
       2,   151,   152,    24,    25,    62,    34,    35,    36,    24,
      25,    30,    31,    32,   106,    24,    25,    33,    34,    35,
      36,   120,    73,   156,   154,   161,    65,   158,   163,   170,
     177,   174,    30,    31,    32,   182,    24,    25,   107,    34,
      35,    36,   186,   121,    30,    31,    32,   106,    24,    25,
      70,    34,    35,    36,   128,   193,   210,   211,   213,    65,
     212,   215,   220,    24,    25,    30,    31,    32,   218,    24,
      25,   107,    34,    35,    36,   120,    73,    30,    31,    32,
     137,    24,    25,   119,    34,    35,    36,   219,   221,    24,
      25,   222,    65,   224,   225,   226,   227,   166,    30,    31,
      32,   120,    73,   235,   138,    34,    35,    36,   236,   237,
      30,    31,    32,    24,    25,   244,   165,    34,    35,    36,
      81,   242,   245,   188,   249,   120,    73,    12,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,   155,
      93,    94,    95,    96,   241,   228,   251,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,   162,    93,
      94,    95,    96,   139,     0,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,   185,    93,    94,
      95,    96,     0,     0,     0,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,   180,    93,    94,    95,
      96,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   181,    93,    94,    95,    96,     0,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     217,    93,    94,    95,    96,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,    93,    94,
      95,    96,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     0,    93,    94,    95,    96,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
      59,    60,    28,    20,     0,    20,   174,    39,    33,   174,
      77,     7,    29,    30,    29,   110,    29,   174,   110,    15,
      14,    47,    39,    55,    39,   174,   174,     0,     3,     4,
       5,   199,     7,     8,   199,    10,    11,    12,    55,   112,
      55,    66,   199,    18,   139,    70,    72,   139,    65,    17,
     199,   199,    65,    42,   174,   128,    18,    74,     7,     8,
      56,    36,    37,    38,    60,    18,    17,    42,    43,    44,
      45,    20,     7,     8,    42,    43,    44,    45,   145,   199,
      97,    18,   107,   142,   143,    20,   103,   154,   147,    42,
      41,    19,    41,   106,   119,   120,     3,     4,   222,     7,
       8,   235,    22,   237,   121,   131,   123,    19,   167,   168,
      18,   245,   236,   138,   131,   249,    42,     3,     4,    22,
     137,    20,    24,   140,   137,    24,   152,    13,    36,    37,
      38,    18,     7,     8,    42,    43,    44,    45,   170,    18,
     165,     7,     8,    18,    18,    20,    42,    23,    41,   166,
      20,   210,    17,   170,    35,   170,    19,   174,    41,   174,
     177,    43,   221,    23,    42,   224,    41,   163,     3,     4,
       5,   188,     7,     8,    42,    10,    11,    12,    19,    19,
      15,    16,   199,    18,   199,   244,    42,   213,    24,     3,
       4,    19,    24,     7,     8,    42,    43,    44,    45,     7,
       8,    36,    37,    38,    18,     7,     8,    42,    43,    44,
      45,    19,    20,    42,    21,    19,    18,    17,    24,    22,
      41,    22,    36,    37,    38,    17,     7,     8,    42,    43,
      44,    45,    17,    41,    36,    37,    38,    18,     7,     8,
      42,    43,    44,    45,    24,     9,    24,    17,    24,    18,
      17,    42,    23,     7,     8,    36,    37,    38,    19,     7,
       8,    42,    43,    44,    45,    19,    20,    36,    37,    38,
      18,     7,     8,    42,    43,    44,    45,    19,    18,     7,
       8,     6,    18,    18,    17,    17,    23,    41,    36,    37,
      38,    19,    20,    19,    42,    43,    44,    45,    19,    19,
      36,    37,    38,     7,     8,    18,    42,    43,    44,    45,
      17,     9,     6,    41,    19,    19,    20,     7,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    17,
      37,    38,    39,    40,   239,   199,   250,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    17,    37,
      38,    39,    40,   106,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    17,    37,    38,
      39,    40,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    37,    38,    39,
      40,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,    37,    38,    39,    40,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      19,    37,    38,    39,    40,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    13,    47,    48,    49,    50,    54,    55,
      14,     0,    49,    42,    18,    18,    19,     3,    51,    55,
      22,    19,    42,     5,     7,     8,    10,    11,    12,    18,
      36,    37,    38,    42,    43,    44,    45,    55,    56,    58,
      62,    65,    71,    72,    73,    74,    75,    76,    78,    89,
      90,    91,    93,    94,    98,    22,    24,    52,    18,    18,
      18,    17,    42,    93,    98,    18,    42,    74,    75,    93,
      42,    75,    18,    20,    41,    78,    92,    42,    99,    23,
      56,    17,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    37,    38,    39,    40,    77,    84,    85,
      98,    18,    42,    41,    56,    55,    18,    42,    75,    79,
      80,    79,    55,    79,    82,    86,    87,    88,    17,    42,
      19,    41,    19,    41,    95,    98,    43,    75,    24,    92,
      17,    41,    75,    42,    75,    23,    42,    18,    42,    80,
      41,    19,    84,    85,    19,    42,    99,    24,    78,    75,
      75,    19,    24,    96,    21,    17,    42,    99,    17,    75,
      98,    19,    17,    24,    53,    42,    41,    84,    85,    75,
      22,    63,    79,    79,    22,    64,    92,    41,    79,    81,
      19,    19,    17,    98,    92,    17,    17,    55,    41,    75,
      79,    79,    56,     9,    66,     5,    15,    16,    57,    59,
      60,    61,    62,    68,    71,    72,    73,    89,    94,    75,
      24,    17,    17,    24,    97,    42,    75,    19,    19,    19,
      23,    18,     6,    67,    18,    17,    17,    23,    57,    79,
      83,    98,    79,    63,    79,    19,    19,    19,    64,    63,
      64,    66,     9,    69,    18,     6,    70,    79,    64,    19,
      64,    69
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1643 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 278 "parser.y"


void yyerror(char *s){
	printf ("Error happend %s",s);
}
int yywrap(){
	return 1;
}
int main(void){
    yyin = fopen("input.txt","r");
	yyparse();
}
