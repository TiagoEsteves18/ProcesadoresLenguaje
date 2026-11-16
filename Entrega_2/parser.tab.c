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
	#include <stdlib.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "parser.tab.h"
	#include "tablaDeSimbolos.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Definicion de la funcion yyerror
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeSimbolos ts; //Es donde guardaremos los simbolos
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison


#line 86 "parser.tab.c"

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
  YYSYMBOL_SIGNAL = 80,                    /* SIGNAL  */
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
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
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
       0,   137,   137,   140,   143,   147,   150,   153,   158,   161,
     164,   168,   172,   175,   178,   181,   186,   189,   192,   197,
     200,   206,   209,   212,   215,   218,   224,   227,   230,   233,
     236,   241,   244,   247,   250,   253,   256,   262,   265,   271,
     274,   280,   283,   289,   292,   298,   300,   305,   308,   311,
     316,   319,   324,   327,   330,   333,   336,   339,   342,   345,
     348,   351,   354,   357,   360,   363,   366,   369,   372,   375,
     378,   381,   384,   387,   390,   396,   399,   402,   405,   411,
     414,   420,   423,   426,   429,   432,   438,   444,   450,   453,
     459,   462,   468,   474,   480,   486,   492,   498,   504,   507,
     513,   516,   519,   525,   531,   537,   540
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
  "comillaSimpleTK", "subrangoTK", "sinoSiTK", "SIGNAL", "$accept",
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

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-34)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,     5,    16,   -41,  -120,    42,    30,    36,    53,   -10,
      42,    42,    20,    40,    49,    85,    84,   111,   123,    18,
      53,    53,    53,   133,   135,    88,   -10,   -10,  -120,  -120,
     189,    80,    15,    81,    83,   126,    82,    86,  -120,    87,
     115,   115,   149,  -120,    -9,  -120,    90,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,    89,    53,    91,    53,
      84,    84,   153,   143,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,    97,  -120,   -26,  -120,  -120,  -120,  -120,  -120,
     163,    99,    15,  -120,  -120,  -120,  -120,   115,   115,   115,
     115,  -120,   103,    98,   302,   -34,  -120,  -120,    84,   107,
      15,  -120,   115,   105,   268,   215,   122,  -120,   115,   180,
     115,    18,    -3,   156,    84,   170,  -120,  -120,  -120,  -120,
      30,   115,   134,   166,   102,  -120,  -120,  -120,  -120,   173,
      36,   102,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,  -120,  -120,   142,   232,
     150,    18,    18,   115,   302,  -120,  -120,   155,  -120,    84,
      84,    84,   168,   160,  -120,   169,   115,  -120,   172,    15,
    -120,   151,  -120,  -120,  -120,  -120,  -120,   336,   319,    78,
      78,   353,   353,    78,    78,   -37,   -37,  -120,  -120,    84,
     115,  -120,   164,   223,   196,  -120,   181,   182,   194,   202,
      -3,   238,   130,  -120,   204,   102,  -120,  -120,   115,   270,
    -120,   115,    15,    15,    15,  -120,  -120,    15,  -120,   163,
     213,   285,  -120,   251,  -120,  -120,  -120,   221,  -120,   266,
      18,    18,  -120,    15,   164,   260,  -120,  -120,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    42,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    44,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    46,     0,     0,     0,     4,    75,
       0,     0,     0,    81,     0,    11,    80,    82,    83,    84,
      91,    90,    85,    12,    13,    14,     0,    15,     0,    15,
      44,    44,     0,    47,    49,     8,     9,    23,    24,    22,
      21,    25,     0,    17,    75,    58,    59,    38,    65,    26,
      40,     0,     0,    27,    28,    29,    30,     0,     0,     0,
       0,    36,     0,     0,    37,    67,    66,    16,     0,     0,
       0,     2,     0,    75,     0,     0,     0,    78,     0,     0,
       0,     0,    99,     0,    44,     0,    50,    51,     3,    48,
      42,     0,     0,     0,     0,    35,    64,    61,    60,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    18,     0,   106,
       0,     0,     0,     0,    86,    75,    76,     0,    79,     0,
       0,     0,     0,     0,    94,     0,     0,    41,     0,     0,
      31,     0,    74,    19,    34,    57,    56,    62,    63,    70,
      71,    73,    72,    68,    69,    52,    53,    54,    55,    44,
       0,   103,    89,     0,     0,    77,     0,     0,     0,     0,
      99,     0,     0,   104,     0,     0,    43,   105,     0,     0,
      92,     0,     0,     0,     0,    96,    98,     0,    95,    40,
       0,     0,    87,     0,   100,   101,   102,     0,    39,     0,
       0,     0,    97,     0,    89,     0,    32,    88,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,  -120,   106,    92,    -4,    63,    28,   136,
    -120,   178,  -120,  -120,   -78,  -119,   104,   220,   -52,   -87,
    -120,  -120,   261,   -39,   -19,  -108,  -120,  -120,  -120,   124,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,   141,  -120,  -120,
    -120,  -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    72,    91,    92,    93,   123,    13,    35,    36,
      62,    63,    64,    94,    95,    45,    46,    47,    48,   209,
      49,    50,    51,    26,    27,    57,    59,   162,   163,    52,
      96,   150
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   104,   105,   158,   125,   171,   168,   107,   116,   117,
       3,   146,   174,     1,   132,   133,     4,   159,   160,    23,
      74,    24,   148,    39,    75,    76,    77,     5,    78,   144,
     145,   161,   107,    10,    40,    12,   109,    79,    10,    10,
     110,    14,   -33,   192,   193,    41,   121,   108,   126,   127,
     128,   129,    80,   113,    81,   115,    82,    83,    84,    85,
      86,   109,   165,   149,    42,   110,    31,     6,    43,   154,
      87,   157,   196,   197,   198,   207,    16,     7,     6,    88,
      89,    30,   149,    53,    54,    55,   220,    90,     7,    34,
     156,   204,    44,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   103,    60,    61,
      32,    75,    76,    77,   194,    78,    28,    29,    65,    66,
     103,    33,   234,   235,    75,    76,    37,   202,    78,   132,
     133,    38,    44,    44,   224,   225,   226,   206,    56,   227,
      58,    11,   142,   143,   144,   145,    11,    11,    73,    97,
      99,   149,    98,   100,   106,   236,   101,    87,   111,   102,
     118,   112,   218,   114,    61,   120,    88,    89,   122,   221,
      87,   130,   223,   124,    90,   147,   131,   121,   153,    88,
      89,   132,   133,   134,   135,   155,   164,    90,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,    67,    68,
      69,    70,    71,   166,   170,   169,   132,   133,   134,   135,
     189,    44,    44,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   191,   132,   133,   134,   135,   200,   205,
     195,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   199,   201,   208,   211,   203,   172,   132,   133,   134,
     135,   210,   212,   213,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   152,   214,   132,   133,   134,   135,
     215,   217,   219,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   132,   133,   134,   135,   222,   229,   232,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     231,   190,   132,   133,   134,   135,   233,   238,   173,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   132,
     133,   134,   135,   228,   119,   151,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   132,   133,   134,   135,
     167,   216,   230,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   132,   133,   134,   135,     0,   237,     0,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     132,   133,   134,     0,     0,     0,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   132,   133,     0,
       0,     0,     0,     0,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   132,   133,     0,     0,     0,     0,
       0,   136,   137,     0,     0,   140,   141,   142,   143,   144,
     145
};

static const yytype_int16 yycheck[] =
{
      19,    40,    41,   111,    82,   124,   121,    41,    60,    61,
       5,    98,   131,    14,    51,    52,     0,    20,    21,    29,
       5,    31,   100,     5,     9,    10,    11,    68,    13,    66,
      67,    34,    41,     5,    16,     5,    70,    22,    10,    11,
      74,     5,    68,   151,   152,    27,    72,    56,    87,    88,
      89,    90,    37,    57,    39,    59,    41,    42,    43,    44,
      45,    70,   114,   102,    46,    74,    26,    25,    50,   108,
      55,   110,   159,   160,   161,   190,    23,    35,    25,    64,
      65,    61,   121,    20,    21,    22,   205,    72,    35,     5,
     109,   169,   111,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,     5,    20,    21,
      61,     9,    10,    11,   153,    13,    10,    11,    26,    27,
       5,    36,   230,   231,     9,    10,    15,   166,    13,    51,
      52,     8,   151,   152,   212,   213,   214,   189,     5,   217,
       5,     5,    64,    65,    66,    67,    10,    11,    68,    68,
      24,   190,    69,    71,     5,   233,    70,    55,    68,    72,
       7,    72,    32,    72,    21,    68,    64,    65,     5,   208,
      55,    68,   211,    74,    72,    68,    78,    72,    56,    64,
      65,    51,    52,    53,    54,     5,    30,    72,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     9,    10,
      11,    12,    13,    33,    38,    71,    51,    52,    53,    54,
      68,   230,   231,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    73,    51,    52,    53,    54,    68,    78,
      75,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    73,    73,    79,    48,    73,    73,    51,    52,    53,
      54,    28,    71,    71,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    49,    71,    51,    52,    53,    54,
      68,    33,    68,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    51,    52,    53,    54,    17,    75,    68,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      49,    69,    51,    52,    53,    54,    40,    47,   130,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    51,
      52,    53,    54,   219,    63,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    51,    52,    53,    54,
     120,   200,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    51,    52,    53,    54,    -1,   234,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      51,    52,    53,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    51,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    51,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      67
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
      12,    13,    93,    68,     5,     9,    10,    11,    13,    22,
      37,    39,    41,    42,    43,    44,    45,    55,    64,    65,
      72,    94,    95,    96,   104,   105,   121,    68,    69,    24,
      71,    70,    72,     5,   104,   104,     5,    41,    56,    70,
      74,    68,    72,    87,    72,    87,    99,    99,     7,   103,
      68,    72,     5,    97,    74,    95,   104,   104,   104,   104,
      68,    78,    51,    52,    53,    54,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,   100,    68,    95,   104,
     122,    57,    49,    56,   104,     5,   105,   104,   106,    20,
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
      94,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     102,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   107,   107,   107,   107,   107,   108,   109,   110,   110,
     111,   111,   112,   113,   114,   115,   116,   117,   118,   118,
     119,   119,   119,   120,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     0,     3,     1,     1,     2,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     2,     3,     3,     2,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     4,     2,     3,
       1,     1,     1,     1,     1,     1,     3,     6,     5,     0,
       1,     1,     5,     9,     4,     6,     5,     7,     3,     0,
       4,     4,     4,     4,     4,     3,     1
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
#line 137 "parser.y"
                                                                                                      {
	printf("\n\t-------------\n\t|Programa OK|\n\t-------------\n\n");
}
#line 1406 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal comentarioPreTK  */
#line 140 "parser.y"
                                                                  {

}
#line 1414 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque comentarioPostTK  */
#line 143 "parser.y"
                                    {

}
#line 1422 "parser.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 147 "parser.y"
                                       {

	}
#line 1430 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_const decl_globales  */
#line 150 "parser.y"
                                          {

	}
#line 1438 "parser.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 153 "parser.y"
                {

	}
#line 1446 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 158 "parser.y"
                                {

	}
#line 1454 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 161 "parser.y"
                                {

	}
#line 1462 "parser.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 164 "parser.y"
               {

	}
#line 1470 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 168 "parser.y"
                                        {

}
#line 1478 "parser.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 172 "parser.y"
                                                {

	}
#line 1486 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_const declaraciones  */
#line 175 "parser.y"
                                                {

	}
#line 1494 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 178 "parser.y"
                                                {

	}
#line 1502 "parser.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 181 "parser.y"
                {

	}
#line 1510 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: inicioTipoTK lista_d_tipo finTipoTK puntoYComaTK  */
#line 186 "parser.y"
                                                                        {

}
#line 1518 "parser.tab.c"
    break;

  case 17: /* declaracion_const: inicioConstantesTK lista_d_cte finalConstantesTK puntoYComaTK  */
#line 189 "parser.y"
                                                                                        {

}
#line 1526 "parser.tab.c"
    break;

  case 18: /* declaracion_var: inicioVariablesTK lista_d_var finVariablesTK puntoYComaTK  */
#line 192 "parser.y"
                                                                                {

}
#line 1534 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: identificadorTK igualTK d_tipo puntoYComaTK lista_d_tipo  */
#line 197 "parser.y"
                                                                {

	  }
#line 1542 "parser.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 200 "parser.y"
                {

	}
#line 1550 "parser.tab.c"
    break;

  case 21: /* literal: literalCadenaTK  */
#line 206 "parser.y"
                                {
		(yyval.literal) = (yyvsp[0].literal);
	}
#line 1558 "parser.tab.c"
    break;

  case 22: /* literal: literalCaracterTK  */
#line 209 "parser.y"
                                {
		(yyval.literal) = (yyvsp[0].literal);
	}
#line 1566 "parser.tab.c"
    break;

  case 23: /* literal: literalEnteroTK  */
#line 212 "parser.y"
                                {
		(yyval.literal) = (yyvsp[0].literal);
	}
#line 1574 "parser.tab.c"
    break;

  case 24: /* literal: literalRealTK  */
#line 215 "parser.y"
                                {
		(yyval.literal) = (yyvsp[0].literal);
	}
#line 1582 "parser.tab.c"
    break;

  case 25: /* literal: literalBooleanoTK  */
#line 218 "parser.y"
                                {
		(yyval.literal) = (yyvsp[0].literal);
	}
#line 1590 "parser.tab.c"
    break;

  case 26: /* tipo_base: enteroTK  */
#line 224 "parser.y"
                 { 
		(yyval.tipo) = ENTERO;
	}
#line 1598 "parser.tab.c"
    break;

  case 27: /* tipo_base: realTK  */
#line 227 "parser.y"
                 { 
		(yyval.tipo) = REAL;
	}
#line 1606 "parser.tab.c"
    break;

  case 28: /* tipo_base: booleanoTK  */
#line 230 "parser.y"
                     { 
		(yyval.tipo) = BOOLEANO;
	}
#line 1614 "parser.tab.c"
    break;

  case 29: /* tipo_base: caracterTK  */
#line 233 "parser.y"
                     { 
		(yyval.tipo) = CARACTER;
	}
#line 1622 "parser.tab.c"
    break;

  case 30: /* tipo_base: cadenaTK  */
#line 236 "parser.y"
                   { 
		(yyval.tipo) = CADENA;
	}
#line 1630 "parser.tab.c"
    break;

  case 31: /* d_tipo: tuplaTK lista_campos ftuplaTK  */
#line 241 "parser.y"
                                                        {

	}
#line 1638 "parser.tab.c"
    break;

  case 32: /* d_tipo: tablaTK corcheteAbreTK expresion_t subrangoTK expresion_t corcheteCierraTK deTK d_tipo  */
#line 244 "parser.y"
                                                                                             {

	}
#line 1646 "parser.tab.c"
    break;

  case 33: /* d_tipo: identificadorTK  */
#line 247 "parser.y"
                                                                        {

	}
#line 1654 "parser.tab.c"
    break;

  case 34: /* d_tipo: expresion_t subrangoTK expresion_t  */
#line 250 "parser.y"
                                                {

	}
#line 1662 "parser.tab.c"
    break;

  case 35: /* d_tipo: refTK d_tipo  */
#line 253 "parser.y"
                                                                        {

	}
#line 1670 "parser.tab.c"
    break;

  case 36: /* d_tipo: tipo_base  */
#line 256 "parser.y"
                                                                                {
	
	}
#line 1678 "parser.tab.c"
    break;

  case 37: /* expresion_t: expresion  */
#line 262 "parser.y"
                                        {

	}
#line 1686 "parser.tab.c"
    break;

  case 38: /* expresion_t: literalCaracterTK  */
#line 265 "parser.y"
                            {

	}
#line 1694 "parser.tab.c"
    break;

  case 39: /* lista_campos: identificadorTK dosPuntosTK d_tipo puntoYComaTK lista_campos  */
#line 271 "parser.y"
                                                                        {

	}
#line 1702 "parser.tab.c"
    break;

  case 40: /* lista_campos: %empty  */
#line 274 "parser.y"
                    {

	}
#line 1710 "parser.tab.c"
    break;

  case 41: /* lista_d_cte: identificadorTK igualTK literal puntoYComaTK lista_d_cte  */
#line 280 "parser.y"
                                                                        {
		insertar(&ts, (yyvsp[-4].cadena), (yyvsp[-2].literal), true);
	}
#line 1718 "parser.tab.c"
    break;

  case 42: /* lista_d_cte: %empty  */
#line 283 "parser.y"
                        {

	}
#line 1726 "parser.tab.c"
    break;

  case 43: /* lista_d_var: lista_id dosPuntosTK d_tipo puntoYComaTK lista_d_var  */
#line 289 "parser.y"
                                                              {
		
	}
#line 1734 "parser.tab.c"
    break;

  case 44: /* lista_d_var: %empty  */
#line 292 "parser.y"
                        {

	}
#line 1742 "parser.tab.c"
    break;

  case 45: /* lista_id: identificadorTK comaTK lista_id  */
#line 298 "parser.y"
                                                {
	}
#line 1749 "parser.tab.c"
    break;

  case 46: /* lista_id: identificadorTK  */
#line 300 "parser.y"
                                                                {
	}
#line 1756 "parser.tab.c"
    break;

  case 47: /* decl_ent_sal: decl_ent  */
#line 305 "parser.y"
                                                {
		
	}
#line 1764 "parser.tab.c"
    break;

  case 48: /* decl_ent_sal: decl_ent decl_sal  */
#line 308 "parser.y"
                                        {

	}
#line 1772 "parser.tab.c"
    break;

  case 49: /* decl_ent_sal: decl_sal  */
#line 311 "parser.y"
                                                {

	}
#line 1780 "parser.tab.c"
    break;

  case 50: /* decl_ent: entradaTK lista_d_var  */
#line 316 "parser.y"
                                {

}
#line 1788 "parser.tab.c"
    break;

  case 51: /* decl_sal: salidaTK lista_d_var  */
#line 319 "parser.y"
                               {

}
#line 1796 "parser.tab.c"
    break;

  case 52: /* expresion: expresion masTK expresion  */
#line 324 "parser.y"
                                                                                        {

	}
#line 1804 "parser.tab.c"
    break;

  case 53: /* expresion: expresion menosTK expresion  */
#line 327 "parser.y"
                                                                                {

	}
#line 1812 "parser.tab.c"
    break;

  case 54: /* expresion: expresion porTK expresion  */
#line 330 "parser.y"
                                                                                        {

	}
#line 1820 "parser.tab.c"
    break;

  case 55: /* expresion: expresion divisionTK expresion  */
#line 333 "parser.y"
                                                                                {

	}
#line 1828 "parser.tab.c"
    break;

  case 56: /* expresion: expresion modTK expresion  */
#line 336 "parser.y"
                                                                                        {

	}
#line 1836 "parser.tab.c"
    break;

  case 57: /* expresion: expresion divEnteraTK expresion  */
#line 339 "parser.y"
                                                                                {

	}
#line 1844 "parser.tab.c"
    break;

  case 58: /* expresion: literalEnteroTK  */
#line 342 "parser.y"
                                                                                                {

	}
#line 1852 "parser.tab.c"
    break;

  case 59: /* expresion: literalRealTK  */
#line 345 "parser.y"
                                                                                                {

	}
#line 1860 "parser.tab.c"
    break;

  case 60: /* expresion: menosTK expresion  */
#line 348 "parser.y"
                                                                                {

	}
#line 1868 "parser.tab.c"
    break;

  case 61: /* expresion: masTK expresion  */
#line 351 "parser.y"
                                                                                {

	}
#line 1876 "parser.tab.c"
    break;

  case 62: /* expresion: expresion yTK expresion  */
#line 354 "parser.y"
                                                                                        {

	}
#line 1884 "parser.tab.c"
    break;

  case 63: /* expresion: expresion oTK expresion  */
#line 357 "parser.y"
                                                                                        {

	}
#line 1892 "parser.tab.c"
    break;

  case 64: /* expresion: noTK expresion  */
#line 360 "parser.y"
                                                                                                {

	}
#line 1900 "parser.tab.c"
    break;

  case 65: /* expresion: literalBooleanoTK  */
#line 363 "parser.y"
                                                                                                {

	}
#line 1908 "parser.tab.c"
    break;

  case 66: /* expresion: funcion_ll  */
#line 366 "parser.y"
                                                                                                {

	}
#line 1916 "parser.tab.c"
    break;

  case 67: /* expresion: operando  */
#line 369 "parser.y"
                                                                                                        {

	}
#line 1924 "parser.tab.c"
    break;

  case 68: /* expresion: expresion menorTK expresion  */
#line 372 "parser.y"
                                                                                {

	}
#line 1932 "parser.tab.c"
    break;

  case 69: /* expresion: expresion mayorTK expresion  */
#line 375 "parser.y"
                                                                                {

	}
#line 1940 "parser.tab.c"
    break;

  case 70: /* expresion: expresion menorIgualTK expresion  */
#line 378 "parser.y"
                                                                                {

	}
#line 1948 "parser.tab.c"
    break;

  case 71: /* expresion: expresion mayorIgualTK expresion  */
#line 381 "parser.y"
                                                                                {

	}
#line 1956 "parser.tab.c"
    break;

  case 72: /* expresion: expresion igualTK expresion  */
#line 384 "parser.y"
                                                                                {

	}
#line 1964 "parser.tab.c"
    break;

  case 73: /* expresion: expresion distintoTK expresion  */
#line 387 "parser.y"
                                                                                {

	}
#line 1972 "parser.tab.c"
    break;

  case 74: /* expresion: parentesisAbreTK expresion parentesisCierraTK  */
#line 390 "parser.y"
                                                                {

	}
#line 1980 "parser.tab.c"
    break;

  case 75: /* operando: identificadorTK  */
#line 396 "parser.y"
                                                                                                        {

	}
#line 1988 "parser.tab.c"
    break;

  case 76: /* operando: operando puntoTK operando  */
#line 399 "parser.y"
                                                                                                {

	}
#line 1996 "parser.tab.c"
    break;

  case 77: /* operando: operando corcheteAbreTK expresion corcheteCierraTK  */
#line 402 "parser.y"
                                                                {

	}
#line 2004 "parser.tab.c"
    break;

  case 78: /* operando: operando refTK  */
#line 405 "parser.y"
                                                                                                        {

	}
#line 2012 "parser.tab.c"
    break;

  case 79: /* instrucciones: instruccion puntoYComaTK instrucciones  */
#line 411 "parser.y"
                                                {

	}
#line 2020 "parser.tab.c"
    break;

  case 80: /* instrucciones: instruccion  */
#line 414 "parser.y"
                                                                        {

	}
#line 2028 "parser.tab.c"
    break;

  case 81: /* instruccion: continuarTK  */
#line 420 "parser.y"
                                {

	}
#line 2036 "parser.tab.c"
    break;

  case 82: /* instruccion: asignacion  */
#line 423 "parser.y"
                        {

	}
#line 2044 "parser.tab.c"
    break;

  case 83: /* instruccion: alternativa  */
#line 426 "parser.y"
                        {

	}
#line 2052 "parser.tab.c"
    break;

  case 84: /* instruccion: iteracion  */
#line 429 "parser.y"
                                {

	}
#line 2060 "parser.tab.c"
    break;

  case 85: /* instruccion: accion_ll  */
#line 432 "parser.y"
                                {

	}
#line 2068 "parser.tab.c"
    break;

  case 86: /* asignacion: operando asignacionTK expresion  */
#line 438 "parser.y"
                                        {

	}
#line 2076 "parser.tab.c"
    break;

  case 87: /* alternativa: siTK expresion entoncesTK instrucciones lista_opciones fsiTK  */
#line 444 "parser.y"
                                                                        {

	}
#line 2084 "parser.tab.c"
    break;

  case 88: /* lista_opciones: sinoSiTK expresion entoncesTK instrucciones lista_opciones  */
#line 450 "parser.y"
                                                                        {

	}
#line 2092 "parser.tab.c"
    break;

  case 89: /* lista_opciones: %empty  */
#line 453 "parser.y"
                        {

	}
#line 2100 "parser.tab.c"
    break;

  case 90: /* iteracion: it_cota_fija  */
#line 459 "parser.y"
                        {

	}
#line 2108 "parser.tab.c"
    break;

  case 91: /* iteracion: it_cota_exp  */
#line 462 "parser.y"
                        {

	}
#line 2116 "parser.tab.c"
    break;

  case 92: /* it_cota_exp: inicioMientrasTK expresion hacerTK instrucciones finMientrasTK  */
#line 468 "parser.y"
                                                                        {

	}
#line 2124 "parser.tab.c"
    break;

  case 93: /* it_cota_fija: paraTK identificadorTK asignacionTK expresion hastaTK expresion hacerTK instrucciones fparaTK  */
#line 474 "parser.y"
                                                                                                        {

	}
#line 2132 "parser.tab.c"
    break;

  case 94: /* accion_d: accionTK a_cabecera bloque faccionTK  */
#line 480 "parser.y"
                                                {

	}
#line 2140 "parser.tab.c"
    break;

  case 95: /* funcion_d: funcionTK f_cabecera bloque devTK expresion ffuncionTK  */
#line 486 "parser.y"
                                                                {

	}
#line 2148 "parser.tab.c"
    break;

  case 96: /* a_cabecera: identificadorTK parentesisAbreTK d_par_form parentesisCierraTK puntoYComaTK  */
#line 492 "parser.y"
                                                                                        {

	}
#line 2156 "parser.tab.c"
    break;

  case 97: /* f_cabecera: identificadorTK parentesisAbreTK lista_d_var parentesisCierraTK devTK d_tipo puntoYComaTK  */
#line 498 "parser.y"
                                                                                                        {

	}
#line 2164 "parser.tab.c"
    break;

  case 98: /* d_par_form: d_p_form puntoYComaTK d_par_form  */
#line 504 "parser.y"
                                                {

	}
#line 2172 "parser.tab.c"
    break;

  case 99: /* d_par_form: %empty  */
#line 507 "parser.y"
                        {

	}
#line 2180 "parser.tab.c"
    break;

  case 100: /* d_p_form: entradaTK lista_id dosPuntosTK d_tipo  */
#line 513 "parser.y"
                                                                {

	}
#line 2188 "parser.tab.c"
    break;

  case 101: /* d_p_form: salidaTK lista_id dosPuntosTK d_tipo  */
#line 516 "parser.y"
                                                                {

	}
#line 2196 "parser.tab.c"
    break;

  case 102: /* d_p_form: entradaSalidaTK lista_id dosPuntosTK d_tipo  */
#line 519 "parser.y"
                                                        {

	}
#line 2204 "parser.tab.c"
    break;

  case 103: /* accion_ll: identificadorTK parentesisAbreTK l_ll parentesisCierraTK  */
#line 525 "parser.y"
                                                                        {

	}
#line 2212 "parser.tab.c"
    break;

  case 104: /* funcion_ll: identificadorTK parentesisAbreTK l_ll parentesisCierraTK  */
#line 531 "parser.y"
                                                                        {

	}
#line 2220 "parser.tab.c"
    break;

  case 105: /* l_ll: expresion comaTK l_ll  */
#line 537 "parser.y"
                                {

	}
#line 2228 "parser.tab.c"
    break;

  case 106: /* l_ll: expresion  */
#line 540 "parser.y"
                                                {

	}
#line 2236 "parser.tab.c"
    break;


#line 2240 "parser.tab.c"

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

#line 545 "parser.y"

/* ====================================================
   3. CÓDIGO C ADICIONAL (Funciones auxiliares y main)
   ==================================================== */
int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=0;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	ts = nuevaTablaDeSimbolos();
	yyparse();
	imprimeTabla(ts);
}

void yyerror(char * s){
	extern int yylineno;
	printf("\tBISON: ERROR en linea %d, %s\n", yylineno, s);
}
