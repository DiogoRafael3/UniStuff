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
#line 1 "ya.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include "apt_tree.h"
#define TAMANHO_TABELA 256
#define NSYMS 20
    
int yylex (void);
void yyerror (char const *);
void prints123();

enum type_kind look(char *id);

void insertId(char *id, Types *type);
void insertIds(Ids *ids, Types *type);
enum type_kind lookid(Id *id);



#line 88 "parser.c" /* yacc.c:339  */

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
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    ID = 258,
    INT_LIT = 259,
    BOOL_LIT = 260,
    FLOAT_LIT = 261,
    STRING_LIT = 262,
    INT = 263,
    FLOAT = 264,
    BOOL = 265,
    VOID = 266,
    STRING = 267,
    LPAR = 268,
    RPAR = 269,
    LPARR = 270,
    RPARR = 271,
    LCHAV = 272,
    RCHAV = 273,
    EQUAL = 274,
    LESSOREQUAL = 275,
    LESS = 276,
    DIFF = 277,
    GREATER = 278,
    GREATEROREQUAL = 279,
    POINT = 280,
    BREAK = 281,
    WHILE = 282,
    DO = 283,
    NEXT = 284,
    SUB = 285,
    ADD = 286,
    MUL = 287,
    DIV = 288,
    MOD = 289,
    AND = 290,
    OR = 291,
    NOT = 292,
    EXPOENT = 293,
    IF = 294,
    THEN = 295,
    ELSE = 296,
    DEFINE = 297,
    RETURN = 298,
    ENDOFSTM = 299,
    DOUBLEQUOTE = 300,
    COMMA = 301,
    ASSIGN = 302
  };
#endif
/* Tokens.  */
#define ID 258
#define INT_LIT 259
#define BOOL_LIT 260
#define FLOAT_LIT 261
#define STRING_LIT 262
#define INT 263
#define FLOAT 264
#define BOOL 265
#define VOID 266
#define STRING 267
#define LPAR 268
#define RPAR 269
#define LPARR 270
#define RPARR 271
#define LCHAV 272
#define RCHAV 273
#define EQUAL 274
#define LESSOREQUAL 275
#define LESS 276
#define DIFF 277
#define GREATER 278
#define GREATEROREQUAL 279
#define POINT 280
#define BREAK 281
#define WHILE 282
#define DO 283
#define NEXT 284
#define SUB 285
#define ADD 286
#define MUL 287
#define DIV 288
#define MOD 289
#define AND 290
#define OR 291
#define NOT 292
#define EXPOENT 293
#define IF 294
#define THEN 295
#define ELSE 296
#define DEFINE 297
#define RETURN 298
#define ENDOFSTM 299
#define DOUBLEQUOTE 300
#define COMMA 301
#define ASSIGN 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "ya.y" /* yacc.c:355  */


    char *string;
    int inteiro;
    float floatt;
    bool boleano;
    

    struct Ids *ids;
    struct TypeIds *idstype;
    struct Exp *exp;
    struct Types *type;
    struct Declaration *decl;
    struct Declarations1 *decl1;
    struct Declarations *decls;
    struct Body *corpo;
    struct Function *funcao;
    struct Mix *mix;
    struct Lits *lits;
    struct Lit *lit;
    struct Stats *stats;
    struct Stat *stat;
    struct Id *id;


#line 248 "parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 265 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    97,   101,   102,   106,   111,   119,   130,
     139,   147,   155,   162,   171,   177,   186,   194,   201,   208,
     215,   222,   229,   240,   248,   257,   264,   271,   278,   285,
     292,   299,   308,   319,   326,   333,   340,   347,   357,   364,
     371,   378,   387,   395,   401,   408,   415,   421,   431,   438,
     444,   456,   463,   475,   482,   492,   499,   506,   513,   520,
     530,   536,   539,   546,   552,   558,   564,   570,   576,   582,
     588
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT_LIT", "BOOL_LIT", "FLOAT_LIT",
  "STRING_LIT", "INT", "FLOAT", "BOOL", "VOID", "STRING", "LPAR", "RPAR",
  "LPARR", "RPARR", "LCHAV", "RCHAV", "EQUAL", "LESSOREQUAL", "LESS",
  "DIFF", "GREATER", "GREATEROREQUAL", "POINT", "BREAK", "WHILE", "DO",
  "NEXT", "SUB", "ADD", "MUL", "DIV", "MOD", "AND", "OR", "NOT", "EXPOENT",
  "IF", "THEN", "ELSE", "DEFINE", "RETURN", "ENDOFSTM", "DOUBLEQUOTE",
  "COMMA", "ASSIGN", "$accept", "input", "decls", "decl", "idstype",
  "decl1", "ids", "id", "type", "exp", "funcao", "mix", "lits", "lit",
  "corpo", "stats", "stat", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -76

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-76)))

#define YYTABLE_NINF -23

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    -2,     7,    17,     0,   -76,   -26,   -16,     9,    27,
      31,   -76,   -76,   -76,    16,    22,    34,    21,    -1,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     1,    16,    16,    35,
     119,   119,   -10,    60,    16,    59,   -76,   -76,   -76,   -76,
     119,   119,   119,    45,    87,   204,   -76,   308,   100,    78,
      61,   344,   183,   -76,   -76,   119,   119,   -76,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   -76,    -7,    65,   119,    66,   119,   119,   -76,
     131,    93,   -76,    78,    78,    -5,   -76,   -76,   -76,   -76,
      98,   -76,   103,    99,   105,   -76,    97,   -76,   -76,   225,
      63,    63,    63,    63,    63,    63,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   130,   -76,   288,   -76,   266,   157,
     -76,   -76,   -76,   127,   -76,   119,   -76,   -76,   353,   132,
     134,   129,   140,   -76,   -76,   246,   -76,    35,    78,    78,
     132,   141,   142,   114,    30,   -76,   151,   -76,    78,   152,
     128,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    14,     0,     0,     3,     5,     0,     0,     0,     0,
       0,     1,     4,     6,     0,     0,     0,     0,    14,    15,
      13,    17,    18,    19,    20,    21,     9,     0,     0,     0,
       0,     0,     7,     0,     0,    16,    44,    43,    45,    46,
       0,     0,     0,    42,     0,     0,    25,    10,     0,     0,
       0,     0,     0,    32,    37,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,    16,     0,     0,     0,     0,     0,    63,
       0,     0,    60,    62,     0,    14,    55,    56,    57,    58,
       0,    52,     0,     0,     0,    51,    53,    23,    24,     0,
      33,    38,    39,    34,    41,    40,    27,    26,    28,    29,
      30,    35,    36,    31,     0,    69,     0,    70,     0,     0,
      64,    11,    61,     0,    50,     0,    48,    49,     0,    47,
       0,     0,     0,    65,    12,     0,    54,    50,     0,     0,
      59,     0,     0,     0,     0,    68,     0,    66,     0,     0,
       0,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,   -76,   -76,    15,   -44,   -76,    -8,   -76,   -14,    -9,
     -49,   -76,    43,   -76,   -75,    90,   -76
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    79,    17,     6,     7,    43,    44,    80,
      46,    94,    95,    96,    81,    82,    83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    19,    93,     1,    72,    30,   114,    90,    51,   123,
      10,     8,    15,    32,    33,     5,    30,    11,    13,    12,
      50,    45,    47,    16,    21,    22,    23,    24,    25,    14,
      18,    52,    53,    54,    20,    29,    48,    92,   -14,     9,
      27,     9,     2,    91,     9,     9,    98,    99,    31,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   141,   142,    93,   116,    27,   118,   119,
     130,   146,    51,   149,   147,    30,    30,    49,    84,    28,
      34,    73,    36,    37,    38,    39,    21,    22,    23,    24,
      25,    40,    55,    64,    65,    66,    67,    68,    69,    70,
      92,    71,    56,    15,    74,    75,    91,    76,    41,   115,
     117,   121,   124,   126,    92,    42,   135,    77,   125,   127,
       2,    78,    35,    36,    37,    38,    39,    21,    22,    23,
      24,    25,    40,    85,    86,    87,    88,    89,    21,    22,
      23,    24,    25,   128,    16,   134,   138,   -22,   137,    41,
      58,    59,    60,    61,    62,    63,    42,   139,   145,   143,
     144,    64,    65,    66,    67,    68,    69,    70,   148,    71,
     150,   136,   151,   122,     0,   120,    58,    59,    60,    61,
      62,    63,     0,     0,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,     0,    71,     0,    97,     0,     0,
       0,   133,    58,    59,    60,    61,    62,    63,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      57,    71,     0,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,   129,    71,     0,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,   140,    71,     0,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,     0,    71,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,     0,    71,     0,   132,    58,    59,    60,
      61,    62,    63,     0,     0,     0,   131,     0,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    85,    86,    87,
      88,    89,    21,    22,    23,    24,    25,    86,    87,    88,
      89,    21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      14,     9,    51,     3,    48,    15,    13,    51,    13,    84,
       3,    13,     3,    27,    28,     0,    15,     0,    44,     4,
      34,    30,    31,    14,     8,     9,    10,    11,    12,    45,
       3,    40,    41,    42,     3,    14,    46,    51,    45,    46,
      45,    46,    42,    51,    46,    46,    55,    56,    47,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,   138,   139,   114,    75,    45,    77,    78,
     114,    41,    13,   148,    44,    15,    15,    17,    17,    45,
      45,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    47,    30,    31,    32,    33,    34,    35,    36,
     114,    38,    15,     3,    26,    27,   114,    29,    30,    44,
      44,    18,    14,    14,   128,    37,   125,    39,    15,    14,
      42,    43,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    46,    14,    18,    17,    15,    14,    30,
      19,    20,    21,    22,    23,    24,    37,    17,    44,    18,
      18,    30,    31,    32,    33,    34,    35,    36,    17,    38,
      18,   128,    44,    83,    -1,    44,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    -1,    14,    -1,    -1,
      -1,    44,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      16,    38,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    16,    38,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    16,    38,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    40,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     4,     5,     6,
       7,     8,     9,    10,    11,    12
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    42,    49,    50,    51,    53,    54,    13,    46,
       3,     0,    51,    44,    45,     3,    14,    52,     3,    54,
       3,     8,     9,    10,    11,    12,    56,    45,    45,    14,
      15,    47,    56,    56,    45,     3,     4,     5,     6,     7,
      13,    30,    37,    55,    56,    57,    58,    57,    46,    17,
      56,    13,    57,    57,    57,    47,    15,    16,    19,    20,
      21,    22,    23,    24,    30,    31,    32,    33,    34,    35,
      36,    38,    52,     3,    26,    27,    29,    39,    43,    51,
      57,    62,    63,    64,    17,     3,     4,     5,     6,     7,
      52,    54,    56,    58,    59,    60,    61,    14,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    13,    44,    57,    44,    57,    57,
      44,    18,    63,    62,    14,    15,    14,    14,    46,    16,
      52,    28,    40,    44,    18,    57,    60,    14,    17,    17,
      16,    62,    62,    18,    18,    44,    41,    44,    17,    62,
      18,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    53,    53,    53,    54,    54,    55,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      62,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     2,     3,     5,     3,
       5,     8,     9,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     1,     1,     1,     3,     1,     1,     1,     1,     4,
       1,     2,     1,     1,     2,     3,     7,    11,     7,     2,
       2
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
        case 3:
#line 97 "ya.y" /* yacc.c:1646  */
    {prints123();printf("Producao: program\n");}
#line 1486 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 101 "ya.y" /* yacc.c:1646  */
    {(yyval.decls) = new_decls((yyvsp[0].decl), (yyvsp[-1].decls));printf("Producao: decls-> decls decl\n");}
#line 1492 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 102 "ya.y" /* yacc.c:1646  */
    {(yyval.decls) = new_decls((yyvsp[0].decl), NULL);printf("Producao: decls-> decl\n");}
#line 1498 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "ya.y" /* yacc.c:1646  */
    {(yyval.decl) = new_decl((yyvsp[-1].decl1));printf("Producao: decl-> decl1\n");}
#line 1504 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 112 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.idstype) = new_idstype((yyvsp[-2].string),(yyvsp[0].type),NULL, IDSTYPE_1);
                    printf("Producao: idstype -> id:tipo\n");
                    insertId((yyvsp[-2].string), (yyvsp[0].type));
                }
#line 1514 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 120 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.idstype) = new_idstype((yyvsp[-4].string),(yyvsp[-2].type),(yyvsp[0].idstype), IDSTYPE_2);
                    printf("Producao: idstype -> i:tipo, more\n");
                    insertId((yyvsp[-4].string), (yyvsp[-2].type));
                }
#line 1524 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 131 "ya.y" /* yacc.c:1646  */
    { 
                    (yyval.decl1) = new_decl1(NULL,NULL, (yyvsp[-2].ids),NULL, (yyvsp[0].type), NULL, NULL, DECL_1);
                    printf("Producao:decl1 -> i,j:tipo\n");
                    insertIds((yyvsp[-2].ids), (yyvsp[0].type));
                }
#line 1534 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 140 "ya.y" /* yacc.c:1646  */
    { 
                    (yyval.decl1) = new_decl1(NULL, NULL, (yyvsp[-4].ids), NULL, (yyvsp[-2].type), (yyvsp[0].exp), NULL, DECL_2);
                    printf("Producao:decl1 -> i,j:tipo = exp\n");
                    insertIds((yyvsp[-4].ids), (yyvsp[-2].type));
                }
#line 1544 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 148 "ya.y" /* yacc.c:1646  */
    { 
                    (yyval.decl1) = new_decl1((yyvsp[-7].string),NULL, NULL, NULL, (yyvsp[-3].type), NULL, (yyvsp[-1].corpo), DECL_3);
                    printf("Producao:decl1 i(): tipo { corpo }\n");
                    insertId((yyvsp[-7].string), (yyvsp[-3].type));
                }
#line 1554 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 156 "ya.y" /* yacc.c:1646  */
    { 
                    (yyval.decl1) = new_decl1((yyvsp[-8].string),NULL, NULL, (yyvsp[-6].idstype), (yyvsp[-3].type), NULL, (yyvsp[-1].corpo), DECL_4);
                    printf("Producao:decl1 i(i:tipo): tipo { corpo }\n");
                    insertId((yyvsp[-8].string), (yyvsp[-3].type));
                }
#line 1564 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 163 "ya.y" /* yacc.c:1646  */
    { 
                    (yyval.decl1) = new_decl1((yyvsp[-1].string), (yyvsp[0].string), NULL,  NULL, NULL,NULL, NULL, DECL_5);
                    printf("Producao:decl1 define id id\n");
                }
#line 1573 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 172 "ya.y" /* yacc.c:1646  */
    {
                (yyval.ids)= new_ids((yyvsp[0].string), NULL, IDS_1);
                printf("Producao:ids ->id\n");
            }
#line 1582 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 178 "ya.y" /* yacc.c:1646  */
    {
                (yyval.ids)= new_ids((yyvsp[-2].string), (yyvsp[0].ids), IDS_2);
                printf("Producao:ids   id, ids\n");
            }
#line 1591 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 187 "ya.y" /* yacc.c:1646  */
    {
                (yyval.id) = new_id((yyvsp[0].string));
                printf("Producao:id   id\n");
            }
#line 1600 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 195 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.type) = new_type(NULL, 0, INT_);
                    printf("Producao:type  int\n");
                }
#line 1609 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.type) = new_type(NULL, 0, FLOAT_);
                    printf("Producao:type  float\n");
                }
#line 1618 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 209 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.type) = new_type(NULL, 0, BOOL_);
                    printf("Producao:type  bool\n");
                }
#line 1627 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 216 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.type) = new_type(NULL, 0, VOID_);
                    printf("Producao:type  void\n");
                }
#line 1636 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 223 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.type) = new_type(NULL, 0, STRING_);
                    printf("Producao:type  string\n");
                }
#line 1645 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 230 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.type) = new_type((yyvsp[-3].type), (yyvsp[-1].exp), ARRAY_);
                    printf("Producao:type  array\n");
                }
#line 1654 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 241 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.exp) = new_exp((yyvsp[-1].exp), NULL, NULL,NULL,NULL,0,0,NULL,NULL, EXP_PAR);
                    printf("Producao:exp -> (exp)\n");
                }
#line 1663 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.exp) = new_exp((yyvsp[0].exp),NULL,(yyvsp[-2].id),NULL,NULL, 0,0,NULL,NULL, EXP_ASSIGN);
                    printf("Producao:exp -> id=exp\n");
                    lookid((yyvsp[-2].id));

                }
#line 1674 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 258 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.exp) = new_exp(NULL, NULL, NULL,(yyvsp[0].funcao),NULL,0,0,NULL,NULL, EXP_FUNC);
                    printf("Producao:exp -> funcao\n");
                }
#line 1683 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 265 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_ADD);
                        printf("Producao:exp -> exp add exp\n"); 
                    }
#line 1692 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 272 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_SUB);
                        printf("Producao:exp -> exp sub exp\n");  
                    }
#line 1701 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 279 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_MUL);
                        printf("Producao:exp ->  exp mul exp\n");  
                    }
#line 1710 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 286 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_DIV);
                        printf("Producao:exp ->  exp div exp\n");  
                    }
#line 1719 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 293 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_MOD);
                        printf("Producao:exp ->  exp mod exp\n");  
                    }
#line 1728 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 300 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_EXPOENT);
                        printf("Producao:exp -> exp expoente exp\n");  
                    }
#line 1737 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 309 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[0].exp), NULL, NULL,NULL,NULL,0,0,NULL,NULL, EXP_NEG);
                        printf("Producao:exp -> negativo exp\n");  
                    }
#line 1746 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 320 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_EQUAL);
                        printf("Producao:exp-> exp equal exp\n");  
                    }
#line 1755 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 327 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_DIFF);
                        printf("Producao:exp -> exp diff exp\n");   
                    }
#line 1764 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 334 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_AND);
                        printf("Producao:exp -> exp and exp\n");   
                    }
#line 1773 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 341 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_OR);
                        printf("Producao:exp -> exp or exp\n");   
                    }
#line 1782 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 348 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[0].exp), NULL, NULL,NULL,NULL,0,0,NULL,NULL, EXP_NOT);
                        printf("Producao:exp-> not exp\n");   
                    }
#line 1791 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 358 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_LESSOREQUAL);
                        printf("Producao:exp -> exp <= exp \n");   
                    }
#line 1800 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 365 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_LESS);
                        printf("Producao:exp -> exp < exp\n");    
                    }
#line 1809 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 372 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_GREATEROREQUAL);
                        printf("Producao:exp -> exp >= exp \n");   
                    }
#line 1818 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 379 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp((yyvsp[-2].exp), (yyvsp[0].exp), NULL,NULL,NULL,0,0,NULL,NULL, EXP_GREATER); 
                        printf("Producao:exp -> exp > exp\n");   
                    }
#line 1827 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 388 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.exp) = new_exp(NULL, NULL, (yyvsp[0].id),NULL,NULL,0,0,NULL,NULL, EXP_ID);
                    printf("Producao:exp -> id\n"); 
                    lookid((yyvsp[0].id));
                }
#line 1837 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 396 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp(NULL, NULL, NULL,NULL,NULL,0,0,(yyvsp[0].boleano),NULL, EXP_BOOL_LIT);
                        printf("Producao:exp -> boolliteral\n");  
                    }
#line 1846 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 402 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp(NULL, NULL, NULL,NULL,NULL,(yyvsp[0].inteiro),0,NULL,NULL, EXP_INT_LIT);
                        printf("Producao:exp -> intliteral\n"); 
                    }
#line 1855 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 409 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp(NULL, NULL, NULL,NULL,NULL,0,(yyvsp[0].floatt),NULL,NULL, EXP_FLOAT_LIT);
                        printf("Producao:exp -> floatliteral\n"); 
                    }
#line 1864 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 416 "ya.y" /* yacc.c:1646  */
    { 
                        (yyval.exp) = new_exp(NULL, NULL, NULL,NULL,NULL,0,0,NULL,(yyvsp[0].string), EXP_STRING_LIT);
                        printf("Producao:exp -> stringliteral\n");
                    }
#line 1873 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 422 "ya.y" /* yacc.c:1646  */
    {
                        (yyval.exp) = new_exp((yyvsp[-1].exp), NULL, NULL,NULL,(yyvsp[-3].type),0,0,NULL,NULL, EXP_ARRAY_LIT);
                        printf("Producao:exp -> array\n");
                    }
#line 1882 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 432 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.funcao) = new_funcao((yyvsp[-3].string), (yyvsp[-1].funcao),NULL,NULL, FUNC_FUNC);
                    printf("Producao:funcao  id(funcao)\n");
                }
#line 1891 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 439 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.funcao) = new_funcao((yyvsp[-3].string), NULL, (yyvsp[-1].mix),NULL, FUNC_MIX);
                    printf("Producao:funcao  id(mix)\n");
                }
#line 1900 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 445 "ya.y" /* yacc.c:1646  */
    {
                    (yyval.funcao) = new_funcao((yyvsp[-3].string), NULL, NULL, (yyvsp[-1].idstype), FUNC_IDSTYPE);
                    printf("Producao:funcao  id(mix)\n");
                }
#line 1909 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 457 "ya.y" /* yacc.c:1646  */
    {
                (yyval.mix) = new_mix((yyvsp[0].lits), NULL, LITS_);
                printf("Producao:mix  lits\n");
            }
#line 1918 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 464 "ya.y" /* yacc.c:1646  */
    {
                (yyval.mix) = new_mix(NULL, (yyvsp[0].ids), IDS_);
                printf("Producao:mix  ids\n");
            }
#line 1927 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 476 "ya.y" /* yacc.c:1646  */
    {
                (yyval.lits) = new_lits((yyvsp[0].lit), NULL, LIT_);
                printf("Producao:lits  lit\n");
            }
#line 1936 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 483 "ya.y" /* yacc.c:1646  */
    {
                (yyval.lits) = new_lits((yyvsp[-2].lit), (yyvsp[0].lits), LIT_LITS);
                printf("Producao:lits  lit,lits\n");
            }
#line 1945 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 493 "ya.y" /* yacc.c:1646  */
    {
                (yyval.lit) = new_lit(NULL, (yyvsp[0].inteiro), false, 0, "",NULL, INT_LITE);
                printf("Producao:lit  intliteral\n");
            }
#line 1954 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 500 "ya.y" /* yacc.c:1646  */
    {
                (yyval.lit) = new_lit(NULL, 0, (yyvsp[0].boleano), 0, "", NULL,BOOL_LITE);
                printf("Producao:lit  boolliteral\n");
            }
#line 1963 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 507 "ya.y" /* yacc.c:1646  */
    {
                (yyval.lit) = new_lit(NULL, 0, false,(yyvsp[0].floatt), "",NULL, FLOAT_LITE);
                printf("Producao:lit  floatliteral\n");
            }
#line 1972 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 514 "ya.y" /* yacc.c:1646  */
    {
                (yyval.lit) = new_lit(NULL, 0, false, 0, (yyvsp[0].string),NULL, STRING_LITE);
                printf("Producao:lit  stringliteral\n");
            }
#line 1981 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 521 "ya.y" /* yacc.c:1646  */
    {
                (yyval.lit) = new_lit((yyvsp[-3].type), 0, false, 0, "", (yyvsp[-1].exp), ARRAY_LITE);
                printf("Producao:lit  arrayliteral\n");
            }
#line 1990 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 530 "ya.y" /* yacc.c:1646  */
    { (yyval.corpo) = new_corpo((yyvsp[0].stats));
                        printf("Producao:corpo->  stats\n");}
#line 1997 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 536 "ya.y" /* yacc.c:1646  */
    {(yyval.stats) = new_stats((yyvsp[-1].stat), (yyvsp[0].stats), STAT_STATS);
                        printf("Producao:stats-> stat stats\n");}
#line 2004 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 539 "ya.y" /* yacc.c:1646  */
    {(yyval.stats) = new_stats((yyvsp[0].stat), NULL, STAT_);
                          printf("Producao:stats-> stat\n");}
#line 2011 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 547 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat((yyvsp[0].decl), NULL, NULL,NULL, STAT_DECL);
                printf("Producao:stat-> decl\n");
            }
#line 2020 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 553 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat(NULL, (yyvsp[-1].exp), NULL,NULL, STAT_EXP);
                printf("Producao:stat-> exp\n");
            }
#line 2029 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 559 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat(NULL, (yyvsp[-1].exp), NULL,NULL, STAT_RETURN);
                printf("Producao:stat-> return exp\n");
            }
#line 2038 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 565 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat(NULL,(yyvsp[-5].exp), (yyvsp[-2].corpo),NULL, STAT_IF);
                printf("Producao:stat-> if expbool then corpo\n");
            }
#line 2047 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 571 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat(NULL, (yyvsp[-9].exp), (yyvsp[-6].corpo),(yyvsp[-2].corpo), STAT_IF_ELSE);
                printf("Producao:stat-> if expbool then corpo else corpo\n");
            }
#line 2056 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 577 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat(NULL, (yyvsp[-5].exp), (yyvsp[-2].corpo),NULL, STAT_WHILE);
                printf("Producao:stat-> while expbool corpo\n");
            }
#line 2065 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 583 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat(NULL, NULL, NULL,NULL, STAT_BREAK);
                printf("Producao:stat-> break\n");
            }
#line 2074 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 589 "ya.y" /* yacc.c:1646  */
    {
                (yyval.stat) = new_stat(NULL, NULL, NULL,NULL, STAT_NEXT);
                printf("Producao:stat-> next\n");
            }
#line 2083 "parser.c" /* yacc.c:1646  */
    break;


#line 2087 "parser.c" /* yacc.c:1646  */
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
#line 597 "ya.y" /* yacc.c:1906  */




struct valor{

    char *nomeId;
    enum type_kind tipo;

};

struct valor TABELA[256];  /* 256 vars seems enough... */
int CURR = 0;




void insertId(char *id, Types *type){



    TABELA[CURR].nomeId = strdup(id);

    TABELA[CURR].tipo = type->x;

    CURR++;


}

void insertid(Id *id, Types *type){

    char *nomeId = id->nome;

    TABELA[CURR].nomeId = strdup(nomeId);

    TABELA[CURR].tipo = type->x;

    CURR++;


}


void insertIds(Ids *ids, Types *type){

    Ids *novo = ids;
    while(novo!= NULL){
        insertId(novo->nome, type);
        if(novo->ids != NULL){
            novo = novo->ids;
        }
        else{
            break;
        }
        
    }
}



enum type_kind look(char *id){

    int i;
    for(i = 0; i < CURR; i++){
        if (strcmp(id, TABELA[i].nomeId) == 0) {
            return TABELA[i].tipo;
        }
    }  
    return -1 ; 
   
}



enum type_kind lookid(Id *id){

    char *nome = id->nome;
    int i;
    for(i = 0; i < CURR; i++){
        if (strcmp(nome, TABELA[i].nomeId) == 0) {
            return TABELA[i].tipo;
        }
    }  
    return -1 ; 
   
}




void prints123(){
    printf("\n\nSYMBOL TABLE:\n\n");
    int i;
    for (i=0; i< CURR; i++){
        printf("%10s  ", TABELA[i].nomeId);
        if(TABELA[i].tipo == 0){
            printf("INT\n");
        }
        else if(TABELA[i].tipo == 1){
            printf("FLOAT\n");
        }
        else if(TABELA[i].tipo == 2){
            printf("STRING\n");
        }
        else if(TABELA[i].tipo == 3){
            printf("BOOL\n");
        }
        else if(TABELA[i].tipo == 4){
            printf("ARRAY\n");
        }
        else if(TABELA[i].tipo == 5){
            printf("VOID\n");
        }
    }
    printf("--------------------\n\n");

}


void yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

int main (void)
{

  return yyparse();
}
