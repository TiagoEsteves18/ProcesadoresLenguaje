/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Definicion de la funcion yyerror
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

#line 83 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_letraTK = 3,                    /* letraTK  */
  YYSYMBOL_cifraTK = 4,                    /* cifraTK  */
  YYSYMBOL_identificadorTK = 5,            /* identificadorTK  */
  YYSYMBOL_comentarioTK = 6,               /* comentarioTK  */
  YYSYMBOL_comentarioPreTK = 7,            /* comentarioPreTK  */
  YYSYMBOL_comentarioPostTK = 8,           /* comentarioPostTK  */
  YYSYMBOL_literalEnteroTK = 9,            /* literalEnteroTK  */
  YYSYMBOL_literalRealTK = 10,             /* literalRealTK  */
  YYSYMBOL_literalCaracterTK = 11,         /* literalCaracterTK  */
  YYSYMBOL_literalCadenaTK = 12,           /* literalCadenaTK  */
  YYSYMBOL_literalBooleanoTK = 13,         /* literalBooleanoTK  */
  YYSYMBOL_algoritmoTK = 14,               /* algoritmoTK  */
  YYSYMBOL_falgoritmoTK = 15,              /* falgoritmoTK  */
  YYSYMBOL_siTK = 16,                      /* siTK  */
  YYSYMBOL_fsiTK = 17,                     /* fsiTK  */
  YYSYMBOL_verdaderoTK = 18,               /* verdaderoTK  */
  YYSYMBOL_falsoTK = 19,                   /* falsoTK  */
  YYSYMBOL_entradaTK = 20,                 /* entradaTK  */
  YYSYMBOL_salidaTK = 21,                  /* salidaTK  */
  YYSYMBOL_enteroTK = 22,                  /* enteroTK  */
  YYSYMBOL_inicioVariablesTK = 23,         /* inicioVariablesTK  */
  YYSYMBOL_finVariablesTK = 24,            /* finVariablesTK  */
  YYSYMBOL_inicioConstantesTK = 25,        /* inicioConstantesTK  */
  YYSYMBOL_finalConstantesTK = 26,         /* finalConstantesTK  */
  YYSYMBOL_inicioMientrasTK = 27,          /* inicioMientrasTK  */
  YYSYMBOL_finMientrasTK = 28,             /* finMientrasTK  */
  YYSYMBOL_accionTK = 29,                  /* accionTK  */
  YYSYMBOL_faccionTK = 30,                 /* faccionTK  */
  YYSYMBOL_funcionTK = 31,                 /* funcionTK  */
  YYSYMBOL_ffuncionTK = 32,                /* ffuncionTK  */
  YYSYMBOL_devTK = 33,                     /* devTK  */
  YYSYMBOL_entradaSalidaTK = 34,           /* entradaSalidaTK  */
  YYSYMBOL_inicioTipoTK = 35,              /* inicioTipoTK  */
  YYSYMBOL_finTipoTK = 36,                 /* finTipoTK  */
  YYSYMBOL_tuplaTK = 37,                   /* tuplaTK  */
  YYSYMBOL_ftuplaTK = 38,                  /* ftuplaTK  */
  YYSYMBOL_tablaTK = 39,                   /* tablaTK  */
  YYSYMBOL_deTK = 40,                      /* deTK  */
  YYSYMBOL_refTK = 41,                     /* refTK  */
  YYSYMBOL_realTK = 42,                    /* realTK  */
  YYSYMBOL_booleanoTK = 43,                /* booleanoTK  */
  YYSYMBOL_caracterTK = 44,                /* caracterTK  */
  YYSYMBOL_cadenaTK = 45,                  /* cadenaTK  */
  YYSYMBOL_paraTK = 46,                    /* paraTK  */
  YYSYMBOL_fparaTK = 47,                   /* fparaTK  */
  YYSYMBOL_hastaTK = 48,                   /* hastaTK  */
  YYSYMBOL_hacerTK = 49,                   /* hacerTK  */
  YYSYMBOL_continuarTK = 50,               /* continuarTK  */
  YYSYMBOL_divEnteraTK = 51,               /* divEnteraTK  */
  YYSYMBOL_modTK = 52,                     /* modTK  */
  YYSYMBOL_yTK = 53,                       /* yTK  */
  YYSYMBOL_oTK = 54,                       /* oTK  */
  YYSYMBOL_noTK = 55,                      /* noTK  */
  YYSYMBOL_asignacionTK = 56,              /* asignacionTK  */
  YYSYMBOL_entoncesTK = 57,                /* entoncesTK  */
  YYSYMBOL_menorIgualTK = 58,              /* menorIgualTK  */
  YYSYMBOL_mayorIgualTK = 59,              /* mayorIgualTK  */
  YYSYMBOL_distintoTK = 60,                /* distintoTK  */
  YYSYMBOL_igualTK = 61,                   /* igualTK  */
  YYSYMBOL_menorTK = 62,                   /* menorTK  */
  YYSYMBOL_mayorTK = 63,                   /* mayorTK  */
  YYSYMBOL_masTK = 64,                     /* masTK  */
  YYSYMBOL_menosTK = 65,                   /* menosTK  */
  YYSYMBOL_porTK = 66,                     /* porTK  */
  YYSYMBOL_divisionTK = 67,                /* divisionTK  */
  YYSYMBOL_puntoYComaTK = 68,              /* puntoYComaTK  */
  YYSYMBOL_comaTK = 69,                    /* comaTK  */
  YYSYMBOL_puntoTK = 70,                   /* puntoTK  */
  YYSYMBOL_dosPuntosTK = 71,               /* dosPuntosTK  */
  YYSYMBOL_parentesisAbreTK = 72,          /* parentesisAbreTK  */
  YYSYMBOL_parentesisCierraTK = 73,        /* parentesisCierraTK  */
  YYSYMBOL_corcheteAbreTK = 74,            /* corcheteAbreTK  */
  YYSYMBOL_corcheteCierraTK = 75,          /* corcheteCierraTK  */
  YYSYMBOL_dobleComillaTK = 76,            /* dobleComillaTK  */
  YYSYMBOL_comillaSimpleTK = 77,           /* comillaSimpleTK  */
  YYSYMBOL_subrangoTK = 78,                /* subrangoTK  */
  YYSYMBOL_sinoSiTK = 79,                  /* sinoSiTK  */
  YYSYMBOL_UMENOS = 80,                    /* UMENOS  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 82,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 83,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 84,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 85,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 86,                  /* decl_a_f  */
  YYSYMBOL_bloque = 87,                    /* bloque  */
  YYSYMBOL_declaraciones = 88,             /* declaraciones  */
  YYSYMBOL_declaracion_tipo = 89,          /* declaracion_tipo  */
  YYSYMBOL_declaracion_const = 90,         /* declaracion_const  */
  YYSYMBOL_declaracion_var = 91,           /* declaracion_var  */
  YYSYMBOL_lista_d_tipo = 92,              /* lista_d_tipo  */
  YYSYMBOL_literal = 93,                   /* literal  */
  YYSYMBOL_tipo_base = 94,                 /* tipo_base  */
  YYSYMBOL_d_tipo = 95,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 96,               /* expresion_t  */
  YYSYMBOL_lista_campos = 97,              /* lista_campos  */
  YYSYMBOL_lista_d_cte = 98,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 99,               /* lista_d_var  */
  YYSYMBOL_lista_id = 100,                 /* lista_id  */
  YYSYMBOL_decl_ent_sal = 101,             /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 102,                 /* decl_ent  */
  YYSYMBOL_decl_sal = 103,                 /* decl_sal  */
  YYSYMBOL_expresion = 104,                /* expresion  */
  YYSYMBOL_operando = 105,                 /* operando  */
  YYSYMBOL_instrucciones = 106,            /* instrucciones  */
  YYSYMBOL_instruccion = 107,              /* instruccion  */
  YYSYMBOL_asignacion = 108,               /* asignacion  */
  YYSYMBOL_alternativa = 109,              /* alternativa  */
  YYSYMBOL_lista_opciones = 110,           /* lista_opciones  */
  YYSYMBOL_iteracion = 111,                /* iteracion  */
  YYSYMBOL_it_cota_exp = 112,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 113,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 114,                 /* accion_d  */
  YYSYMBOL_funcion_d = 115,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 116,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 117,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 118,               /* d_par_form  */
  YYSYMBOL_d_p_form = 119,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 120,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 121,               /* funcion_ll  */
  YYSYMBOL_l_ll = 122                      /* l_ll  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   113,   113,   116,   119,   123,   126,   129,   134,   137,
     140,   144,   148,   151,   154,   157,   162,   165,   168,   173,
     176,   182,   185,   188,   191,   194,   200,   203,   206,   209,
     212,   217,   220,   223,   226,   229,   232,   238,   244,   247,
     253,   256,   262,   265,   271,   274,   280,   283,   286,   291,
     294,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   327,   330,   333,   336,
     342,   345,   351,   354,   357,   360,   363,   369,   375,   381,
     384,   390,   393,   399,   405,   412,   418,   424,   430,   436,
     439,   445,   448,   451,   457,   463,   469,   472
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "letraTK", "cifraTK",
  "identificadorTK", "comentarioTK", "comentarioPreTK", "comentarioPostTK",
  "literalEnteroTK", "literalRealTK", "literalCaracterTK",
  "literalCadenaTK", "literalBooleanoTK", "algoritmoTK", "falgoritmoTK",
  "siTK", "fsiTK", "verdaderoTK", "falsoTK", "entradaTK", "salidaTK",
  "enteroTK", "inicioVariablesTK", "finVariablesTK", "inicioConstantesTK",
  "finalConstantesTK", "inicioMientrasTK", "finMientrasTK", "accionTK",
  "faccionTK", "funcionTK", "ffuncionTK", "devTK", "entradaSalidaTK",
  "inicioTipoTK", "finTipoTK", "tuplaTK", "ftuplaTK", "tablaTK", "deTK",
  "refTK", "realTK", "booleanoTK", "caracterTK", "cadenaTK", "paraTK",
  "fparaTK", "hastaTK", "hacerTK", "continuarTK", "divEnteraTK", "modTK",
  "yTK", "oTK", "noTK", "asignacionTK", "entoncesTK", "menorIgualTK",
  "mayorIgualTK", "distintoTK", "igualTK", "menorTK", "mayorTK", "masTK",
  "menosTK", "porTK", "divisionTK", "puntoYComaTK", "comaTK", "puntoTK",
  "dosPuntosTK", "parentesisAbreTK", "parentesisCierraTK",
  "corcheteAbreTK", "corcheteCierraTK", "dobleComillaTK",
  "comillaSimpleTK", "subrangoTK", "sinoSiTK", "UMENOS", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "bloque", "declaraciones", "declaracion_tipo",
  "declaracion_const", "declaracion_var", "lista_d_tipo", "literal",
  "tipo_base", "d_tipo", "expresion_t", "lista_campos", "lista_d_cte",
  "lista_d_var", "lista_id", "decl_ent_sal", "decl_ent", "decl_sal",
  "expresion", "operando", "instrucciones", "instruccion", "asignacion",
  "alternativa", "lista_opciones", "iteracion", "it_cota_exp",
  "it_cota_fija", "accion_d", "funcion_d", "a_cabecera", "f_cabecera",
  "d_par_form", "d_p_form", "accion_ll", "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-34)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    37,    53,     5,  -119,    -7,    81,    83,     6,     3,
      -7,    -7,    28,    64,    30,    77,   109,   102,   108,    11,
       6,     6,     6,   113,   114,    35,     3,     3,  -119,  -119,
      99,    52,   136,    54,    56,    97,    55,    59,  -119,    66,
      10,    10,   123,  -119,   -31,  -119,    62,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,    67,     6,    71,     6,
     109,   109,   124,   121,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,    76,  -119,   -35,  -119,  -119,  -119,  -119,  -119,
    -119,   145,    96,   136,  -119,  -119,  -119,  -119,    10,    10,
      10,    10,  -119,    89,    93,   308,   -30,  -119,  -119,   109,
     106,   136,  -119,    10,   110,   274,   221,   127,  -119,    10,
     180,    10,    11,    -8,   154,   109,   153,  -119,  -119,  -119,
    -119,    81,    10,   116,   150,    10,  -119,   342,  -119,  -119,
     179,    83,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,  -119,  -119,   122,
     238,   119,    11,    11,    10,   308,  -119,   101,  -119,   109,
     109,   109,   120,   128,  -119,   125,    10,  -119,   126,   136,
    -119,   111,  -119,  -119,  -119,  -119,  -119,   342,   325,   359,
     359,   359,   359,   359,   359,    -4,    -4,  -119,  -119,   109,
      10,  -119,   118,   167,   202,  -119,   131,   132,   133,   137,
      -8,   173,   162,  -119,   139,    10,  -119,  -119,    10,   192,
    -119,    10,   136,   136,   136,  -119,  -119,   136,  -119,   145,
     135,   291,  -119,   257,  -119,  -119,  -119,   149,  -119,   178,
      11,    11,  -119,   136,   118,   172,  -119,  -119,  -119
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    41,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    43,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    45,     0,     0,     0,     4,    76,
       0,     0,     0,    82,     0,    11,    81,    83,    84,    85,
      92,    91,    86,    12,    13,    14,     0,    15,     0,    15,
      43,    43,     0,    46,    48,     8,     9,    23,    24,    22,
      21,    25,     0,    17,    76,    70,    71,    72,    73,    74,
      26,    39,     0,     0,    27,    28,    29,    30,     0,     0,
       0,     0,    36,     0,     0,    37,    69,    75,    16,     0,
       0,     0,     2,     0,    76,     0,     0,     0,    79,     0,
       0,     0,     0,   100,     0,    43,     0,    49,    50,     3,
      47,    41,     0,     0,     0,     0,    35,    61,    58,    57,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    18,     0,
     107,     0,     0,     0,     0,    87,    77,     0,    80,     0,
       0,     0,     0,     0,    95,     0,     0,    40,     0,     0,
      31,     0,    68,    19,    34,    56,    55,    59,    60,    64,
      65,    67,    66,    62,    63,    51,    52,    53,    54,    43,
       0,   104,    90,     0,     0,    78,     0,     0,     0,     0,
     100,     0,     0,   105,     0,     0,    42,   106,     0,     0,
      93,     0,     0,     0,     0,    97,    99,     0,    96,    39,
       0,     0,    88,     0,   101,   102,   103,     0,    38,     0,
       0,     0,    98,     0,    90,     0,    32,    89,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,    70,    58,    12,    46,    25,    49,
    -119,   103,  -119,  -119,   -77,  -118,    16,   115,   -57,   -82,
    -119,  -119,   184,   -39,   -19,  -107,  -119,  -119,  -119,    14,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,    51,  -119,  -119,
    -119,  -114
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    72,    92,    93,    94,   124,    13,    35,    36,
      62,    63,    64,    95,    96,    45,    46,    47,    48,   209,
      49,    50,    51,    26,    27,    57,    59,   162,   163,    52,
      97,   151
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   105,   106,   117,   118,   158,   126,   171,   168,     1,
     108,   108,   159,   160,   174,   104,    39,   147,     6,    75,
      76,    77,    78,    79,   149,   109,   161,    40,     7,    16,
      10,     6,    23,   -33,    24,    10,    10,   122,    41,   110,
     110,     7,     3,   111,   111,   192,   193,   133,   134,   127,
     128,   129,   130,     4,    11,    60,    61,    42,   165,    11,
      11,    43,   145,   146,   150,    88,    53,    54,    55,   114,
     155,   116,   157,     5,    89,    90,   207,   196,   197,   198,
      28,    29,    91,   150,    65,    66,    12,   220,    14,    30,
      31,    32,   204,    44,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,    67,    68,
      69,    70,    71,    33,    34,   194,    38,    37,    56,    58,
      73,   100,    98,   234,   235,    99,   101,   202,   107,   102,
     112,   119,   206,    44,    44,   224,   225,   226,   103,   113,
     227,    74,    61,   115,   121,    75,    76,    77,    78,    79,
     123,   150,   133,   134,   135,   136,   236,   131,    80,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   221,
     125,   132,   223,    81,   148,    82,   195,    83,    84,    85,
      86,    87,   122,   154,   164,   156,   166,   169,   170,   205,
     189,    88,   191,   199,   218,   210,   200,   208,   201,   203,
      89,    90,   212,   213,   214,   215,   217,   219,    91,   222,
     229,    44,    44,   133,   134,   135,   136,   232,   233,   238,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     133,   134,   135,   136,   173,   228,   167,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   120,   237,     0,
     211,   216,   172,   133,   134,   135,   136,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     153,     0,   133,   134,   135,   136,     0,     0,     0,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   133,
     134,   135,   136,     0,     0,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   231,   190,   133,   134,
     135,   136,     0,     0,     0,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   133,   134,   135,   136,     0,
       0,   152,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   133,   134,   135,   136,     0,     0,   230,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   133,
     134,   135,   136,     0,     0,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   133,   134,   135,     0,
       0,     0,     0,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   133,   134,     0,     0,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     133,   134,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   143,   144,   145,   146
};

static const yytype_int16 yycheck[] =
{
      19,    40,    41,    60,    61,   112,    83,   125,   122,    14,
      41,    41,    20,    21,   132,     5,     5,    99,    25,     9,
      10,    11,    12,    13,   101,    56,    34,    16,    35,    23,
       5,    25,    29,    68,    31,    10,    11,    72,    27,    70,
      70,    35,     5,    74,    74,   152,   153,    51,    52,    88,
      89,    90,    91,     0,     5,    20,    21,    46,   115,    10,
      11,    50,    66,    67,   103,    55,    20,    21,    22,    57,
     109,    59,   111,    68,    64,    65,   190,   159,   160,   161,
      10,    11,    72,   122,    26,    27,     5,   205,     5,    61,
      26,    61,   169,   112,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     9,    10,
      11,    12,    13,    36,     5,   154,     8,    15,     5,     5,
      68,    24,    68,   230,   231,    69,    71,   166,     5,    70,
      68,     7,   189,   152,   153,   212,   213,   214,    72,    72,
     217,     5,    21,    72,    68,     9,    10,    11,    12,    13,
       5,   190,    51,    52,    53,    54,   233,    68,    22,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   208,
      74,    78,   211,    37,    68,    39,    75,    41,    42,    43,
      44,    45,    72,    56,    30,     5,    33,    71,    38,    78,
      68,    55,    73,    73,    32,    28,    68,    79,    73,    73,
      64,    65,    71,    71,    71,    68,    33,    68,    72,    17,
      75,   230,   231,    51,    52,    53,    54,    68,    40,    47,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      51,    52,    53,    54,   131,   219,   121,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    63,   234,    -1,
      48,   200,    73,    51,    52,    53,    54,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    51,
      52,    53,    54,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    49,    69,    51,    52,
      53,    54,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    51,    52,    53,    54,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    51,    52,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    51,
      52,    53,    54,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    51,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      51,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    82,     5,     0,    68,    25,    35,    83,    85,
      89,    90,     5,    98,     5,    92,    23,    84,    87,    88,
      89,    90,    91,    29,    31,    86,   114,   115,    85,    85,
      61,    26,    61,    36,     5,    99,   100,    15,     8,     5,
      16,    27,    46,    50,   105,   106,   107,   108,   109,   111,
     112,   113,   120,    88,    88,    88,     5,   116,     5,   117,
      20,    21,   101,   102,   103,    86,    86,     9,    10,    11,
      12,    13,    93,    68,     5,     9,    10,    11,    12,    13,
      22,    37,    39,    41,    42,    43,    44,    45,    55,    64,
      65,    72,    94,    95,    96,   104,   105,   121,    68,    69,
      24,    71,    70,    72,     5,   104,   104,     5,    41,    56,
      70,    74,    68,    72,    87,    72,    87,    99,    99,     7,
     103,    68,    72,     5,    97,    74,    95,   104,   104,   104,
     104,    68,    78,    51,    52,    53,    54,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,   100,    68,    95,
     104,   122,    57,    49,    56,   104,     5,   104,   106,    20,
      21,    34,   118,   119,    30,    99,    33,    98,   122,    71,
      38,    96,    73,    92,    96,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,    68,
      69,    73,   106,   106,   104,    75,   100,   100,   100,    73,
      68,    73,   104,    73,    95,    78,    99,   122,    79,   110,
      28,    48,    71,    71,    71,    68,   118,    33,    32,    68,
      96,   104,    17,   104,    95,    95,    95,    95,    97,    75,
      57,    49,    68,    40,   106,   106,    95,   110,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    81,    82,    83,    84,    85,    85,    85,    86,    86,
      86,    87,    88,    88,    88,    88,    89,    90,    91,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   102,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   108,   109,   110,
     110,   111,   111,   112,   113,   114,   115,   116,   117,   118,
     118,   119,   119,   119,   120,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     8,     1,     3,     2,     1,     1,     5,     0,
       5,     0,     5,     0,     3,     1,     1,     2,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     6,     5,
       0,     1,     1,     5,     9,     4,     6,     5,     7,     3,
       0,     4,     4,     4,     4,     4,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* desc_algoritmo: algoritmoTK identificadorTK puntoYComaTK cabecera_alg bloque_alg falgoritmoTK puntoTK  */
#line 113 "parser.y"
                                                                                                      {
	printf("OK");
}
#line 1403 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal comentarioPreTK  */
#line 116 "parser.y"
                                                                  {

}
#line 1411 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque comentarioPostTK  */
#line 119 "parser.y"
                                    {

}
#line 1419 "parser.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 123 "parser.y"
                                       {

	}
#line 1427 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_const decl_globales  */
#line 126 "parser.y"
                                          {

	}
#line 1435 "parser.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 129 "parser.y"
                {

	}
#line 1443 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 134 "parser.y"
                                {

	}
#line 1451 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 137 "parser.y"
                                {

	}
#line 1459 "parser.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 140 "parser.y"
               {

	}
#line 1467 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 144 "parser.y"
                                        {

}
#line 1475 "parser.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 148 "parser.y"
                                                {

	}
#line 1483 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_const declaraciones  */
#line 151 "parser.y"
                                                {

	}
#line 1491 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 154 "parser.y"
                                                {

	}
#line 1499 "parser.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 157 "parser.y"
                {

	}
#line 1507 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: inicioTipoTK lista_d_tipo finTipoTK puntoYComaTK  */
#line 162 "parser.y"
                                                                        {

}
#line 1515 "parser.tab.c"
    break;

  case 17: /* declaracion_const: inicioConstantesTK lista_d_cte finalConstantesTK puntoYComaTK  */
#line 165 "parser.y"
                                                                                        {

}
#line 1523 "parser.tab.c"
    break;

  case 18: /* declaracion_var: inicioVariablesTK lista_d_var finVariablesTK puntoYComaTK  */
#line 168 "parser.y"
                                                                                {

}
#line 1531 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: identificadorTK igualTK d_tipo puntoYComaTK lista_d_tipo  */
#line 173 "parser.y"
                                                                {

	  }
#line 1539 "parser.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 176 "parser.y"
                {

	}
#line 1547 "parser.tab.c"
    break;

  case 21: /* literal: literalCadenaTK  */
#line 182 "parser.y"
                                {
		
	}
#line 1555 "parser.tab.c"
    break;

  case 22: /* literal: literalCaracterTK  */
#line 185 "parser.y"
                                {

	}
#line 1563 "parser.tab.c"
    break;

  case 23: /* literal: literalEnteroTK  */
#line 188 "parser.y"
                                {

	}
#line 1571 "parser.tab.c"
    break;

  case 24: /* literal: literalRealTK  */
#line 191 "parser.y"
                                {

	}
#line 1579 "parser.tab.c"
    break;

  case 25: /* literal: literalBooleanoTK  */
#line 194 "parser.y"
                                {

	}
#line 1587 "parser.tab.c"
    break;

  case 26: /* tipo_base: enteroTK  */
#line 200 "parser.y"
                 { 

	}
#line 1595 "parser.tab.c"
    break;

  case 27: /* tipo_base: realTK  */
#line 203 "parser.y"
                 { 

	}
#line 1603 "parser.tab.c"
    break;

  case 28: /* tipo_base: booleanoTK  */
#line 206 "parser.y"
                     { 

	}
#line 1611 "parser.tab.c"
    break;

  case 29: /* tipo_base: caracterTK  */
#line 209 "parser.y"
                     { 

	}
#line 1619 "parser.tab.c"
    break;

  case 30: /* tipo_base: cadenaTK  */
#line 212 "parser.y"
                   { 

	}
#line 1627 "parser.tab.c"
    break;

  case 31: /* d_tipo: tuplaTK lista_campos ftuplaTK  */
#line 217 "parser.y"
                                                        {

	  }
#line 1635 "parser.tab.c"
    break;

  case 32: /* d_tipo: tablaTK corcheteAbreTK expresion_t subrangoTK expresion_t corcheteCierraTK deTK d_tipo  */
#line 220 "parser.y"
                                                                                             {

	}
#line 1643 "parser.tab.c"
    break;

  case 33: /* d_tipo: identificadorTK  */
#line 223 "parser.y"
                                                                        {

	}
#line 1651 "parser.tab.c"
    break;

  case 34: /* d_tipo: expresion_t subrangoTK expresion_t  */
#line 226 "parser.y"
                                                {

	}
#line 1659 "parser.tab.c"
    break;

  case 35: /* d_tipo: refTK d_tipo  */
#line 229 "parser.y"
                                                                        {

	}
#line 1667 "parser.tab.c"
    break;

  case 36: /* d_tipo: tipo_base  */
#line 232 "parser.y"
                                                                                {

	}
#line 1675 "parser.tab.c"
    break;

  case 37: /* expresion_t: expresion  */
#line 238 "parser.y"
                                        {

	}
#line 1683 "parser.tab.c"
    break;

  case 38: /* lista_campos: identificadorTK dosPuntosTK d_tipo puntoYComaTK lista_campos  */
#line 244 "parser.y"
                                                                        {

	}
#line 1691 "parser.tab.c"
    break;

  case 39: /* lista_campos: %empty  */
#line 247 "parser.y"
                    {

	}
#line 1699 "parser.tab.c"
    break;

  case 40: /* lista_d_cte: identificadorTK igualTK literal puntoYComaTK lista_d_cte  */
#line 253 "parser.y"
                                                                        {

	}
#line 1707 "parser.tab.c"
    break;

  case 41: /* lista_d_cte: %empty  */
#line 256 "parser.y"
                        {

	}
#line 1715 "parser.tab.c"
    break;

  case 42: /* lista_d_var: lista_id dosPuntosTK d_tipo puntoYComaTK lista_d_var  */
#line 262 "parser.y"
                                                                {

	}
#line 1723 "parser.tab.c"
    break;

  case 43: /* lista_d_var: %empty  */
#line 265 "parser.y"
                        {

	}
#line 1731 "parser.tab.c"
    break;

  case 44: /* lista_id: identificadorTK comaTK lista_id  */
#line 271 "parser.y"
                                                {

	}
#line 1739 "parser.tab.c"
    break;

  case 45: /* lista_id: identificadorTK  */
#line 274 "parser.y"
                                                                {

	}
#line 1747 "parser.tab.c"
    break;

  case 46: /* decl_ent_sal: decl_ent  */
#line 280 "parser.y"
                                                {
		
	}
#line 1755 "parser.tab.c"
    break;

  case 47: /* decl_ent_sal: decl_ent decl_sal  */
#line 283 "parser.y"
                                        {

	}
#line 1763 "parser.tab.c"
    break;

  case 48: /* decl_ent_sal: decl_sal  */
#line 286 "parser.y"
                                                {

	}
#line 1771 "parser.tab.c"
    break;

  case 49: /* decl_ent: entradaTK lista_d_var  */
#line 291 "parser.y"
                                {

}
#line 1779 "parser.tab.c"
    break;

  case 50: /* decl_sal: salidaTK lista_d_var  */
#line 294 "parser.y"
                               {

}
#line 1787 "parser.tab.c"
    break;

  case 51: /* expresion: expresion masTK expresion  */
#line 299 "parser.y"
                                                                                { }
#line 1793 "parser.tab.c"
    break;

  case 52: /* expresion: expresion menosTK expresion  */
#line 300 "parser.y"
                                                                        { }
#line 1799 "parser.tab.c"
    break;

  case 53: /* expresion: expresion porTK expresion  */
#line 301 "parser.y"
                                                                                { }
#line 1805 "parser.tab.c"
    break;

  case 54: /* expresion: expresion divisionTK expresion  */
#line 302 "parser.y"
                                                                        { }
#line 1811 "parser.tab.c"
    break;

  case 55: /* expresion: expresion modTK expresion  */
#line 303 "parser.y"
                                                                                { }
#line 1817 "parser.tab.c"
    break;

  case 56: /* expresion: expresion divEnteraTK expresion  */
#line 304 "parser.y"
                                                                        { }
#line 1823 "parser.tab.c"
    break;

  case 57: /* expresion: menosTK expresion  */
#line 305 "parser.y"
                                                                        { }
#line 1829 "parser.tab.c"
    break;

  case 58: /* expresion: masTK expresion  */
#line 306 "parser.y"
                                                                        { }
#line 1835 "parser.tab.c"
    break;

  case 59: /* expresion: expresion yTK expresion  */
#line 307 "parser.y"
                                                                                { }
#line 1841 "parser.tab.c"
    break;

  case 60: /* expresion: expresion oTK expresion  */
#line 308 "parser.y"
                                                                                { }
#line 1847 "parser.tab.c"
    break;

  case 61: /* expresion: noTK expresion  */
#line 309 "parser.y"
                                                                                        { }
#line 1853 "parser.tab.c"
    break;

  case 62: /* expresion: expresion menorTK expresion  */
#line 310 "parser.y"
                                                                        { }
#line 1859 "parser.tab.c"
    break;

  case 63: /* expresion: expresion mayorTK expresion  */
#line 311 "parser.y"
                                                                        { }
#line 1865 "parser.tab.c"
    break;

  case 64: /* expresion: expresion menorIgualTK expresion  */
#line 312 "parser.y"
                                                                        { }
#line 1871 "parser.tab.c"
    break;

  case 65: /* expresion: expresion mayorIgualTK expresion  */
#line 313 "parser.y"
                                                                        { }
#line 1877 "parser.tab.c"
    break;

  case 66: /* expresion: expresion igualTK expresion  */
#line 314 "parser.y"
                                                                        { }
#line 1883 "parser.tab.c"
    break;

  case 67: /* expresion: expresion distintoTK expresion  */
#line 315 "parser.y"
                                                                        { }
#line 1889 "parser.tab.c"
    break;

  case 68: /* expresion: parentesisAbreTK expresion parentesisCierraTK  */
#line 316 "parser.y"
                                                        { }
#line 1895 "parser.tab.c"
    break;

  case 69: /* expresion: operando  */
#line 317 "parser.y"
                                                                                                { }
#line 1901 "parser.tab.c"
    break;

  case 70: /* expresion: literalEnteroTK  */
#line 318 "parser.y"
                                                                                        { }
#line 1907 "parser.tab.c"
    break;

  case 71: /* expresion: literalRealTK  */
#line 319 "parser.y"
                                                                                        { }
#line 1913 "parser.tab.c"
    break;

  case 72: /* expresion: literalCaracterTK  */
#line 320 "parser.y"
                                                                                        { }
#line 1919 "parser.tab.c"
    break;

  case 73: /* expresion: literalCadenaTK  */
#line 321 "parser.y"
                                                                                        { }
#line 1925 "parser.tab.c"
    break;

  case 74: /* expresion: literalBooleanoTK  */
#line 322 "parser.y"
                                                                                        { }
#line 1931 "parser.tab.c"
    break;

  case 75: /* expresion: funcion_ll  */
#line 323 "parser.y"
                                                                                        { }
#line 1937 "parser.tab.c"
    break;

  case 76: /* operando: identificadorTK  */
#line 327 "parser.y"
                                                                                                        {

	}
#line 1945 "parser.tab.c"
    break;

  case 77: /* operando: operando puntoTK identificadorTK  */
#line 330 "parser.y"
                                                                                        {

	}
#line 1953 "parser.tab.c"
    break;

  case 78: /* operando: operando corcheteAbreTK expresion corcheteCierraTK  */
#line 333 "parser.y"
                                                                {

	}
#line 1961 "parser.tab.c"
    break;

  case 79: /* operando: operando refTK  */
#line 336 "parser.y"
                                                                                                        {

	}
#line 1969 "parser.tab.c"
    break;

  case 80: /* instrucciones: instruccion puntoYComaTK instrucciones  */
#line 342 "parser.y"
                                                {

	}
#line 1977 "parser.tab.c"
    break;

  case 81: /* instrucciones: instruccion  */
#line 345 "parser.y"
                                                                        {

	}
#line 1985 "parser.tab.c"
    break;

  case 82: /* instruccion: continuarTK  */
#line 351 "parser.y"
                                {

	}
#line 1993 "parser.tab.c"
    break;

  case 83: /* instruccion: asignacion  */
#line 354 "parser.y"
                        {

	}
#line 2001 "parser.tab.c"
    break;

  case 84: /* instruccion: alternativa  */
#line 357 "parser.y"
                        {

	}
#line 2009 "parser.tab.c"
    break;

  case 85: /* instruccion: iteracion  */
#line 360 "parser.y"
                                {

	}
#line 2017 "parser.tab.c"
    break;

  case 86: /* instruccion: accion_ll  */
#line 363 "parser.y"
                                {

	}
#line 2025 "parser.tab.c"
    break;

  case 87: /* asignacion: operando asignacionTK expresion  */
#line 369 "parser.y"
                                        {

	}
#line 2033 "parser.tab.c"
    break;

  case 88: /* alternativa: siTK expresion entoncesTK instrucciones lista_opciones fsiTK  */
#line 375 "parser.y"
                                                                        {

	}
#line 2041 "parser.tab.c"
    break;

  case 89: /* lista_opciones: sinoSiTK expresion entoncesTK instrucciones lista_opciones  */
#line 381 "parser.y"
                                                                        {

	}
#line 2049 "parser.tab.c"
    break;

  case 90: /* lista_opciones: %empty  */
#line 384 "parser.y"
                        {

	}
#line 2057 "parser.tab.c"
    break;

  case 91: /* iteracion: it_cota_fija  */
#line 390 "parser.y"
                        {

	}
#line 2065 "parser.tab.c"
    break;

  case 92: /* iteracion: it_cota_exp  */
#line 393 "parser.y"
                        {

	}
#line 2073 "parser.tab.c"
    break;

  case 93: /* it_cota_exp: inicioMientrasTK expresion hacerTK instrucciones finMientrasTK  */
#line 399 "parser.y"
                                                                        {

	}
#line 2081 "parser.tab.c"
    break;

  case 94: /* it_cota_fija: paraTK identificadorTK asignacionTK expresion hastaTK expresion hacerTK instrucciones fparaTK  */
#line 405 "parser.y"
                                                                                                        {

	}
#line 2089 "parser.tab.c"
    break;

  case 95: /* accion_d: accionTK a_cabecera bloque faccionTK  */
#line 412 "parser.y"
                                                {

	}
#line 2097 "parser.tab.c"
    break;

  case 96: /* funcion_d: funcionTK f_cabecera bloque devTK expresion ffuncionTK  */
#line 418 "parser.y"
                                                                {

	}
#line 2105 "parser.tab.c"
    break;

  case 97: /* a_cabecera: identificadorTK parentesisAbreTK d_par_form parentesisCierraTK puntoYComaTK  */
#line 424 "parser.y"
                                                                                        {

	}
#line 2113 "parser.tab.c"
    break;

  case 98: /* f_cabecera: identificadorTK parentesisAbreTK lista_d_var parentesisCierraTK devTK d_tipo puntoYComaTK  */
#line 430 "parser.y"
                                                                                                        {

	}
#line 2121 "parser.tab.c"
    break;

  case 99: /* d_par_form: d_p_form puntoYComaTK d_par_form  */
#line 436 "parser.y"
                                                {

	}
#line 2129 "parser.tab.c"
    break;

  case 100: /* d_par_form: %empty  */
#line 439 "parser.y"
                        {

	}
#line 2137 "parser.tab.c"
    break;

  case 101: /* d_p_form: entradaTK lista_id dosPuntosTK d_tipo  */
#line 445 "parser.y"
                                                                {

	}
#line 2145 "parser.tab.c"
    break;

  case 102: /* d_p_form: salidaTK lista_id dosPuntosTK d_tipo  */
#line 448 "parser.y"
                                                                {

	}
#line 2153 "parser.tab.c"
    break;

  case 103: /* d_p_form: entradaSalidaTK lista_id dosPuntosTK d_tipo  */
#line 451 "parser.y"
                                                        {

	}
#line 2161 "parser.tab.c"
    break;

  case 104: /* accion_ll: identificadorTK parentesisAbreTK l_ll parentesisCierraTK  */
#line 457 "parser.y"
                                                                        {

	}
#line 2169 "parser.tab.c"
    break;

  case 105: /* funcion_ll: identificadorTK parentesisAbreTK l_ll parentesisCierraTK  */
#line 463 "parser.y"
                                                                        {

	}
#line 2177 "parser.tab.c"
    break;

  case 106: /* l_ll: expresion comaTK l_ll  */
#line 469 "parser.y"
                                {

	}
#line 2185 "parser.tab.c"
    break;

  case 107: /* l_ll: expresion  */
#line 472 "parser.y"
                                                {

	}
#line 2193 "parser.tab.c"
    break;


#line 2197 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 477 "parser.y"

/* ====================================================
   3. CÓDIGO C ADICIONAL (Funciones auxiliares y main)
   ==================================================== */
int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	tc = nuevaTablaDeConstantes();
	yyparse();
	imprimeTablaDeConstantes(tc);
}

void yyerror(char * s){
	extern int yylineno;
	printf("\tBISON: ERROR en linea %d, %s\n", yylineno, s);
}
