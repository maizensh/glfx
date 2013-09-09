/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         glfxparse
#define yylex           glfxlex
#define yyerror         glfxerror
#define yylval          glfxlval
#define yychar          glfxchar
#define yydebug         glfxdebug
#define yynerrs         glfxnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 4 "glfx.ypp"

    #include <iostream>
    #include <map>
    #include <string>
    #include <vector>
    #include <sstream>
    
    #include "glfxParser.h"
    #include "glfxClasses.h"

    using namespace std;
    using namespace glfxParser;
    
    #ifdef _MSC_VER
    // MS's C++ compiler is more strict than gcc
    
    // bison related
    // Disable the warning about default being present but no other cases in switch
    #pragma warning( disable:4065 )

    // No unistd.h (for flex)
    #define YY_NO_UNISTD_H
    
    #endif
    #include "glfxScanner.h"

    static void errSyn();
    static void errSem(const string& str, int line=-1);

/* Line 371 of yacc.c  */
#line 105 "glfxLALRParser.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "glfxLALRParser.hpp".  */
#ifndef YY_GLFX_GLFXLALRPARSER_HPP_INCLUDED
# define YY_GLFX_GLFXLALRPARSER_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int glfxdebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SHADER = 258,
     PROGRAM = 259,
     INTERFACE = 260,
     IDENTIFIER = 261,
     STORAGEQ = 262,
     GL_FRAGDEPTH = 263,
     STORAGET = 264,
     SHADER_TYPE = 265,
     LP = 266,
     RP = 267,
     LB = 268,
     RB = 269,
     SC = 270,
     COMMA = 271,
     COLON = 272,
     EQUALS = 273,
     NUM = 274,
     INCLUDE = 275,
     SAMPLER = 276,
     FLOAT = 277,
     EMPTY_ARRAY_BRACKETS = 278
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE glfxlval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int glfxparse (void *YYPARSE_PARAM);
#else
int glfxparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int glfxparse (void);
#else
int glfxparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_GLFX_GLFXLALRPARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 194 "glfxLALRParser.cpp"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   84

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  44
/* YYNRULES -- Number of states.  */
#define YYNSTATES  88

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,    14,    23,    32,    34,    44,
      45,    46,    47,    49,    50,    54,    56,    59,    63,    66,
      70,    74,    78,    82,    84,    85,    90,    92,    93,    97,
      99,   100,   103,   106,   107,   109,   112,   114,   125,   128,
     129,   133,   135,   138,   141
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      25,     0,    -1,    25,    26,    -1,    -1,     5,    27,     6,
      29,    15,    28,    -1,     3,    27,     6,    11,    35,    12,
      29,    28,    -1,     4,    27,     6,    13,    41,    14,    15,
      28,    -1,    20,    -1,    21,    27,    30,    13,    33,    14,
      31,    15,    28,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      31,    16,    32,    -1,    32,    -1,     6,    40,    -1,    33,
      34,    15,    -1,    34,    15,    -1,     6,    18,     6,    -1,
       6,    18,    22,    -1,     6,    18,    19,    -1,    35,    16,
      36,    -1,    36,    -1,    -1,    37,    38,    39,    40,    -1,
       9,    -1,    -1,     7,     6,     6,    -1,    23,    -1,    -1,
      17,    19,    -1,    17,     6,    -1,    -1,    42,    -1,    42,
      43,    -1,    43,    -1,    10,    11,    19,    12,    18,     6,
      11,    12,    44,    15,    -1,    17,    45,    -1,    -1,    45,
      16,    46,    -1,    46,    -1,     7,    47,    -1,     8,    47,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    47,    50,    72,    76,    98,   117,
     122,   128,   134,   137,   142,   150,   159,   176,   190,   206,
     211,   216,   223,   233,   242,   247,   267,   270,   275,   282,
     285,   290,   294,   298,   303,   309,   314,   321,   344,   347,
     352,   356,   361,   369,   377
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SHADER", "PROGRAM", "INTERFACE",
  "IDENTIFIER", "STORAGEQ", "GL_FRAGDEPTH", "STORAGET", "SHADER_TYPE",
  "LP", "RP", "LB", "RB", "SC", "COMMA", "COLON", "EQUALS", "NUM",
  "INCLUDE", "SAMPLER", "FLOAT", "EMPTY_ARRAY_BRACKETS", "$accept", "prog",
  "tok", "lex_fx", "lex_passthrough", "read_block", "samplerClass",
  "samplerVars", "samplerVar", "samplerParamList", "samplerParam",
  "param_list", "fullparam", "storage", "param", "arrayBrackets",
  "location", "prog_def", "shaders_list", "shader_def", "shader_layout",
  "shader_layout_list", "layout", "read_parenthesis", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    25,    26,    26,    26,    26,    26,    27,
      28,    29,    30,    30,    31,    31,    32,    33,    33,    34,
      34,    34,    35,    35,    35,    36,    37,    37,    38,    39,
      39,    40,    40,    40,    41,    42,    42,    43,    44,    44,
      45,    45,    46,    46,    47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     6,     8,     8,     1,     9,     0,
       0,     0,     1,     0,     3,     1,     2,     3,     2,     3,
       3,     3,     3,     1,     0,     4,     1,     0,     3,     1,
       0,     2,     2,     0,     1,     2,     1,    10,     2,     0,
       3,     1,     2,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     9,     9,     9,     7,     9,     2,     0,
       0,     0,    13,     0,     0,    11,    12,     0,    24,     0,
       0,     0,    26,     0,    23,     0,     0,     0,    34,    36,
      10,     0,     0,     0,    11,    27,     0,    30,     0,     0,
      35,     4,     0,     0,     0,    18,    10,    22,     0,    29,
      33,     0,    10,    19,    21,    20,    33,     0,    15,    17,
       5,    28,     0,    25,     0,     6,    16,    10,     0,    32,
      31,     0,     8,    14,     0,     0,    39,     0,     0,    44,
      44,    38,    41,    37,    42,    43,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     8,     9,    41,    20,    17,    57,    58,    32,
      33,    23,    24,    25,    37,    50,    63,    27,    28,    29,
      78,    81,    82,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int8 yypact[] =
{
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    22,
      23,    24,    25,    -5,    20,   -46,   -46,    21,    10,    26,
      17,    29,   -46,    -3,   -46,    30,    27,    28,    26,   -46,
     -46,    31,     2,    32,   -46,    34,    33,    18,    35,    36,
     -46,   -46,    -4,    38,    37,   -46,   -46,   -46,    39,   -46,
      40,    41,   -46,   -46,   -46,   -46,    40,     9,   -46,   -46,
     -46,   -46,     4,   -46,    42,   -46,   -46,   -46,    38,   -46,
     -46,    44,   -46,   -46,    45,    43,    46,    19,    47,   -46,
     -46,    48,   -46,   -46,   -46,   -46,    19,   -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   -46,     7,   -45,     6,   -46,   -46,   -22,   -46,
      16,   -46,    49,   -46,   -46,   -46,     3,   -46,   -46,    50,
     -46,   -46,   -28,   -19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
static const yytype_int8 yytable[] =
{
       2,    60,    53,     3,     4,     5,    18,    65,    31,    34,
      69,    10,    11,    35,    12,    54,    43,   -27,    55,    22,
       6,     7,    72,    70,    67,    68,    79,    80,    13,    14,
      15,    16,    30,    19,    21,    31,    26,    36,    38,    48,
      46,    49,    39,    22,    56,    61,    73,    45,    44,    42,
      74,    52,    59,    64,    51,    76,    75,    62,    87,    66,
      71,    85,    83,    77,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,    47
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       0,    46,     6,     3,     4,     5,    11,    52,     6,    12,
       6,     4,     5,    16,     7,    19,    14,     7,    22,     9,
      20,    21,    67,    19,    15,    16,     7,     8,     6,     6,
       6,     6,    15,    13,    13,     6,    10,     7,    11,     6,
      34,    23,    14,     9,     6,     6,    68,    15,    32,    18,
       6,    15,    15,    12,    19,    12,    11,    17,    86,    56,
      18,    80,    15,    17,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,     0,     3,     4,     5,    20,    21,    26,    27,
      27,    27,    27,     6,     6,     6,     6,    30,    11,    13,
      29,    13,     9,    35,    36,    37,    10,    41,    42,    43,
      15,     6,    33,    34,    12,    16,     7,    38,    11,    14,
      43,    28,    18,    14,    34,    15,    29,    36,     6,    23,
      39,    19,    15,     6,    19,    22,     6,    31,    32,    15,
      28,     6,    17,    40,    12,    28,    40,    15,    16,     6,
      19,    18,    28,    32,     6,    11,    12,    17,    44,     7,
       8,    45,    46,    15,    47,    47,    16,    46
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
        case 3:
/* Line 1787 of yacc.c  */
#line 40 "glfx.ypp"
    { // Initialization code
    gEffect->m_sharedCode.str("");    // clear the stream
    gEffect->m_sharedCode<<"#line "<<glfxget_lineno()<<endl;
    gLexPassthrough=true;
}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 47 "glfx.ypp"
    {
    gEffect->m_interfaces[(yyvsp[(3) - (6)]).strs[0]]=Effect::InterfaceDcl((yyvsp[(4) - (6)]).strs[0], (yyvsp[(1) - (6)]).lineno);
}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 50 "glfx.ypp"
    {
    ostringstream shaderCode;
    // Add shader parameters
    for(vector<YYSTYPE::variable>::const_iterator it=(yyvsp[(5) - (8)]).vars->begin();it!=(yyvsp[(5) - (8)]).vars->end();++it) {
        string type(it->type);
        map<string, Effect::InterfaceDcl>::const_iterator varType=gEffect->m_interfaces.find(type);
        int lineno;
        if(varType!=gEffect->m_interfaces.end()) {
            type+=varType->second.id;
            lineno=varType->second.atLine;
        }
        else
            lineno=(yyvsp[(1) - (8)]).lineno;
        shaderCode<<"#line "<<lineno<<endl;
        shaderCode<<it->prepend<<' '<<type<<' '<<it->identifier<<';'<<endl;
    }
    delete (yyvsp[(5) - (8)]).vars;
    
    // Add definition and code
    shaderCode<<"void main()"<<endl<<"#line "<<(yyvsp[(7) - (8)]).lineno<<endl<<(yyvsp[(7) - (8)]).strs[0];
    gEffect->m_shaders[(yyvsp[(3) - (8)]).strs[0]]=shaderCode.str();
}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 72 "glfx.ypp"
    {
    (yyvsp[(5) - (8)]).prog->m_separable=(yyvsp[(1) - (8)]).boolean;
    gEffect->m_programs[(yyvsp[(3) - (8)]).strs[0]]=(yyvsp[(5) - (8)]).prog;
}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 76 "glfx.ypp"
    {
    FILE* includeF;
    string fName(gEffect->Dir());
    fName+=(yyvsp[(1) - (1)]).strs[0];
    fopen_s(&includeF, fName.c_str(), "rb");
    if(!includeF)
        errSem("Cannot open include file", (yyvsp[(1) - (1)]).lineno);
    fseek(includeF, 0, SEEK_END);
    int size=ftell(includeF)+1;
    unsigned char* includeStr=new unsigned char[size];
    rewind(includeF);
    fread(includeStr, 1, size, includeF);
    includeStr[size-1]=0;
    
    gEffect->m_includes++;
    gEffect->m_sharedCode<<"#line 1 "<<gEffect->m_includes<<endl;
    gEffect->m_sharedCode<<includeStr<<endl;
    gEffect->m_sharedCode<<"#line "<<(yyvsp[(1) - (1)]).lineno+1<<" 0"<<endl;
    
    fclose(includeF);
    delete[] includeStr;
}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 98 "glfx.ypp"
    {
    Sampler* samp=(yyvsp[(5) - (9)]).samp;
    samp->SetParam("Type", (yyvsp[(1) - (9)]).strs[0]);
    string dcl=samp->Descriptor();
    if(dcl.size() == 0)
        errSem("No sampler declaration can be generated", (yyvsp[(1) - (9)]).lineno);
    if((yyvsp[(3) - (9)]).strs[0].size()>0)
        gEffect->m_samplers[(yyvsp[(3) - (9)]).strs[0]]=new Sampler(*samp);
    for(vector<YYSTYPE::samplerVar>::const_iterator it=(yyvsp[(7) - (9)]).texNames->begin(); it!=(yyvsp[(7) - (9)]).texNames->end(); ++it) {
        gEffect->m_sharedCode<<"#line "<<(yyvsp[(1) - (9)]).lineno<<endl;
        gEffect->m_sharedCode<<it->binding<<" uniform "<<dcl<<' '<<it->name<<';'<<endl;
        gEffect->m_samplers[it->name]=new Sampler(*samp);
    }
    delete samp;
    delete (yyvsp[(7) - (9)]).texNames;
    gEffect->m_sharedCode<<"#line "<<glfxget_lineno()<<endl;
}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 117 "glfx.ypp"
    { /* Switch lex to fx scanning */
    gLexPassthrough=false;
}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 122 "glfx.ypp"
    { /* Switch lex to passthrough mode */
    gLexPassthrough=true;
    gEffect->m_sharedCode<<"#line "<<glfxget_lineno()<<endl;
}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 128 "glfx.ypp"
    { /* Read next block */
    (yyval).lineno=glfxget_lineno();
    (yyval).strs[0]=glfxreadblock('{', '}');
}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 134 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (1)]).strs[0];
}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 137 "glfx.ypp"
    {
    (yyval).strs[0]="";
}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 142 "glfx.ypp"
    {
    (yyval).texNames=(yyvsp[(1) - (3)]).texNames;
    
    YYSTYPE::samplerVar sv;
    sv.binding=(yyvsp[(3) - (3)]).strs[0];
    sv.name=(yyvsp[(3) - (3)]).strs[1];
    (yyval).texNames->push_back(sv);
}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 150 "glfx.ypp"
    {
    (yyval).texNames=new vector<YYSTYPE::samplerVar>;
    YYSTYPE::samplerVar sv;
    sv.binding=(yyvsp[(1) - (1)]).strs[0];
    sv.name=(yyvsp[(1) - (1)]).strs[1];
    (yyval).texNames->push_back(sv);
}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 159 "glfx.ypp"
    {
    ostringstream prepend;
    switch((yyvsp[(2) - (2)]).rType) {
    case REGISTER_INT:
        prepend<<"layout(binding="<<(yyvsp[(2) - (2)]).num<<") ";
        break;
    case REGISTER_NAME:
        prepend<<"layout(binding="<<(yyvsp[(2) - (2)]).strs[0]<<") ";
        break;
    }
    
    (yyval).strs[0]=prepend.str();
    (yyval).strs[1]=(yyvsp[(1) - (2)]).strs[0];
}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 176 "glfx.ypp"
    {
    (yyval).samp=(yyvsp[(1) - (3)]).samp;
    switch((yyvsp[(2) - (3)]).samplerParamType) {
    case SAMPLER_PARAM_STRING:
        (yyval).samp->SetParam((yyvsp[(2) - (3)]).strs[0], (yyvsp[(2) - (3)]).strs[1]);
        break;
    case SAMPLER_PARAM_INT:
        (yyval).samp->SetParam((yyvsp[(2) - (3)]).strs[0], (yyvsp[(2) - (3)]).unum);
        break;
    case SAMPLER_PARAM_FLOAT:
        (yyval).samp->SetParam((yyvsp[(2) - (3)]).strs[0], (yyvsp[(2) - (3)]).fnum);
        break;
    }
}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 190 "glfx.ypp"
    {
    (yyval).samp=new Sampler();
    switch((yyvsp[(1) - (2)]).samplerParamType) {
    case SAMPLER_PARAM_STRING:
        (yyval).samp->SetParam((yyvsp[(1) - (2)]).strs[0], (yyvsp[(1) - (2)]).strs[1]);
        break;
    case SAMPLER_PARAM_INT:
        (yyval).samp->SetParam((yyvsp[(1) - (2)]).strs[0], (yyvsp[(1) - (2)]).unum);
        break;
    case SAMPLER_PARAM_FLOAT:
        (yyval).samp->SetParam((yyvsp[(1) - (2)]).strs[0], (yyvsp[(1) - (2)]).fnum);
        break;
    }
}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 206 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (3)]).strs[0];
    (yyval).strs[1]=(yyvsp[(3) - (3)]).strs[0];
    (yyval).samplerParamType=SAMPLER_PARAM_STRING;
}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 211 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (3)]).strs[0];
    (yyval).fnum=(yyvsp[(3) - (3)]).fnum;
    (yyval).samplerParamType=SAMPLER_PARAM_FLOAT;
}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 216 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (3)]).strs[0];
    (yyval).num=(yyvsp[(3) - (3)]).num;
    (yyval).samplerParamType=SAMPLER_PARAM_INT;
}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 223 "glfx.ypp"
    {
    (yyval).vars=(yyvsp[(1) - (3)]).vars;

    YYSTYPE::variable var;
    var.prepend=(yyvsp[(3) - (3)]).strs[0];
    var.type=(yyvsp[(3) - (3)]).strs[1];
    var.identifier=(yyvsp[(3) - (3)]).strs[2];
    
    (yyval).vars->push_back(var);
}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 233 "glfx.ypp"
    {
    YYSTYPE::variable var;
    var.prepend=(yyvsp[(1) - (1)]).strs[0];
    var.type=(yyvsp[(1) - (1)]).strs[1];
    var.identifier=(yyvsp[(1) - (1)]).strs[2];
    
    (yyval).vars = new vector<YYSTYPE::variable>;
    (yyval).vars->push_back(var);
}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 242 "glfx.ypp"
    {
    (yyval).vars = new vector<YYSTYPE::variable>;
}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 247 "glfx.ypp"
    {
    ostringstream prepend;

    switch((yyvsp[(4) - (4)]).rType) {
    case REGISTER_INT:
        prepend<<"layout(location="<<(yyvsp[(4) - (4)]).num<<") ";
        break;
    case REGISTER_NAME:
        prepend<<"layout(location="<<(yyvsp[(4) - (4)]).strs[0]<<") ";
        break;
    }
    
    prepend<<(yyvsp[(1) - (4)]).strs[0]<<' '<<(yyvsp[(2) - (4)]).strs[0];
    (yyval).strs[0]=prepend.str();
    (yyval).strs[1]=(yyvsp[(2) - (4)]).strs[1];
    (yyval).strs[2]=(yyvsp[(2) - (4)]).strs[2];
    (yyval).strs[2]+=(yyvsp[(3) - (4)]).strs[0];
}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 267 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (1)]).strs[0];
}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 270 "glfx.ypp"
    { /* None */
    (yyval).strs[0]="";
}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 275 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (3)]).strs[0];
    (yyval).strs[1]=(yyvsp[(2) - (3)]).strs[0];
    (yyval).strs[2]=(yyvsp[(3) - (3)]).strs[0];
}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 282 "glfx.ypp"
    {
    (yyval).strs[0]="[]";
}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 285 "glfx.ypp"
    {
    (yyval).strs[0]="";
}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 290 "glfx.ypp"
    {
    (yyval).num=(yyvsp[(2) - (2)]).num;
    (yyval).rType=REGISTER_INT;
}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 294 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(2) - (2)]).strs[0];
    (yyval).rType=REGISTER_NAME;
}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 298 "glfx.ypp"
    {
    (yyval).rType=REGISTER_NONE;
}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 303 "glfx.ypp"
    {
    (yyval).prog = new Program(*((yyvsp[(1) - (1)]).shaders));
    delete (yyvsp[(1) - (1)]).shaders;
}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 309 "glfx.ypp"
    {
    (yyval).shaders=(yyvsp[(1) - (2)]).shaders;
    (*(yyval).shaders)[(yyvsp[(2) - (2)]).sType].src=(yyvsp[(2) - (2)]).strs[0];
    (*(yyval).shaders)[(yyvsp[(2) - (2)]).sType].name=(yyvsp[(2) - (2)]).strs[1];
}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 314 "glfx.ypp"
    {
    (yyval).shaders=new map<ShaderType, Program::Shader>;
    (*(yyval).shaders)[(yyvsp[(1) - (1)]).sType].src=(yyvsp[(1) - (1)]).strs[0];
    (*(yyval).shaders)[(yyvsp[(1) - (1)]).sType].name=(yyvsp[(1) - (1)]).strs[1];
}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 321 "glfx.ypp"
    {
    // Assemble the shader
    ostringstream theShader;
    
    theShader<<"#version "<<(yyvsp[(3) - (10)]).num<<endl;
    theShader<<(yyvsp[(9) - (10)]).strs[0];
    theShader<<gEffect->m_sharedCode.str();
    map<string, string>::const_iterator it=gEffect->m_shaders.find((yyvsp[(6) - (10)]).strs[0]);
    if(it==gEffect->m_shaders.end()) {
        ostringstream errMsg;
        errMsg<<"Unable to find referenced shader \""<<(yyvsp[(6) - (10)]).strs[0]<<'\"';
        errSem(errMsg.str(), (yyvsp[(6) - (10)]).lineno);
    }
    
    // Currently in case of error it never returns (throw)
    // TODO: Handle continuation in case of error
    theShader<<it->second;
    (yyval).strs[0]=theShader.str();
    (yyval).strs[1]=(yyvsp[(6) - (10)]).strs[0];
    (yyval).sType=(yyvsp[(1) - (10)]).sType;
}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 344 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(2) - (2)]).strs[0];
}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 347 "glfx.ypp"
    {
    (yyval).strs[0]="";
}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 352 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (3)]).strs[0];
    (yyval).strs[0]+=(yyvsp[(3) - (3)]).strs[0];
}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 356 "glfx.ypp"
    {
    (yyval).strs[0]=(yyvsp[(1) - (1)]).strs[0];
}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 361 "glfx.ypp"
    {
    ostringstream layoutDef;
    layoutDef<<"#line "<<(yyvsp[(1) - (2)]).lineno<<endl;
    layoutDef<<"layout"<<(yyvsp[(2) - (2)]).strs[0]<<' '<<(yyvsp[(1) - (2)]).strs[0]<<';'<<endl;
    (yyval).strs[0]=layoutDef.str();
}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 369 "glfx.ypp"
    {
    ostringstream layoutDef;
    layoutDef<<"#line "<<(yyvsp[(1) - (2)]).lineno<<endl;
    layoutDef<<"layout"<<(yyvsp[(2) - (2)]).strs[0]<<' '<<"out float "<<(yyvsp[(1) - (2)]).strs[0]<<';'<<endl;
    (yyval).strs[0]=layoutDef.str();
}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 377 "glfx.ypp"
    { /* read parenthesis */
    (yyval).strs[0]=glfxreadblock('(', ')');
}
    break;


/* Line 1787 of yacc.c  */
#line 1957 "glfxLALRParser.cpp"
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


/* Line 2050 of yacc.c  */
#line 382 "glfx.ypp"


void glfxerror(const char*)
{
    errSyn();
}

void errSyn()
{
    ostringstream errMsg;

    errMsg<<"0("<<glfxget_lineno()<<") : error: Syntax error";
    throw errMsg.str();
}

void errSem(const string& str, int line)
{
    ostringstream errMsg;
    
    if(line==-1)
        line=glfxget_lineno();
    errMsg<<"0("<<line<<") : error: "<<str;
    throw errMsg.str();
}
