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
#line 1 "new_yacc.y" /* yacc.c:339  */

	#include "stdc++.h"
	#include "symboltable.h"
	#include "lex.yy.c"
	#include <string.h>
	#include <stdlib.h>
	using namespace std;

	void yyerror(char *msg);

	#define SYMBOL_TABLE symbol_table_list[current_scope].symbol_table

  	extern entry_t** constant_table;

	int current_dtype;
	int current_storage;

	table_t symbol_table_list[NUM_TABLES];

	int is_declaration = 0;
	int is_loop = 0;
	int is_func = 0;
	int func_type;

	int param_list[10];
	int p_idx = 0;
	int p=0;
  	int rhs = 0;

	void type_check(int,int,int);
	vector<int> merge(vector<int>& v1, vector<int>& v2);
	void backpatch(vector<int>&, int);
	void gencode(string);
	void gencode_math(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op);
	void gencode_rel(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op);
	void printlist(vector<int>);

	int nextinstr = 0;
	int temp_var_number = 0;
	int lhs_array = 0;
	vector<string> ICG;
	typedef struct quadruples
  	{
    		char *op;
    		char *arg1;
    		char *arg2;
    		char *res;
  	}quad;
  	int quadlen = 0;
  	quad** q = (quad**)malloc(100 * sizeof(quad*));
	

#line 119 "y.tab.c" /* yacc.c:339  */

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
    IDENTIFIER = 258,
    DEC_CONSTANT = 259,
    HEX_CONSTANT = 260,
    CHAR_CONSTANT = 261,
    FLOAT_CONSTANT = 262,
    STRING = 263,
    LOGICAL_AND = 264,
    LOGICAL_OR = 265,
    LS_EQ = 266,
    GR_EQ = 267,
    EQ = 268,
    NOT_EQ = 269,
    MUL_ASSIGN = 270,
    DIV_ASSIGN = 271,
    MOD_ASSIGN = 272,
    ADD_ASSIGN = 273,
    SUB_ASSIGN = 274,
    INCREMENT = 275,
    DECREMENT = 276,
    INPUT = 277,
    PRINTF = 278,
    SCANF = 279,
    HASH_INCL = 280,
    HASH_DEF = 281,
    HASH_INCL_END = 282,
    SHORT = 283,
    INT = 284,
    LONG = 285,
    LONG_LONG = 286,
    SIGNED = 287,
    UNSIGNED = 288,
    CONST = 289,
    VOID = 290,
    CHAR = 291,
    FLOAT = 292,
    CHAR_STAR = 293,
    IF = 294,
    FOR = 295,
    WHILE = 296,
    CONTINUE = 297,
    BREAK = 298,
    RETURN = 299,
    UMINUS = 300,
    LOWER_THAN_ELSE = 301,
    ELSE = 302
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define DEC_CONSTANT 259
#define HEX_CONSTANT 260
#define CHAR_CONSTANT 261
#define FLOAT_CONSTANT 262
#define STRING 263
#define LOGICAL_AND 264
#define LOGICAL_OR 265
#define LS_EQ 266
#define GR_EQ 267
#define EQ 268
#define NOT_EQ 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define INCREMENT 275
#define DECREMENT 276
#define INPUT 277
#define PRINTF 278
#define SCANF 279
#define HASH_INCL 280
#define HASH_DEF 281
#define HASH_INCL_END 282
#define SHORT 283
#define INT 284
#define LONG 285
#define LONG_LONG 286
#define SIGNED 287
#define UNSIGNED 288
#define CONST 289
#define VOID 290
#define CHAR 291
#define FLOAT 292
#define CHAR_STAR 293
#define IF 294
#define FOR 295
#define WHILE 296
#define CONTINUE 297
#define BREAK 298
#define RETURN 299
#define UMINUS 300
#define LOWER_THAN_ELSE 301
#define ELSE 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 55 "new_yacc.y" /* yacc.c:355  */

	int data_type;
	entry_t* entry;
	content_t* content;
	string* op;
	vector<int>* nextlist;
	int instr;

#line 262 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,     2,     2,    53,     2,     2,
      58,    59,    51,    49,    45,    50,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      47,    46,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   135,   135,   137,   138,   140,   141,   143,   145,   148,
     149,   150,   152,   153,   156,   157,   162,   170,   161,   184,
     185,   188,   189,   192,   193,   196,   197,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   215,   216,
     219,   220,   224,   231,   232,   239,   237,   255,   263,   267,
     273,   279,   284,   285,   286,   295,   303,   310,   319,   320,
     321,   324,   326,   328,   328,   328,   341,   350,   363,   363,
     363,   374,   375,   376,   380,   381,   384,   385,   386,   390,
     397,   400,   406,   416,   422,   429,   436,   443,   450,   457,
     467,   477,   485,   491,   496,   504,   518,   562,   576,   595,
     604,   618,   629,   642,   654,   669,   684,   696,   708,   710,
     722,   741,   742,   743,   744,   745,   748,   756,   764,   772,
     780,   788,   796,   806,   813,   829,   830,   831,   832,   835,
     891,   892,   895,   903,   913,   914,   917,   922,   929,   932
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "DEC_CONSTANT",
  "HEX_CONSTANT", "CHAR_CONSTANT", "FLOAT_CONSTANT", "STRING",
  "LOGICAL_AND", "LOGICAL_OR", "LS_EQ", "GR_EQ", "EQ", "NOT_EQ",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "INCREMENT", "DECREMENT", "INPUT", "PRINTF", "SCANF", "HASH_INCL",
  "HASH_DEF", "HASH_INCL_END", "SHORT", "INT", "LONG", "LONG_LONG",
  "SIGNED", "UNSIGNED", "CONST", "VOID", "CHAR", "FLOAT", "CHAR_STAR",
  "IF", "FOR", "WHILE", "CONTINUE", "BREAK", "RETURN", "','", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS",
  "LOWER_THAN_ELSE", "ELSE", "'('", "')'", "'{'", "'}'", "';'", "'['",
  "']'", "$accept", "complete_program", "headerFilesMacros", "FilesMacros",
  "headerFiles", "headerMacros", "macroExpr", "starter", "builder",
  "function", "$@1", "$@2", "type", "pointer", "data_type",
  "sign_specifier", "type_specifier", "argument_list", "arguments", "arg",
  "stmt", "compound_stmt", "$@3", "statements", "single_stmt",
  "scanf_stat", "printf_stat", "for_block", "$@4", "$@5", "if_block",
  "while_block", "$@6", "$@7", "declaration", "declaration_list",
  "sub_decl", "expression_stmt", "expression", "sub_expr",
  "assignment_expr", "unary_expr", "lhs", "identifier", "assign",
  "arithmetic_expr", "constant", "array_access", "array_index",
  "function_call", "parameter_list", "parameter", "M", "N", YY_NULLPTR
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
     295,   296,   297,   298,   299,    44,    61,    60,    62,    43,
      45,    42,    47,    37,    33,   300,   301,   302,    40,    41,
     123,   125,    59,    91,    93
};
# endif

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -109

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -148,    10,   398,  -148,  -148,    21,    21,    22,    40,    16,
    -148,    25,    38,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,   419,  -148,  -148,   134,    34,   441,  -148,  -148,
     -34,  -148,  -148,   344,   198,    66,   -14,  -148,  -148,    63,
      31,  -148,  -148,  -148,  -148,    30,   379,   -12,    34,  -148,
    -148,   134,  -148,  -148,  -148,  -148,  -148,  -148,   134,  -148,
     134,   315,   315,  -148,  -148,   409,  -148,  -148,  -148,  -148,
    -148,  -148,   115,  -148,  -148,  -148,    47,  -148,  -148,  -148,
      -8,  -148,    11,    11,  -148,    62,   392,  -148,  -148,  -148,
      93,   392,  -148,  -148,  -148,  -148,    48,   115,   334,  -148,
     379,   337,   392,  -148,   430,  -148,  -148,   431,    11,    11,
      11,    11,    11,   258,  -148,  -148,  -148,  -148,   115,   115,
     115,   115,   115,   115,  -148,    21,    81,    96,  -148,  -148,
     170,   170,  -148,  -148,  -148,  -148,  -148,   357,    32,  -148,
     115,   115,  -148,  -148,   131,   131,  -148,  -148,  -148,  -148,
     430,   279,  -148,   373,   363,    92,  -148,  -148,  -148,  -148,
    -148,    97,  -148,   165,  -148,   104,   105,   126,   129,  -148,
     137,   148,   248,   134,  -148,  -148,  -148,   149,   157,  -148,
    -148,  -148,  -148,   112,   166,   151,   183,   115,   253,   169,
    -148,  -148,  -148,   280,  -148,  -148,  -148,   173,   175,    89,
     357,  -148,  -148,    82,   115,  -148,  -148,  -148,   115,  -148,
     253,  -148,    94,   357,   165,  -148,  -148,   179,   115,  -148,
    -148,   101,   165,  -148,  -148,  -148,   165,  -148,  -148,  -148,
    -148,   165,  -148,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,   110,     0,     0,     0,     0,    29,
      27,    30,    32,    25,    26,    36,    34,    35,    37,     3,
       5,     6,     2,    13,    14,     0,    20,     0,    24,    15,
       0,    75,    76,     0,     0,   108,   109,   107,   106,     0,
       0,    28,    31,    33,    12,     0,     0,   108,    22,    19,
      23,     0,    72,   113,   114,   115,   111,   112,     0,    73,
       0,     0,     0,   104,   105,     0,     7,     9,   125,   126,
     127,   128,     0,     8,    10,    71,     0,    21,    74,   103,
       0,   102,     0,     0,   101,   123,    96,   124,    98,   100,
     123,    95,    97,    99,   131,   130,     0,     0,     0,    93,
      94,   123,    92,   109,    39,   123,   122,     0,     0,     0,
       0,     0,     0,     0,   129,    91,   138,   138,     0,     0,
       0,     0,     0,     0,    11,     0,     0,    38,    41,   121,
     116,   117,   118,   119,   120,   137,   133,   136,     0,   135,
       0,     0,    88,    87,    85,    86,    84,    83,    42,    17,
       0,     0,   132,    89,    90,     0,    40,   134,    45,    18,
      48,   138,    46,     0,    60,     0,     0,     0,     0,   138,
       0,     0,     0,     0,    47,    43,    44,     0,     0,    50,
      49,    51,    52,   108,     0,     0,     0,     0,     0,     0,
      55,    56,    54,     0,    58,    59,    53,     0,     0,     0,
      82,    80,   138,     0,     0,    57,    62,    61,     0,   138,
       0,    79,     0,    81,     0,   138,   138,    66,     0,    68,
     139,     0,     0,   138,    63,    69,     0,   139,    70,    67,
     138,     0,    64,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,   215,  -148,
    -148,  -148,     0,   190,  -148,  -148,   213,  -148,  -148,    99,
     -50,    87,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,     5,   -24,   195,    37,  -147,   -25,
      19,     4,  -148,    -2,   233,    -9,   -35,    17,  -148,   208,
    -148,   120,   -85,    45
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    19,    20,    21,    73,    22,    23,    24,
      76,   155,   173,    49,    26,    27,    28,   126,   127,   128,
     174,   175,   160,   161,   176,   177,   178,   179,   227,   233,
     180,   181,   222,   228,   182,    30,    31,   202,   203,   200,
      99,   100,    34,   101,    60,   102,    87,   103,    96,   184,
     138,   139,   140,   223
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    45,    25,    37,    38,    74,    33,    29,    63,    64,
       3,    51,    63,    64,     4,    68,    69,    70,    71,    36,
      35,    32,    25,    47,     4,    39,    33,    29,    52,    46,
      95,   -78,   141,   -77,    67,    68,    69,    70,    71,    36,
     199,    32,    36,    40,    32,    41,   -16,    98,   -78,    35,
     -77,    65,    86,    91,    42,    46,    80,   212,    80,    85,
      90,    82,    79,    94,    81,    84,    89,    43,    36,    83,
      32,   221,   115,   106,   107,    51,   163,   151,    88,    92,
     105,   105,    63,    64,   189,    48,    63,    64,   137,    72,
      66,   152,    75,   142,   143,   144,   145,   146,   147,   130,
     131,   132,   133,   134,   125,   104,   105,   105,   105,   105,
     105,   -77,   114,    63,    64,   153,   154,   210,     4,    68,
      69,    70,    71,   148,   214,    65,   137,   208,   -77,    65,
     218,   219,    63,    64,   208,     5,     6,     4,   226,   208,
     149,   150,   118,   119,   211,   231,   208,   193,   209,    45,
     125,   113,   158,   216,     5,     6,    65,   -77,   162,   197,
     224,   183,   185,   186,   217,    82,   164,    33,     4,    97,
     113,    35,   225,    83,   -77,    65,   229,    46,   122,   123,
      36,   232,    32,   213,   187,     5,     6,   188,   165,   166,
      36,   198,    32,     9,    10,    11,    12,    13,    14,   190,
      15,    16,    17,    18,   167,   168,   169,   170,   171,   172,
     191,   194,   183,    53,    54,    55,    56,    57,    33,   195,
     183,   110,   111,   112,   183,   158,    33,   204,   196,   183,
      33,    36,   206,    32,   207,    33,   220,    44,    77,    36,
      50,    32,   159,    36,    61,    32,    78,   215,    36,   156,
      32,     4,    68,    69,    70,    71,     4,    68,    69,    70,
      71,     4,    68,    69,    70,    71,   135,    62,     5,     6,
      93,   157,   230,     5,     6,     0,     0,     0,     5,     6,
       0,     0,     4,    68,    69,    70,    71,   135,     0,   116,
     117,   118,   119,   120,   121,     0,     0,     0,    82,     5,
       6,     0,    97,    82,     0,     0,    83,    97,    82,     0,
     192,    83,    97,     0,     0,   201,    83,   136,     4,    68,
      69,    70,    71,     0,     0,     0,     0,   122,   123,    82,
       0,     0,     0,    97,     0,     5,     6,    83,     0,     0,
       0,     0,   205,   116,   117,   118,   119,   120,   121,     0,
       0,     0,  -108,  -108,  -108,  -108,  -108,    63,    64,    53,
      54,    55,    56,    57,     0,    82,   116,   117,   118,   119,
     120,   121,   116,    83,   118,   119,   120,   121,     0,     0,
       0,   122,   123,  -108,   118,   119,   120,   121,     0,     0,
      58,     0,     0,   124,    53,    54,    55,    56,    57,     0,
      65,     4,     0,     0,   122,   123,    59,     0,     0,     0,
     122,   123,     4,    68,    69,    70,    71,     0,     5,     6,
     122,   123,     4,     7,     8,    58,     9,    10,    11,    12,
      13,    14,     0,    15,    16,    17,    18,     0,     0,     5,
       6,   108,   109,   110,   111,   112,     0,     9,    10,    11,
      12,    13,    14,     0,    15,    16,    17,    18,     9,    10,
      11,    12,    13,    14,     0,    15,    16,    17,    18,     9,
      10,    11,    12,     0,     0,     0,    15,    16,    17,    18,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
     129
};

static const yytype_int16 yycheck[] =
{
       2,    25,     2,     5,     6,    40,     2,     2,    20,    21,
       0,    45,    20,    21,     3,     4,     5,     6,     7,     2,
      22,     2,    22,    25,     3,     3,    22,    22,    62,    25,
      65,    45,   117,    45,     3,     4,     5,     6,     7,    22,
     187,    22,    25,     3,    25,    29,    58,    72,    62,    51,
      62,    63,    61,    62,    29,    51,    58,   204,    60,    61,
      62,    50,    58,    65,    60,    61,    62,    29,    51,    58,
      51,   218,    97,    82,    83,    45,   161,    45,    61,    62,
      82,    83,    20,    21,   169,    51,    20,    21,   113,    58,
      27,    59,    62,   118,   119,   120,   121,   122,   123,   108,
     109,   110,   111,   112,   104,    58,   108,   109,   110,   111,
     112,    45,    64,    20,    21,   140,   141,   202,     3,     4,
       5,     6,     7,   125,   209,    63,   151,    45,    62,    63,
     215,   216,    20,    21,    45,    20,    21,     3,   223,    45,
      59,    45,    11,    12,    62,   230,    45,   172,    59,   173,
     150,    58,    60,    59,    20,    21,    63,    45,    61,     8,
      59,   163,    58,    58,   214,    50,     1,   163,     3,    54,
      58,   173,   222,    58,    62,    63,   226,   173,    47,    48,
     163,   231,   163,   208,    58,    20,    21,    58,    23,    24,
     173,     8,   173,    28,    29,    30,    31,    32,    33,    62,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      62,    62,   214,    15,    16,    17,    18,    19,   214,    62,
     222,    51,    52,    53,   226,    60,   222,    58,    62,   231,
     226,   214,    59,   214,    59,   231,    57,    22,    48,   222,
      27,   222,   155,   226,    46,   226,    51,   210,   231,   150,
     231,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,     8,    34,    20,    21,
      62,   151,   227,    20,    21,    -1,    -1,    -1,    20,    21,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    50,    20,
      21,    -1,    54,    50,    -1,    -1,    58,    54,    50,    -1,
      62,    58,    54,    -1,    -1,    62,    58,    59,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    47,    48,    50,
      -1,    -1,    -1,    54,    -1,    20,    21,    58,    -1,    -1,
      -1,    -1,    62,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    15,
      16,    17,    18,    19,    -1,    50,     9,    10,    11,    12,
      13,    14,     9,    58,    11,    12,    13,    14,    -1,    -1,
      -1,    47,    48,    46,    11,    12,    13,    14,    -1,    -1,
      46,    -1,    -1,    59,    15,    16,    17,    18,    19,    -1,
      63,     3,    -1,    -1,    47,    48,    62,    -1,    -1,    -1,
      47,    48,     3,     4,     5,     6,     7,    -1,    20,    21,
      47,    48,     3,    25,    26,    46,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    20,
      21,    49,    50,    51,    52,    53,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,    67,     0,     3,    20,    21,    25,    26,    28,
      29,    30,    31,    32,    33,    35,    36,    37,    38,    68,
      69,    70,    72,    73,    74,    77,    79,    80,    81,    99,
     100,   101,   105,   106,   107,   108,   112,   108,   108,     3,
       3,    29,    29,    29,    73,   100,   106,   108,    51,    78,
      81,    45,    62,    15,    16,    17,    18,    19,    46,    62,
     109,    46,   109,    20,    21,    63,    27,     3,     4,     5,
       6,     7,    58,    71,   111,    62,    75,    78,   101,   106,
     108,   106,    50,    58,   106,   108,   110,   111,   112,   106,
     108,   110,   112,   114,   108,   111,   113,    54,   104,   105,
     106,   108,   110,   112,    58,   108,   110,   110,    49,    50,
      51,    52,    53,    58,    64,   104,     9,    10,    11,    12,
      13,    14,    47,    48,    59,    77,    82,    83,    84,    59,
     110,   110,   110,   110,   110,     8,    59,   104,   115,   116,
     117,   117,   104,   104,   104,   104,   104,   104,   108,    59,
      45,    45,    59,   104,   104,    76,    84,   116,    60,    86,
      87,    88,    61,   117,     1,    23,    24,    39,    40,    41,
      42,    43,    44,    77,    85,    86,    89,    90,    91,    92,
      95,    96,    99,   108,   114,    58,    58,    58,    58,   117,
      62,    62,    62,   104,    62,    62,    62,     8,     8,   103,
     104,    62,   102,   103,    58,    62,    59,    59,    45,    59,
     117,    62,   103,   104,   117,   102,    59,    85,   117,   117,
      57,   103,    97,   118,    59,    85,   117,    93,    98,    85,
     118,   117,    85,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    69,    70,    71,
      71,    71,    72,    72,    73,    73,    75,    76,    74,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    85,    85,    87,    86,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    91,    93,    94,    92,    95,    95,    97,    98,
      96,    99,    99,    99,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   107,   107,
     108,   109,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   111,   111,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     3,     3,     1,
       1,     3,     2,     1,     1,     1,     0,     0,     8,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     0,
       3,     1,     2,     1,     1,     0,     4,     3,     0,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     2,     2,
       1,     4,     4,     0,     0,    13,     6,    10,     0,     0,
       9,     3,     2,     2,     3,     1,     1,     1,     1,     2,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     4,
       4,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     4,     3,     3,     1,     1,     1,     0,     0
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
        case 16:
#line 162 "new_yacc.y" /* yacc.c:1646  */
    {
				func_type = current_dtype;
				is_declaration = 0;
				current_scope = create_new_scope();
				gencode((yyvsp[0].entry)->lexeme + string(":"));
			}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 170 "new_yacc.y" /* yacc.c:1646  */
    {
				is_declaration = 0;
				fill_parameter_list((yyvsp[-4].entry),param_list,p_idx);
				p_idx = 0;
				is_func = 1;
				p=1;
			}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 178 "new_yacc.y" /* yacc.c:1646  */
    {   is_func = 0;	}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "new_yacc.y" /* yacc.c:1646  */
    {is_declaration = 1; }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "new_yacc.y" /* yacc.c:1646  */
    {is_declaration = 1; }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 200 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = INT;current_storage=4;}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 201 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = SHORT;current_storage=2;}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 202 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = SHORT;current_storage=2;}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 203 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = LONG;current_storage=8;}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 204 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = LONG;current_storage=8;}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 205 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = LONG_LONG;current_storage=8;}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 206 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = LONG_LONG;current_storage=8;}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 207 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = CHAR;current_storage=1;}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 208 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = FLOAT;current_storage=4;}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 209 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = VOID;current_storage=0;}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 210 "new_yacc.y" /* yacc.c:1646  */
    {current_dtype = STRING;current_storage=4;}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 224 "new_yacc.y" /* yacc.c:1646  */
    {
							param_list[p_idx++] = (yyvsp[0].entry)->data_type;
							gencode(string("arg ") + (yyvsp[0].entry)->lexeme);
						}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 231 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t(); (yyval.content)=(yyvsp[0].content);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 232 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t(); (yyval.content)=(yyvsp[0].content);}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 239 "new_yacc.y" /* yacc.c:1646  */
    {
					if(!p)current_scope = create_new_scope();
					else p = 0;
				}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 248 "new_yacc.y" /* yacc.c:1646  */
    {
					current_scope = exit_scope();
					(yyval.content) = new content_t();
					(yyval.content) = (yyvsp[-1].content);
				}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 255 "new_yacc.y" /* yacc.c:1646  */
    {
									backpatch((yyvsp[-2].content)->nextlist,(yyvsp[-1].instr));
									(yyval.content) = new content_t();
									(yyval.content)->nextlist = (yyvsp[0].content)->nextlist;
									(yyval.content)->breaklist = merge((yyvsp[-2].content)->breaklist,(yyvsp[0].content)->breaklist);
									(yyval.content)->continuelist = merge((yyvsp[-2].content)->continuelist,(yyvsp[0].content)->continuelist);
								}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 263 "new_yacc.y" /* yacc.c:1646  */
    {	(yyval.content) = new content_t();	}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 267 "new_yacc.y" /* yacc.c:1646  */
    {
							(yyval.content) = new content_t();
							(yyval.content) = (yyvsp[0].content);
							backpatch((yyval.content)->nextlist, nextinstr);
						}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 273 "new_yacc.y" /* yacc.c:1646  */
    {
							(yyval.content) = new content_t();
							(yyval.content) = (yyvsp[0].content);
							backpatch((yyval.content)->nextlist, nextinstr);
						}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 279 "new_yacc.y" /* yacc.c:1646  */
    {
							(yyval.content) = new content_t();
							(yyval.content) = (yyvsp[0].content);
							backpatch((yyval.content)->nextlist, nextinstr);
						 }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 284 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t();}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 285 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t();}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 286 "new_yacc.y" /* yacc.c:1646  */
    {
								if(is_func)
								{
									if(func_type != VOID)
										yyerror("return type (VOID) does not match function type");
								}
							  	else yyerror("return statement not inside function definition");
							}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 295 "new_yacc.y" /* yacc.c:1646  */
    {
								if(!is_loop)
									yyerror("Illegal use of continue");
								(yyval.content) = new content_t();
								(yyval.content)->continuelist = {nextinstr};
								gencode("goto _");
							}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 303 "new_yacc.y" /* yacc.c:1646  */
    {
								if(!is_loop) {yyerror("Illegal use of break");}
								(yyval.content) = new content_t();
								(yyval.content)->breaklist = {nextinstr};
								gencode("goto _");
						    }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 311 "new_yacc.y" /* yacc.c:1646  */
    {
								if(is_func)
								{
									if(func_type != (yyvsp[-1].content)->data_type)
										yyerror("return type does not match function type");
								}
								else yyerror("return statement not in function definition");
							}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 319 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t();}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 320 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t();}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 321 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t();}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 324 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t();}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 326 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t();}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 328 "new_yacc.y" /* yacc.c:1646  */
    {is_loop = 1;}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 328 "new_yacc.y" /* yacc.c:1646  */
    {is_loop = 0;}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 329 "new_yacc.y" /* yacc.c:1646  */
    {
				backpatch((yyvsp[-8].content)->truelist,(yyvsp[-2].instr));
				backpatch((yyvsp[-1].content)->nextlist,(yyvsp[-7].instr));
				backpatch((yyvsp[-1].content)->continuelist, (yyvsp[-7].instr));
				backpatch((yyvsp[-3].content)->nextlist, (yyvsp[-9].instr));
				(yyval.content) = new content_t();
				(yyval.content)->nextlist = merge((yyvsp[-8].content)->falselist,(yyvsp[-1].content)->breaklist);
				gencode(string("goto ") + to_string((yyvsp[-7].instr)));
			 }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 342 "new_yacc.y" /* yacc.c:1646  */
    {
				backpatch((yyvsp[-3].content)->truelist,(yyvsp[-1].instr));
				(yyval.content) = new content_t();
				(yyval.content)->nextlist = merge((yyvsp[-3].content)->falselist,(yyvsp[0].content)->nextlist);
				(yyval.content)->breaklist = (yyvsp[0].content)->breaklist;
				(yyval.content)->continuelist = (yyvsp[0].content)->continuelist;
			}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 351 "new_yacc.y" /* yacc.c:1646  */
    {
				backpatch((yyvsp[-7].content)->truelist,(yyvsp[-5].instr));
				backpatch((yyvsp[-7].content)->falselist,(yyvsp[-1].instr));

				(yyval.content) = new content_t();
				vector<int> temp = merge((yyvsp[-4].content)->nextlist,(yyvsp[-2].content)->nextlist);
				(yyval.content)->nextlist = merge(temp,(yyvsp[0].content)->nextlist);
				(yyval.content)->breaklist = merge((yyvsp[0].content)->breaklist,(yyvsp[-4].content)->breaklist);
				(yyval.content)->continuelist = merge((yyvsp[0].content)->continuelist,(yyvsp[-4].content)->continuelist);
			}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 363 "new_yacc.y" /* yacc.c:1646  */
    {is_loop = 1;}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 363 "new_yacc.y" /* yacc.c:1646  */
    {is_loop = 0;}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 364 "new_yacc.y" /* yacc.c:1646  */
    {
				backpatch((yyvsp[-1].content)->nextlist,(yyvsp[-7].instr));
				backpatch((yyvsp[-5].content)->truelist,(yyvsp[-3].instr));
				backpatch((yyvsp[-1].content)->continuelist, (yyvsp[-7].instr));
				(yyval.content) = new content_t();
				(yyval.content)->nextlist = merge((yyvsp[-5].content)->falselist,(yyvsp[-1].content)->breaklist);
				gencode(string("goto ") + to_string((yyvsp[-7].instr)));
			}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 374 "new_yacc.y" /* yacc.c:1646  */
    {is_declaration = 0;}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 391 "new_yacc.y" /* yacc.c:1646  */
    {
						(yyval.content) = new content_t(); 
						(yyval.content)->truelist = (yyvsp[-1].content)->truelist; 
						(yyval.content)->falselist = (yyvsp[-1].content)->falselist;
					}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 397 "new_yacc.y" /* yacc.c:1646  */
    {	(yyval.content) = new content_t();	}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 401 "new_yacc.y" /* yacc.c:1646  */
    {
					(yyval.content) = new content_t();
					(yyval.content)->truelist = (yyvsp[0].content)->truelist; 
					(yyval.content)->falselist = (yyvsp[0].content)->falselist;
				}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 407 "new_yacc.y" /* yacc.c:1646  */
    {
					(yyval.content) = new content_t(); 
					(yyval.content)->truelist = (yyvsp[0].content)->truelist; 
					(yyval.content)->falselist = (yyvsp[0].content)->falselist;
				}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 417 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" > "));
			}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 423 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" < "));
			}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 430 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" == "));
			}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 437 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" != "));
			}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 444 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" >= "));
			}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 451 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" <= "));
			}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 458 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-3].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[-3].content)->data_type;
				backpatch((yyvsp[-3].content)->truelist,(yyvsp[-1].instr));
				(yyval.content)->truelist = (yyvsp[0].content)->truelist;
				(yyval.content)->falselist = merge((yyvsp[-3].content)->falselist,(yyvsp[0].content)->falselist);
			}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 468 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-3].content)->data_type,(yyvsp[0].content)->data_type,2);
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[-3].content)->data_type;
				backpatch((yyvsp[-3].content)->falselist,(yyvsp[-1].instr));
				(yyval.content)->truelist = merge((yyvsp[-3].content)->truelist,(yyvsp[0].content)->truelist);
				(yyval.content)->falselist = (yyvsp[0].content)->falselist;
			}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 478 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
				(yyval.content)->truelist = (yyvsp[0].content)->falselist;
				(yyval.content)->falselist = (yyvsp[0].content)->truelist;
			}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 486 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[0].content)->data_type; 
				(yyval.content)->addr = (yyvsp[0].content)->addr;
			}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 492 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
			}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 497 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
			}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 505 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->entry->data_type,(yyvsp[0].content)->data_type,1);
		 		(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
		 		(yyval.content)->code = string("t")+to_string(temp_var_number) + string(" = ") + (yyvsp[-2].content)->entry->lexeme + *(yyvsp[-1].op) + (yyvsp[0].content)->addr;
				gencode((yyval.content)->code);
				(yyval.content)->code = string((yyvsp[-2].content)->entry->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				gencode((yyval.content)->code);
				temp_var_number++;
		 		rhs = 0;
			}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 519 "new_yacc.y" /* yacc.c:1646  */
    {
				if (lhs_array == 0) {
					type_check((yyvsp[-2].content)->entry->data_type,(yyvsp[0].content)->data_type,1);
			 		(yyval.content) = new content_t();
					(yyval.content)->data_type = (yyvsp[0].content)->data_type;
				
					//if($3->entry->char_value == NULL)
					//{
						(yyval.content)->code = (yyvsp[-2].content)->entry->lexeme + string(" = ") + (yyvsp[0].content)->addr;
					//}
					/*else
					{
			 			$$->code = $1->entry->lexeme + string(" = ") + $3->entry->char_value;
					}*/
					gencode((yyval.content)->code);
			 		rhs = 0;
				}
				
				else {
					//printf("LSH = arithmetic expr\n");
					//printf("Arrays data type = %d\n", $1->data_type);
					type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,1);
					//printf("checkpoint0\n");
				
			 		(yyval.content) = new content_t();
			 		//printf("checkpoint1\n");
			 		
					(yyval.content)->data_type = (yyvsp[0].content)->data_type;
					//printf("checkpoint2\n");
					
					(yyval.content)->code = (yyvsp[-2].content)->entry->lexeme + string("[") + (yyvsp[-2].content)->addr + string("]") + string(" = ") + (yyvsp[0].content)->addr;
					//printf("checkpoint3 .... code  ");
					//cout<<$$->code;
					//printf("\n");
					
					gencode((yyval.content)->code);
					//printf("checkpoint4\n");
			 		rhs = 0;
			 		//printf("DOne\n");
				}
			}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 563 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->entry->data_type,(yyvsp[0].content)->data_type,1);
	 			(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
	 			(yyval.content)->code = string("t")+to_string(temp_var_number) + string(" = ") + (yyvsp[-2].content)->entry->lexeme + *(yyvsp[-1].op) + (yyvsp[0].content)->addr;
				//gencode($$->code);
				//$$->code = string($1->entry->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				//gencode($$->code);
				temp_var_number++;
		 		rhs = 0;
			}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 577 "new_yacc.y" /* yacc.c:1646  */
    {
				//printf("LSH = array access\n");
				type_check((yyvsp[-2].content)->entry->data_type,(yyvsp[0].content)->data_type,1);
	 			(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
				
	 			(yyval.content)->code = string((yyvsp[-2].content)->entry->lexeme) + " = " + string("t")+to_string(temp_var_number-1);
	 			
	 			//printf("Code = ");
				//cout<<$$->code;
				//printf("\n");
				
				gencode((yyval.content)->code);
	 			rhs = 0;
			}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 596 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->entry->data_type,(yyvsp[0].data_type),1); 
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[0].data_type);
			}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 605 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->entry->data_type,(yyvsp[0].content)->data_type,1);
			 	(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
			 	(yyval.content)->code = string("t")+to_string(temp_var_number) + string(" = ") + (yyvsp[-2].content)->entry->lexeme + *(yyvsp[-1].op) + (yyvsp[0].content)->addr;
				gencode((yyval.content)->code);
				(yyval.content)->code = string((yyvsp[-2].content)->entry->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				gencode((yyval.content)->code);
				temp_var_number++;
		 		rhs = 0;
			}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 619 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->entry->data_type,(yyvsp[0].content)->data_type,1);
			 	(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
			 	(yyval.content)->code = (yyvsp[-2].content)->entry->lexeme + string(" = ") + (yyvsp[0].content)->addr;
				gencode((yyval.content)->code);
			 	rhs = 0;
			}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 630 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,1);
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
			 	(yyval.content)->code = string("t")+to_string(temp_var_number) + string(" = ") + (yyvsp[-2].content)->entry->lexeme + *(yyvsp[-1].op) + (yyvsp[0].content)->addr;
				gencode((yyval.content)->code);
				(yyval.content)->code = string((yyvsp[-2].content)->entry->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				gencode((yyval.content)->code);
				temp_var_number++;
		 		rhs = 0;
			}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 643 "new_yacc.y" /* yacc.c:1646  */
    {
				type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,1);
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].content)->data_type;
			 	(yyval.content)->code = (yyvsp[-2].content)->code + string(" = ") + (yyvsp[0].content)->addr;
				gencode((yyval.content)->code);
				rhs = 0;
			}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 655 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[-1].entry)->data_type;
				(yyval.content)->code = string("t")+to_string(temp_var_number)+ string(" = ")+string((yyvsp[-1].entry)->lexeme);
				gencode((yyval.content)->code);
				temp_var_number++;
				(yyval.content)->code = string("t")+to_string(temp_var_number)+ string(" = ")+string((yyvsp[-1].entry)->lexeme)+string(" + 1");
				gencode((yyval.content)->code);
				(yyval.content)->code = string((yyvsp[-1].entry)->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				gencode((yyval.content)->code);
				(yyval.content)->code = string("t")+to_string(temp_var_number-1);
				temp_var_number++;
			}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 670 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[-1].entry)->data_type;
				(yyval.content)->code = string("t")+to_string(temp_var_number)+ string(" = ")+string((yyvsp[-1].entry)->lexeme);
				gencode((yyval.content)->code);
				temp_var_number++;
				(yyval.content)->code = string("t")+to_string(temp_var_number)+ string(" = ")+string((yyvsp[-1].entry)->lexeme)+string(" - 1");
				gencode((yyval.content)->code);
				(yyval.content)->code = string((yyvsp[-1].entry)->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				gencode((yyval.content)->code);
				(yyval.content)->code = string("t")+to_string(temp_var_number-1);
				temp_var_number++;
			}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 685 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].entry)->data_type;
				(yyval.content)->code = string("t")+to_string(temp_var_number)+ string(" = ")+string((yyvsp[0].entry)->lexeme) + string(" - 1");
				gencode((yyval.content)->code);
				(yyval.content)->code = string((yyvsp[0].entry)->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				gencode((yyval.content)->code);
				(yyval.content)->code = string("t")+to_string(temp_var_number);
				temp_var_number++;
			}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 697 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[0].entry)->data_type;
				(yyval.content)->code = string("t")+to_string(temp_var_number)+ string(" = ")+string((yyvsp[0].entry)->lexeme) + string(" + 1");
				gencode((yyval.content)->code);
				(yyval.content)->code = string((yyvsp[0].entry)->lexeme)+string(" = ")+string("t")+to_string(temp_var_number);
				gencode((yyval.content)->code);
				(yyval.content)->code = string("t")+to_string(temp_var_number);
				temp_var_number++;
			}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 708 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t(); (yyval.content)->entry = (yyvsp[0].entry); lhs_array = 0;}
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 710 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.content) = new content_t(); 
   			(yyval.content)->code = (yyvsp[0].content)->code; 
   			(yyval.content)->data_type = (yyvsp[0].content)->data_type;
   			//printf("Setting the entry\n");
   			(yyval.content)->entry = (yyvsp[0].content)->entry;
   			lhs_array = 1;
   			//printf("Setting addr\n");
   			(yyval.content)->addr = (yyvsp[0].content)->addr;
   			//printf("LHS is an array\n");
   			}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 723 "new_yacc.y" /* yacc.c:1646  */
    {
                    if(is_declaration && !rhs)
                    {
                      (yyvsp[0].entry) = insert(SYMBOL_TABLE,yytext,INT_MAX,current_dtype,yylineno,current_storage,NULL);
                      if((yyvsp[0].entry) == NULL) 
					  	yyerror("Redeclaration of variable");
                    }
                    else
                    {
                      (yyvsp[0].entry) = search_recursive(yytext);
                      if((yyvsp[0].entry) == NULL) 
					  	yyerror("Variable not declared");
                    }
                    
					(yyval.entry) = (yyvsp[0].entry);
                }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 741 "new_yacc.y" /* yacc.c:1646  */
    {rhs=1; (yyval.op) = new string(" + ");}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 742 "new_yacc.y" /* yacc.c:1646  */
    {rhs=1; (yyval.op) = new string(" - ");}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 743 "new_yacc.y" /* yacc.c:1646  */
    {rhs=1; (yyval.op) = new string(" * ");}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 744 "new_yacc.y" /* yacc.c:1646  */
    {rhs=1;	(yyval.op) = new string(" / ");}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 745 "new_yacc.y" /* yacc.c:1646  */
    {rhs=1; (yyval.op) = new string(" % ");}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 749 "new_yacc.y" /* yacc.c:1646  */
    {
						type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[-2].content)->data_type;
						gencode_math((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" + "));
					 }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 757 "new_yacc.y" /* yacc.c:1646  */
    {
						type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[-2].content)->data_type;
						gencode_math((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" - "));
					 }
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 765 "new_yacc.y" /* yacc.c:1646  */
    {
						type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,0);
						(yyval.content) = new content_t();
		 				(yyval.content)->data_type = (yyvsp[-2].content)->data_type;
						gencode_math((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" * "));
					 }
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 773 "new_yacc.y" /* yacc.c:1646  */
    {
						type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[-2].content)->data_type;
						gencode_math((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" / "));
					 }
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 781 "new_yacc.y" /* yacc.c:1646  */
    {
						type_check((yyvsp[-2].content)->data_type,(yyvsp[0].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[-2].content)->data_type;
						gencode_math((yyval.content), (yyvsp[-2].content), (yyvsp[0].content), string(" % "));
				 	 }
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 789 "new_yacc.y" /* yacc.c:1646  */
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[-1].content)->data_type;
						(yyval.content)->addr = (yyvsp[-1].content)->addr;
						(yyval.content)->code = (yyvsp[-1].content)->code;
					 }
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 797 "new_yacc.y" /* yacc.c:1646  */
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[0].content)->data_type;
						(yyval.content)->addr = "t" + to_string(temp_var_number);
						std::string expr = (yyval.content)->addr + " = " + "minus " + (yyvsp[0].content)->addr;
						(yyval.content)->code = (yyvsp[0].content)->code + expr;
						temp_var_number++;
				 	 }
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 807 "new_yacc.y" /* yacc.c:1646  */
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[0].entry)->data_type;
	 					(yyval.content)->addr = (yyvsp[0].entry)->lexeme;
			   		 }
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 814 "new_yacc.y" /* yacc.c:1646  */
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[0].entry)->data_type;
						if((yyvsp[0].entry)->value == -1)
						{
							(yyval.content)->addr = ((yyvsp[0].entry)->char_value);
						}
						else
						{
							(yyval.content)->addr = to_string((yyvsp[0].entry)->value);
						}
					 }
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 829 "new_yacc.y" /* yacc.c:1646  */
    {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 830 "new_yacc.y" /* yacc.c:1646  */
    {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 831 "new_yacc.y" /* yacc.c:1646  */
    {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 832 "new_yacc.y" /* yacc.c:1646  */
    {(yyvsp[0].entry)->is_constant=1; (yyval.entry) = (yyvsp[0].entry);}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 836 "new_yacc.y" /* yacc.c:1646  */
    {
					//printf("Declaration === %d\n", is_declaration);
					
					if(is_declaration)
					{
						if((yyvsp[-1].entry)->value <= 0)
							yyerror("size of array is not positive");
						else if((yyvsp[-1].entry)->is_constant)
							(yyvsp[-3].entry)->array_dimension = (yyvsp[-1].entry)->value;
							(yyvsp[-3].entry)->storage = current_storage*(yyvsp[-1].entry)->value;

					}
					else if((yyvsp[-1].entry)->is_constant)
					{
						if((yyvsp[-1].entry)->value > (yyvsp[-3].entry)->array_dimension)
							yyerror("Array index out of bound");
						if((yyvsp[-1].entry)->value < 0)
							yyerror("Array index cannot be negative");
					}
					
					(yyval.content) = new content_t();
					(yyval.content)->data_type = (yyvsp[-3].entry)->data_type;
					
					if((yyvsp[-1].entry)->is_constant && !is_declaration)
					{
						//printf("is lhs array = %d\n", lhs_array);
						//printf("%s is constant and is not a declaration\n", $3->lexeme);
						(yyval.content)->addr = "t" + to_string(temp_var_number);
						temp_var_number++;
						std::string expr = (yyval.content)->addr + " = " + "4 * " + to_string((yyvsp[-1].entry)->value);
						
						
						std::string expr1 = "t" + to_string(temp_var_number) + " = "+ string((yyvsp[-3].entry)->lexeme)+string("[") + (yyval.content)->addr + string("]");
						/*
						printf("\nEXPR\n");	
						cout<<expr;
						printf("\nEXPR1\n");		
						cout<<expr1;
						*/
						
						(yyval.content)->code = expr ; //+string($$->entry->lexeme)+" = "+to_string(temp_var_number) + "\n";
						gencode((yyval.content)->code);
						(yyval.content)->code= expr1;
						gencode((yyval.content)->code);
						(yyval.content)->code = expr + expr1;
						temp_var_number++;
						//$$->code = string($1->lexeme) + string("[") + to_string($3->value) + string("]");
						//cout<<$$->code;
					}
					else
						(yyval.content)->code = string((yyvsp[-3].entry)->lexeme) + string("[") + string((yyvsp[-1].entry)->lexeme) + string("]");
					(yyval.content)->entry = (yyvsp[-3].entry);
				}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 891 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 892 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 896 "new_yacc.y" /* yacc.c:1646  */
    {
					(yyval.data_type) = (yyvsp[-3].entry)->data_type;
					check_parameter_list((yyvsp[-3].entry),param_list,p_idx);
					p_idx = 0;
					gencode(string("call ") + (yyvsp[-3].entry)->lexeme);
				}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 904 "new_yacc.y" /* yacc.c:1646  */
    {
					(yyval.data_type) = (yyvsp[-2].entry)->data_type;
				 	check_parameter_list((yyvsp[-2].entry),param_list,p_idx);
				 	p_idx = 0;
	 				gencode(string("call ") + (yyvsp[-2].entry)->lexeme);
				}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 918 "new_yacc.y" /* yacc.c:1646  */
    {
					param_list[p_idx++] = (yyvsp[0].content)->data_type;
					gencode(string("param ") + (yyvsp[0].content)->addr);
				}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 923 "new_yacc.y" /* yacc.c:1646  */
    {
					param_list[p_idx++] = STRING;
					gencode(string("param ") + (yyvsp[0].entry)->lexeme);
				}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 929 "new_yacc.y" /* yacc.c:1646  */
    {(yyval.instr) = nextinstr;}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 932 "new_yacc.y" /* yacc.c:1646  */
    {
				(yyval.content) = new content_t;
				(yyval.content)->nextlist = {nextinstr};
				gencode("goto _");
			}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2679 "y.tab.c" /* yacc.c:1646  */
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
#line 939 "new_yacc.y" /* yacc.c:1906  */


void gencode(string x)
{
	std::string instruction;

	instruction = to_string(nextinstr) + string(": ") + x;
	ICG.push_back(instruction);
	nextinstr++;
		

	char** splitwords = (char**)malloc(10 * sizeof(char*));
	for(int i=0;i<10;i++)
	{	
		splitwords[i] = (char*)malloc(sizeof(char)*20);
	}
	char *temp = (char*)malloc(sizeof(char)*(x.length()+1));
	int i=0, j, k;
	int count = 0;
	while(i<x.length())
	{
		temp[i]=x[i];
		i++;
	}
	temp[i]='\0';
	char* token = strtok(temp," ");
	while(token != NULL)
	{
		strcpy(splitwords[count],token);
		//printf("%s ",splitwords[count]);
		count++;
		token = strtok(NULL, " ");
	}
	//printf("\n");
	q[quadlen]= (quad*)malloc(sizeof(quad));
	q[quadlen]->res = (char*)malloc(sizeof(char)*20);
	q[quadlen]->op = (char*)malloc(sizeof(char)*20);
	q[quadlen]->arg1 = (char*)malloc(sizeof(char)*20);
	q[quadlen]->arg2 = (char*)malloc(sizeof(char)*20);
	if(count == 3) //5: c = t0
	{
		//7: t2 = arr[t1]
		char *arr_name = (char*)malloc(sizeof(char)*(strlen(splitwords[2]) + strlen(splitwords[0]) + 1));
		char *index_name = (char*)malloc(sizeof(char)*(strlen(splitwords[2])+ strlen(splitwords[0]) + 1));
		for (i = 0; i < strlen(splitwords[2]); i++) {
			arr_name[i] = splitwords[2][i];
			if (splitwords[2][i] == '[') {  //t2 = arr[t1]
				//printf("Adding quadruple for array");
				strcpy(q[quadlen]->res,splitwords[0]);
				strcpy(q[quadlen]->op,"=[]");
				arr_name[i] = '\0';
				//printf("The name of the array got is %s\n", arr_name);
				strcpy(q[quadlen]->arg1,arr_name);
				
				k = 0;
				for (j = i+1; j < strlen(splitwords[2]) - 1; j++) {
					index_name[k++] = splitwords[2][j];
				}
				index_name[k] = '\0';
				//printf("The index value = %s\n", index_name);
				strcpy(q[quadlen]->arg2,index_name);
				quadlen++;
				return;
			}
		}
		
		//8: arr[t3] = d
		for (i = 0; i < strlen(splitwords[0]); i++) {
			arr_name[i] = splitwords[0][i];
			if (splitwords[0][i] == '[') {  //arr[t1] = t2
				//printf("Adding quadruple for array");
				strcpy(q[quadlen]->res,splitwords[2]);
				strcpy(q[quadlen]->op,"[]=");
				arr_name[i] = '\0';
				//printf("The name of the array got is %s\n", arr_name);
				strcpy(q[quadlen]->arg1,arr_name);
				
				k = 0;
				for (j = i+1; j < strlen(splitwords[0]) - 1; j++) {
					index_name[k++] = splitwords[0][j];
				}
				index_name[k] = '\0';
				//printf("The index value = %s\n", index_name);
				strcpy(q[quadlen]->arg2,index_name);
				quadlen++;
				return;
			}
		}
		
		//normal case ....
		strcpy(q[quadlen]->res,splitwords[0]);
		strcpy(q[quadlen]->arg1,splitwords[2]);
		strcpy(q[quadlen]->op,"_____");
		strcpy(q[quadlen]->arg2,"_____");
	}
	else if(count == 5) //4: t0 = a + b
	{
		strcpy(q[quadlen]->res,splitwords[0]);
		strcpy(q[quadlen]->arg1,splitwords[2]);
		strcpy(q[quadlen]->arg2,splitwords[4]);
		strcpy(q[quadlen]->op,splitwords[3]);
	}
	else if(count == 4) //2: if t0 goto 4
	{
		strcpy(q[quadlen]->res,splitwords[3]);
		strcpy(q[quadlen]->arg1,splitwords[1]);
		strcpy(q[quadlen]->arg2,"_____");
		strcpy(q[quadlen]->op,splitwords[0]);
	}
	else if(count == 1)// 0: main:
	{
		
		strcpy(q[quadlen]->res,splitwords[0]);
		strcpy(q[quadlen]->op,"_____");
		strcpy(q[quadlen]->arg2,"_____");
		strcpy(q[quadlen]->arg1,"_____");
		
	}
	else if(count == 2)// 3: goto 8
	{
		strcpy(q[quadlen]->res,splitwords[1]);
		strcpy(q[quadlen]->op,splitwords[0]);
		strcpy(q[quadlen]->arg2,"_____");
		strcpy(q[quadlen]->arg1,"_____");	
	}
	quadlen++;


}


void gencode_rel(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op)
{
	lhs->addr = "t" + to_string(temp_var_number);
	std::string expr = lhs->addr + string(" = ") + arg1->addr + op + arg2->addr;
	lhs->code = arg1->code + arg2->code + expr;

	temp_var_number++;

	gencode(expr);
	lhs->data_type = arg1->data_type;

	lhs->truelist = {nextinstr};
	lhs->falselist = {nextinstr + 1};

	std::string code;

	code = string("if ") + string(lhs->addr) + string(" goto _");
	gencode(code);

	code = string("goto _");
	gencode(code);
}

void gencode_math(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op)
{
	lhs->addr = "t" + to_string(temp_var_number);
	std::string expr = lhs->addr + string(" = ") + arg1->addr + op + arg2->addr;
	lhs->code = arg1->code + arg2->code + expr;

	temp_var_number++;

	gencode(expr);
}

void backpatch(vector<int>& v1, int number)
{
	//cout<<"here "<<v1.size()<<endl;

	for(int i = 0; i<v1.size(); i++)
	{
		string instruction = ICG[v1[i]];
		//cout << v1[i];
		//cout<< "backpatch instr = " << instruction<< endl;

		if(instruction.find("_") < instruction.size())
		{
			instruction.replace(instruction.find("_"),1,to_string(number));
			//instruction.replace(instruction.find("_"),1,arr);
			ICG[v1[i]] = instruction;
			//itoa(number,q[goto_place]->res,10);
			string x =to_string(number);
			char *temp = (char*)malloc(sizeof(char)*(x.length()+1));
			int i=0;
			while(i<x.length())
			{
				temp[i]=x[i];
				i++;
			}
			temp[i]='\0';
			char *lin = (char*)malloc(sizeof(char)*(instruction.length()+1));
			i=0;
			while(i<instruction.length())
			{
				if(instruction[i]==':')
				{
					break;
				}
				lin[i]=instruction[i];
				i++;
			}
			lin[i]='\0';
			int lin_no = atoi(lin);
			strcpy(q[lin_no]->res,temp);
		}
	}
}

vector<int> merge(vector<int>& v1, vector<int>& v2)
{
	vector<int> concat;
	concat.reserve(v1.size() + v2.size());
	concat.insert(concat.end(), v1.begin(), v1.end());
	concat.insert(concat.end(), v2.begin(), v2.end());

	return concat;
}

void type_check(int left, int right, int flag)
{
	//printf("The two types are %d, %d\n", left, right);
	if(left != right)
	{
		switch(flag)
		{
			case 0: yyerror("Type mismatch in arithmetic expression"); break;
			case 1: yyerror("Type mismatch in assignment expression"); break;
			case 2: yyerror("Type mismatch in logical expression"); break;
		}
	}
}

void displayICG()
{
	ofstream outfile("ICG.code");

	for(int i=0; i<ICG.size();i++)
	outfile << ICG[i] <<endl;

	outfile << nextinstr << ": exit";

	outfile.close();
	printf("\nQUADRUPLE FORMAT\n\n");
	print_dashes(40);
	printf("\t%s\t%s\t%s\t%s\n","op","arg1","arg2","res");
	print_dashes(40);
	for(int i=0;i<quadlen;i++)
	{
		printf("\t%s\t%s\t%s\t%s\n\n",q[i]->op,q[i]->arg1,q[i]->arg2,q[i]->res);
	}
}

void printlist(vector<int> v){
	for(auto it:v)
		cout<<it<<" ";
	cout<<"Next: "<<nextinstr<<endl;
}

int main(int argc, char *argv[])
{
	int i;
	 for(i=0; i<NUM_TABLES;i++)
	 {
	  symbol_table_list[i].symbol_table = NULL;
	  symbol_table_list[i].parent = -1;
	 }

	constant_table = create_table();
  	symbol_table_list[0].symbol_table = create_table();
	yyin = fopen(argv[1], "r");

	if(!yyparse())
	{
		printf("\nPARSING COMPLETE\n\n\n");
	}
	else
	{
			printf("\nPARSING FAILED!\n\n\n");
	}
	printf("\nSYMBOL TABLES\n\n");
	display_all();
	printf("\nCONSTANT TABLE\n\n");
	
	display_constant_table(constant_table);
	
	displayICG();
	
	

}

void yyerror(const char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
	
}
