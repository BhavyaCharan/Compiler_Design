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
#line 1 "yacc.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include "symbol_table2.h"
	#include <stdarg.h>
	 
	 int yylex();

	entry_t** symbol_table;
	NODE* root;
	entry_t** symbol_table_stack[10]; 
	int tos = 0;

	double Evaluate (double lhs_value,int assign_type,double rhs_value);
	int current_dtype;
	int current_storage;
	int yyerror(char *msg);
	int yylineno;
	int DECL = 0;

#line 87 "y.tab.c" /* yacc.c:339  */

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
    DEC_CONSTANT = 258,
    HEX_CONSTANT = 259,
    FLOAT_CONSTANT = 260,
    IDENTIFIER = 261,
    STRING = 262,
    HASH_INCL = 263,
    HASH_DEF = 264,
    HASH_INCL_END = 265,
    LOGICAL_AND = 266,
    LOGICAL_OR = 267,
    LS_EQ = 268,
    GR_EQ = 269,
    EQ = 270,
    NOT_EQ = 271,
    MUL_EQ = 272,
    DIV_EQ = 273,
    MOD_EQ = 274,
    ADD_EQ = 275,
    SUB_EQ = 276,
    INCREMENT = 277,
    DECREMENT = 278,
    SHORT = 279,
    INT = 280,
    LONG = 281,
    SIGNED = 282,
    UNSIGNED = 283,
    CONST = 284,
    FLOAT = 285,
    VOID = 286,
    IF = 287,
    FOR = 288,
    DO = 289,
    WHILE = 290,
    CONTINUE = 291,
    BREAK = 292,
    RETURN = 293,
    PRINTF = 294,
    SCANF = 295,
    UMINUS = 296,
    ELSEIF = 297,
    ELSE = 298
  };
#endif
/* Tokens.  */
#define DEC_CONSTANT 258
#define HEX_CONSTANT 259
#define FLOAT_CONSTANT 260
#define IDENTIFIER 261
#define STRING 262
#define HASH_INCL 263
#define HASH_DEF 264
#define HASH_INCL_END 265
#define LOGICAL_AND 266
#define LOGICAL_OR 267
#define LS_EQ 268
#define GR_EQ 269
#define EQ 270
#define NOT_EQ 271
#define MUL_EQ 272
#define DIV_EQ 273
#define MOD_EQ 274
#define ADD_EQ 275
#define SUB_EQ 276
#define INCREMENT 277
#define DECREMENT 278
#define SHORT 279
#define INT 280
#define LONG 281
#define SIGNED 282
#define UNSIGNED 283
#define CONST 284
#define FLOAT 285
#define VOID 286
#define IF 287
#define FOR 288
#define DO 289
#define WHILE 290
#define CONTINUE 291
#define BREAK 292
#define RETURN 293
#define PRINTF 294
#define SCANF 295
#define UMINUS 296
#define ELSEIF 297
#define ELSE 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "yacc.y" /* yacc.c:355  */

	double dval;
	entry_t* entry;
	NODE* node;
	int ival;

#line 220 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,    49,    59,     2,
      54,    55,    47,    45,    41,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
      43,    42,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    86,    87,    89,    90,    93,    95,    98,
     100,   103,   104,   105,   108,   109,   113,   114,   118,   124,
     125,   129,   130,   133,   134,   138,   139,   142,   143,   144,
     145,   146,   147,   148,   153,   154,   157,   158,   162,   166,
     167,   171,   174,   175,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   192,   195,   196,   199,   200,
     201,   202,   205,   208,   211,   212,   213,   216,   217,   220,
     221,   222,   225,   228,   229,   230,   234,   237,   240,   241,
     244,   245,   252,   256,   257,   260,   261,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   280,
     281,   282,   283,   284,   288,   289,   290,   291,   294,   306,
     307,   308,   309,   310,   311,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   325,   326,   327,   330,   333,   334,
     337,   338,   341,   342
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEC_CONSTANT", "HEX_CONSTANT",
  "FLOAT_CONSTANT", "IDENTIFIER", "STRING", "HASH_INCL", "HASH_DEF",
  "HASH_INCL_END", "LOGICAL_AND", "LOGICAL_OR", "LS_EQ", "GR_EQ", "EQ",
  "NOT_EQ", "MUL_EQ", "DIV_EQ", "MOD_EQ", "ADD_EQ", "SUB_EQ", "INCREMENT",
  "DECREMENT", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "CONST",
  "FLOAT", "VOID", "IF", "FOR", "DO", "WHILE", "CONTINUE", "BREAK",
  "RETURN", "PRINTF", "SCANF", "','", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UMINUS", "ELSEIF", "ELSE", "'('", "')'",
  "'{'", "'}'", "';'", "'&'", "'['", "']'", "$accept", "complete_program",
  "headerFilesMacros", "FilesMacros", "headerFiles", "ID_HI",
  "headerMacros", "ID_ME", "macroExpr", "main_program", "block",
  "function", "type", "pointer", "data_type", "sign_specifier",
  "type_specifier", "argument_list", "arguments", "arg", "statement",
  "compound_statement", "statements", "single_statement",
  "printf_statement", "print_inside", "print_args", "scanf_statement",
  "scanf_inside", "scanf_args", "ifBlock", "forBlock", "whileBlock",
  "declaration", "dl_de", "decl_end", "declarationList", "subDecl",
  "expression_statement", "expression", "subExpr", "assignmentExpr",
  "unaryExpr", "lhs", "assignOp", "arithmeticExpr", "constant",
  "array_index", "function_call", "parameter_list", "parameter", YY_NULLPTR
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
     295,    44,    61,    60,    62,    43,    45,    42,    47,    37,
      33,   296,   297,   298,    40,    41,   123,   125,    59,    38,
      91,    93
};
# endif

#define YYPACT_NINF -179

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-179)))

#define YYTABLE_NINF -109

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -179,    15,   422,  -179,   -14,    13,    17,    19,    19,    26,
    -179,    32,  -179,  -179,  -179,  -179,  -179,  -179,  -179,   302,
    -179,  -179,   118,    38,   376,  -179,  -179,     4,  -179,  -179,
      87,   395,  -179,   293,    79,  -179,    25,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,   116,  -179,    51,   222,    38,  -179,
    -179,   178,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
     200,  -179,  -179,   298,  -179,  -179,  -179,   437,    37,   293,
      37,   361,  -179,   222,   201,  -179,  -179,  -179,   293,  -179,
    -179,   442,  -179,  -179,  -179,  -179,  -179,   -10,    65,  -179,
     201,  -179,  -179,  -179,  -179,  -179,   416,   293,   293,   293,
     293,   293,   293,   293,   293,  -179,    37,    37,    37,    37,
      37,   377,    41,    35,    75,  -179,   205,  -179,   145,    22,
    -179,  -179,    68,    68,  -179,  -179,   186,   186,  -179,  -179,
    -179,  -179,  -179,    61,   442,  -179,  -179,   383,   -31,  -179,
    -179,  -179,  -179,   288,  -179,   250,  -179,   139,    66,    74,
      82,    69,    84,   129,    92,    99,  -179,   178,  -179,  -179,
    -179,   111,   115,  -179,  -179,  -179,  -179,   120,   293,    72,
     293,  -179,  -179,  -179,   367,   164,   179,  -179,  -179,  -179,
      60,   383,  -179,   178,   144,    52,   113,  -179,   166,   150,
     183,   175,   293,   331,    73,   215,  -179,   331,   435,  -179,
       5,  -179,   383,   192,   144,   331,   122,  -179,  -179,  -179,
     190,  -179,  -179,   246,   212,   331,   293,  -179,   331,   435,
    -179,     5,  -179,   174,  -179,  -179,  -179,   331,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,   108,     0,     0,     0,     0,    29,
      27,    30,    25,    26,    32,    33,     3,     5,     6,     2,
      15,    16,     0,    20,     0,    24,    17,     0,    79,    80,
       0,     0,    82,     0,     0,     7,     0,     9,   108,   107,
     106,    28,    31,    14,   108,    73,     0,     0,    22,    19,
      23,     0,    74,   112,   113,   114,   110,   111,   109,    75,
       0,   104,   105,     0,   124,   125,   126,   122,     0,     0,
       0,     0,    97,    98,    96,   123,     8,    11,     0,    10,
      12,    35,    77,    76,    21,    78,   103,     0,   122,   102,
      99,   100,   101,   122,   121,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    37,     0,   120,    93,    94,
      91,    92,    89,    90,    88,    87,   115,   116,   117,   118,
     119,    13,    38,     0,     0,   133,   129,   132,     0,   131,
      43,    18,    36,     0,   128,     0,   130,   108,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    42,    39,
      40,     0,     0,    44,    46,    45,    47,     0,     0,     0,
       0,    50,    51,    49,     0,     0,     0,    53,    54,    48,
       0,    86,    84,     0,     0,     0,     0,    52,    57,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    55,
       0,    62,    85,    67,     0,     0,     0,    72,    60,    58,
      56,    59,    66,     0,    63,     0,     0,    69,     0,     0,
      64,     0,    68,     0,    70,    61,    65,     0,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
     239,  -179,     3,   214,  -179,  -179,   243,  -179,  -179,   134,
      39,   130,  -179,  -179,  -179,  -179,    81,  -179,  -179,    50,
    -179,  -179,  -179,   119,  -179,  -179,   -18,   228,  -178,  -136,
     -30,    -1,    -2,     0,   253,   -54,   -34,   242,   249,  -179,
     170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    16,    17,    35,    18,    37,    79,    19,
      20,    21,   157,    49,    23,    24,    25,   113,   114,   115,
     158,   159,   145,   160,   161,   189,   210,   162,   191,   214,
     163,   164,   165,   166,    45,    83,    27,    28,   184,   185,
     181,    72,    73,    31,    60,    74,    75,    32,   167,   138,
     139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    29,    80,    71,    46,    22,   195,    39,    40,    90,
     143,   212,    61,    62,    94,     3,    96,    30,    29,    34,
      47,    29,    22,    36,   144,    38,   216,   -81,    64,    65,
      66,    77,   180,    97,   186,    99,   100,   101,   102,    95,
      64,    65,    66,    93,   -81,    51,    33,   132,   111,    47,
      29,    41,   126,   127,   128,   129,   130,    42,    86,   206,
      87,    89,    52,    87,   213,   103,   104,   118,   119,   120,
     121,   122,   123,   124,   125,    64,    65,    66,    67,    78,
     223,    99,   100,    68,   112,    48,   137,  -108,  -108,    76,
     133,    70,    51,   192,     7,     8,     9,    10,    11,    12,
      13,   192,    14,    15,    53,    54,    55,    56,    57,    82,
     196,   103,   104,   137,    51,   193,   134,   140,    68,   116,
     168,    26,    69,   174,    44,    33,    70,   171,   169,    58,
     182,   204,    64,    65,    66,    67,   170,   112,    26,    46,
       7,     8,   172,    30,    29,    59,   175,    64,    65,    66,
      67,     7,     8,   176,   192,    47,    29,   -81,    99,   100,
     101,   102,   202,   192,   211,   194,     7,     8,   197,   177,
      81,   188,   183,   178,   -81,    68,    33,   218,   179,    69,
     -81,    47,    29,    70,     4,   211,   190,   173,   103,   104,
      68,    30,    29,   116,    69,    30,    29,   -81,    70,    33,
       7,     8,   182,    30,    29,   199,    38,   198,    64,    65,
      66,    67,   135,    30,    29,   192,    30,    29,    64,    65,
      66,    67,     7,     8,   200,    30,    29,     7,     8,   227,
     201,   219,   203,   108,   109,   110,   207,     7,     8,    53,
      54,    55,    56,    57,   217,   215,   106,   107,   108,   109,
     110,    68,   220,   221,   222,    69,   147,   224,    43,    70,
     136,    68,    84,   141,    58,    69,   228,    50,   142,    70,
     205,   226,     7,     8,     9,    10,    11,    12,    13,    85,
      14,    15,   148,   149,    63,   150,   151,   152,   153,   154,
     155,    64,    65,    66,    67,   135,    64,    65,    66,    67,
     225,    64,    65,    66,    88,    91,   140,   156,     4,     0,
       7,     8,    92,   146,     0,     7,     8,     0,     0,     0,
       7,     8,     0,     0,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,    68,     0,     0,   147,    69,    68,
       0,     0,    70,    69,    68,     0,     0,    70,     0,     0,
       0,     0,    70,     7,     8,     9,    10,    11,    12,    13,
       0,    14,    15,   148,   149,     0,   150,   151,   152,   153,
     154,   155,    97,    98,    99,   100,   101,   102,    97,    98,
      99,   100,   101,   102,     0,     0,     0,   140,    97,    98,
      99,   100,   101,   102,    97,    98,    99,   100,   101,   102,
       9,    10,    11,     0,   103,   104,    14,    15,     0,     0,
     103,   104,    53,    54,    55,    56,    57,    61,    62,     0,
     103,   104,   105,     0,     0,   187,   103,   104,     4,     0,
       5,     6,   131,     0,     0,     0,     0,    58,    64,    65,
      66,   208,   209,     0,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,   106,   107,   108,   109,   110,     9,    10,    11,    12,
      13,   117,    14,    15,     0,     0,     0,     0,     0,  -108
};

static const yytype_int16 yycheck[] =
{
       2,     2,    36,    33,    22,     2,   184,     7,     8,    63,
      41,     6,    22,    23,    68,     0,    70,    19,    19,     6,
      22,    22,    19,     6,    55,     6,   204,    41,     3,     4,
       5,     6,   168,    11,   170,    13,    14,    15,    16,    69,
       3,     4,     5,     6,    58,    41,    60,     6,    78,    51,
      51,    25,   106,   107,   108,   109,   110,    25,    60,   195,
      60,    63,    58,    63,    59,    43,    44,    97,    98,    99,
     100,   101,   102,   103,   104,     3,     4,     5,     6,    54,
     216,    13,    14,    46,    81,    47,   116,    22,    23,    10,
      55,    54,    41,    41,    22,    23,    24,    25,    26,    27,
      28,    41,    30,    31,    17,    18,    19,    20,    21,    58,
      58,    43,    44,   143,    41,    55,    41,    56,    46,    54,
      54,     2,    50,   153,     6,    60,    54,    58,    54,    42,
      58,    58,     3,     4,     5,     6,    54,   134,    19,   157,
      22,    23,    58,   145,   145,    58,    54,     3,     4,     5,
       6,    22,    23,    54,    41,   157,   157,    41,    13,    14,
      15,    16,   192,    41,   198,   183,    22,    23,    55,    58,
      54,     7,   169,    58,    58,    46,    60,    55,    58,    50,
      41,   183,   183,    54,     6,   219,     7,    58,    43,    44,
      46,   193,   193,    54,    50,   197,   197,    58,    54,    60,
      22,    23,    58,   205,   205,    55,     6,    41,     3,     4,
       5,     6,     7,   215,   215,    41,   218,   218,     3,     4,
       5,     6,    22,    23,    41,   227,   227,    22,    23,    55,
      55,    41,   193,    47,    48,    49,   197,    22,    23,    17,
      18,    19,    20,    21,   205,    53,    45,    46,    47,    48,
      49,    46,     6,    41,   215,    50,     6,   218,    19,    54,
      55,    46,    48,   133,    42,    50,   227,    24,   134,    54,
      55,   221,    22,    23,    24,    25,    26,    27,    28,    51,
      30,    31,    32,    33,    31,    35,    36,    37,    38,    39,
      40,     3,     4,     5,     6,     7,     3,     4,     5,     6,
     219,     3,     4,     5,     6,    63,    56,    57,     6,    -1,
      22,    23,    63,   143,    -1,    22,    23,    -1,    -1,    -1,
      22,    23,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    46,    -1,    -1,     6,    50,    46,
      -1,    -1,    54,    50,    46,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    54,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    11,    12,    13,    14,    15,    16,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    56,    11,    12,
      13,    14,    15,    16,    11,    12,    13,    14,    15,    16,
      24,    25,    26,    -1,    43,    44,    30,    31,    -1,    -1,
      43,    44,    17,    18,    19,    20,    21,    22,    23,    -1,
      43,    44,    61,    -1,    -1,    58,    43,    44,     6,    -1,
       8,     9,    55,    -1,    -1,    -1,    -1,    42,     3,     4,
       5,     6,     7,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    17,    18,    19,    20,    21,    22,
      23,    45,    46,    47,    48,    49,    24,    25,    26,    27,
      28,    55,    30,    31,    -1,    -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    64,     0,     6,     8,     9,    22,    23,    24,
      25,    26,    27,    28,    30,    31,    65,    66,    68,    71,
      72,    73,    74,    76,    77,    78,    95,    98,    99,   103,
     104,   105,   109,    60,     6,    67,     6,    69,     6,   105,
     105,    25,    25,    72,     6,    96,    98,   104,    47,    75,
      78,    41,    58,    17,    18,    19,    20,    21,    42,    58,
     106,    22,    23,   106,     3,     4,     5,     6,    46,    50,
      54,   102,   103,   104,   107,   108,    10,     6,    54,    70,
     108,    54,    58,    97,    75,    99,   104,   105,     6,   104,
     107,   109,   110,     6,   107,   102,   107,    11,    12,    13,
      14,    15,    16,    43,    44,    61,    45,    46,    47,    48,
      49,   102,    74,    79,    80,    81,    54,    55,   102,   102,
     102,   102,   102,   102,   102,   102,   107,   107,   107,   107,
     107,    55,     6,    55,    41,     7,    55,   102,   111,   112,
      56,    83,    81,    41,    55,    84,   112,     6,    32,    33,
      35,    36,    37,    38,    39,    40,    57,    74,    82,    83,
      85,    86,    89,    92,    93,    94,    95,   110,    54,    54,
      54,    58,    58,    58,   102,    54,    54,    58,    58,    58,
     101,   102,    58,    74,   100,   101,   101,    58,     7,    87,
       7,    90,    41,    55,    98,   100,    58,    55,    41,    55,
      41,    55,   102,    82,    58,    55,   101,    82,     6,     7,
      88,   108,     6,    59,    91,    53,   100,    82,    55,    41,
       6,    41,    82,   101,    82,    88,    91,    55,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    66,    67,    68,
      69,    70,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    80,    80,    81,    82,
      82,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    87,    87,    88,    88,
      88,    88,    89,    90,    91,    91,    91,    92,    92,    93,
      93,    93,    94,    95,    95,    95,    96,    97,    98,    98,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   105,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   108,   109,   110,   110,
     111,   111,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     2,     2,     2,
       2,     1,     1,     3,     2,     1,     1,     1,     6,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     0,     3,     1,     2,     1,
       1,     3,     2,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     3,     2,     2,     4,     3,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     5,     7,     6,
       7,     9,     5,     2,     2,     2,     2,     1,     3,     1,
       1,     1,     1,     2,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     1,     1,     1
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
        case 2:
#line 84 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("Complete program", 0, 2, (yyvsp[-1].node), (yyvsp[0].node)); root = (yyval.node);}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 86 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("headerFilesMacros", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 87 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("headerFilesMacros -> epsilon", 0, 2, NULL, NULL);}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("Hash_include", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("Identifier", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("headerMacros", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 100 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("ID_ME", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 105 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 108 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("main_program", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 109 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 118 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("function", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 124 "yacc.y" /* yacc.c:1646  */
    {}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 129 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("pointer_star", 0, 2, (yyvsp[0].node), NULL);}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 130 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("pointer_star", 1, 1, "*");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 133 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("data_type", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 138 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("signed", 0, 2, NULL, NULL);}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 139 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("unsigned", 0, 2, NULL, NULL);}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 142 "yacc.y" /* yacc.c:1646  */
    {DECL = 1;current_dtype = 1;current_storage=4; (yyval.node) = newnode("int", 0, 2, NULL, NULL);}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 143 "yacc.y" /* yacc.c:1646  */
    {DECL = 1;current_dtype = 2;current_storage=2; (yyval.node) = newnode("short int", 0, 2, NULL, NULL);}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 144 "yacc.y" /* yacc.c:1646  */
    {DECL = 1;current_dtype = 2;current_storage=2; (yyval.node) = newnode("short", 0, 2, NULL, NULL);}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 145 "yacc.y" /* yacc.c:1646  */
    {DECL = 1;current_dtype = 3;current_storage=8; (yyval.node) = newnode("long", 0, 2, NULL, NULL);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 146 "yacc.y" /* yacc.c:1646  */
    {DECL = 1;current_dtype = 3;current_storage=8; (yyval.node) = newnode("long int", 0, 2, NULL, NULL);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 147 "yacc.y" /* yacc.c:1646  */
    {DECL = 1;current_dtype = 4;current_storage=4; (yyval.node) = newnode("float", 0, 2, NULL, NULL);}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 148 "yacc.y" /* yacc.c:1646  */
    {DECL = 1;current_dtype = 5;current_storage=0; (yyval.node) = newnode("void", 0, 2, NULL, NULL);}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 154 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("argument list -> is empty", 0, 2, NULL, NULL);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 157 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("arguments", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 158 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 162 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("arg", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 166 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 167 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 171 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 174 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("statements", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 175 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("statements -> epsilon", 0, 2, NULL, NULL);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 179 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 181 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 182 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 183 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 184 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("single_statement", 0, 2, NULL, NULL);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("single_statement", 0, 2, NULL, NULL);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 186 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("single_statement", 0, 2, NULL, NULL);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("single_statement", 0, 2, NULL, (yyvsp[-1].node));}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 188 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 192 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("printf_statement", 0, 2, NULL, NULL);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 205 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("scanf_statement", 0, 2, NULL, NULL);}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 216 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("if", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("if", 0, 2, (yyvsp[-4].node), (yyvsp[-2].node));}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 220 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("for", 0, 2, (yyvsp[-3].node), (yyvsp[0].node));}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("for", 0, 2, (yyvsp[-4].node), (yyvsp[0].node));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 222 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("for", 0, 2, (yyvsp[-6].node), (yyvsp[0].node));}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 225 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("while", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 228 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("declaration", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 229 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 230 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 234 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("dl_de", 0, 2, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 237 "yacc.y" /* yacc.c:1646  */
    {DECL = 0; (yyval.node) = newnode("decl_end", 0, 2, NULL, NULL);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 240 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("declarationList", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 241 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 244 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 245 "yacc.y" /* yacc.c:1646  */
    {
    			(yyval.node) = (yyvsp[0].node);
    			(yyvsp[0].node)->symtab_entry->data_type = current_dtype;
    			(yyvsp[0].node)->symtab_entry->storage = current_storage;
    			if(! (yyvsp[0].node)->symtab_entry->line_no)
    				(yyvsp[0].node)->symtab_entry->line_no = yylineno;
    		}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 252 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 256 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 257 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(";", 0, 2, NULL, NULL);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 265 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(">", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 266 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("<", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 267 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("==", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 268 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("!=", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 269 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("<=", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 270 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode(">=", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 271 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("&&", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 272 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("||", 0, 2, (yyvsp[-2].node), (yyvsp[0].node));}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 273 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("!", 0, 2, (yyvsp[0].node), NULL);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 274 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 275 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 276 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 290 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("--", 0, 2, (yyvsp[0].node), NULL);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 291 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("++", 0, 2, (yyvsp[0].node), NULL);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 294 "yacc.y" /* yacc.c:1646  */
    {
						if(! (yyvsp[0].node)->symtab_entry->data_type) {
							(yyvsp[0].node)->symtab_entry->data_type = current_dtype;
							(yyvsp[0].node)->symtab_entry->storage = current_storage;
						} 
						if(! (yyvsp[0].node)->symtab_entry->line_no) 
							(yyvsp[0].node)->symtab_entry->line_no = yylineno;
						(yyval.node) = (yyvsp[0].node);
					}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 306 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("=", 0, 2, NULL, NULL);}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 307 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("+=", 0, 2, NULL, NULL);}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 308 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("-=", 0, 2, NULL, NULL);}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 309 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("*=", 0, 2, NULL, NULL);}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 310 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("/=", 0, 2, NULL, NULL);}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 311 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = newnode("%=", 0, 2, NULL, NULL);}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 319 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 320 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 321 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 322 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 325 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 326 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 327 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 337 "yacc.y" /* yacc.c:1646  */
    {}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 338 "yacc.y" /* yacc.c:1646  */
    {}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2169 "y.tab.c" /* yacc.c:1646  */
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
#line 345 "yacc.y" /* yacc.c:1906  */


#include "lex.yy.c"
#include <ctype.h>


double Evaluate (double lhs_value,int operator,double rhs_value)
{
	switch(operator)
	{
		case '=': return rhs_value;
		case ADD_EQ: return (lhs_value + rhs_value);
		case SUB_EQ: return (lhs_value - rhs_value);
		case MUL_EQ: return (lhs_value * rhs_value);
		case DIV_EQ: return (lhs_value / rhs_value);
		case MOD_EQ: return ((int)lhs_value % (int)rhs_value);
	}
}

int main(int argc, char *argv[])
{
	symbol_table = create_table(); //creating empty symbol table and initialising
	symbol_table_stack[0] = symbol_table;

	yyin = fopen(argv[1], "r");

	if(!yyparse())
	{
		//printf("\nParsing complete\n");
	}
	else
	{
		printf("\nParsing FAILED\n");
		fclose(yyin);
		return 0;
	}

	
	//display(symbol_table, 0);
	
	printf("\nParsing complete\n");
	preorder(root);
	fclose(yyin);
	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
}
