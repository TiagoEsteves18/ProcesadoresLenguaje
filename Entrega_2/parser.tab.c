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
  YYSYMBOL_exp_a = 105,                    /* exp_a  */
  YYSYMBOL_exp_b = 106,                    /* exp_b  */
  YYSYMBOL_oprel = 107,                    /* oprel  */
  YYSYMBOL_operando = 108,                 /* operando  */
  YYSYMBOL_instrucciones = 109,            /* instrucciones  */
  YYSYMBOL_instruccion = 110,              /* instruccion  */
  YYSYMBOL_asignacion = 111,               /* asignacion  */
  YYSYMBOL_alternativa = 112,              /* alternativa  */
  YYSYMBOL_lista_opciones = 113,           /* lista_opciones  */
  YYSYMBOL_iteracion = 114,                /* iteracion  */
  YYSYMBOL_it_cota_exp = 115,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 116,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 117,                 /* accion_d  */
  YYSYMBOL_funcion_d = 118,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 119,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 120,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 121,               /* d_par_form  */
  YYSYMBOL_d_p_form = 122,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 123,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 124,               /* funcion_ll  */
  YYSYMBOL_l_ll = 125                      /* l_ll  */
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
#define YYLAST   401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

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
       0,   128,   128,   131,   134,   138,   141,   144,   149,   152,
     155,   159,   163,   166,   169,   172,   177,   180,   183,   188,
     191,   197,   200,   203,   206,   209,   215,   218,   221,   224,
     227,   232,   235,   238,   241,   244,   247,   253,   256,   262,
     265,   271,   274,   280,   283,   289,   292,   298,   301,   304,
     309,   312,   326,   329,   332,   335,   338,   344,   347,   350,
     353,   356,   359,   362,   365,   368,   371,   377,   380,   383,
     386,   389,   395,   398,   401,   404,   407,   410,   417,   420,
     423,   426,   432,   435,   441,   444,   447,   450,   453,   459,
     465,   471,   474,   480,   483,   489,   495,   501,   507,   513,
     519,   525,   528,   534,   537,   540,   546,   552,   558,   561
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
  "expresion", "exp_a", "exp_b", "oprel", "operando", "instrucciones",
  "instruccion", "asignacion", "alternativa", "lista_opciones",
  "iteracion", "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d",
  "a_cabecera", "f_cabecera", "d_par_form", "d_p_form", "accion_ll",
  "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-121)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-34)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    11,    27,   -25,  -121,    -4,    49,    53,     5,    41,
      -4,    -4,     8,    50,    21,    74,   109,   100,   115,     9,
       5,     5,     5,   120,   122,    43,    41,    41,  -121,  -121,
      77,    60,   111,    61,    63,   110,    72,    71,  -121,    73,
       2,     2,   141,  -121,    70,  -121,    79,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,    85,     5,    88,     5,
     109,   109,   144,   140,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,    94,  -121,   -30,  -121,  -121,  -121,  -121,  -121,
     158,    90,   111,  -121,  -121,  -121,  -121,     2,     2,     2,
       2,  -121,    97,    91,   300,  -121,  -121,   -33,  -121,  -121,
     109,   103,   111,  -121,     2,    96,   266,   213,   116,  -121,
       2,   168,     2,     9,    12,   147,   109,   149,  -121,  -121,
    -121,  -121,    49,     2,   113,   136,    13,  -121,   334,  -121,
    -121,   171,    53,    13,     2,     2,     2,     2,  -121,  -121,
    -121,  -121,  -121,  -121,     2,     2,     2,     2,     2,  -121,
    -121,   128,   230,   124,     9,     9,     2,   300,  -121,  -121,
     153,  -121,   109,   109,   109,   125,   131,  -121,   129,     2,
    -121,   130,   111,  -121,   117,  -121,  -121,  -121,  -121,  -121,
     334,   317,   -32,   -32,  -121,  -121,   300,   109,     2,  -121,
     121,   173,   194,  -121,   137,   150,   155,   159,    12,   206,
     127,  -121,   172,    13,  -121,  -121,     2,   224,  -121,     2,
     111,   111,   111,  -121,  -121,   111,  -121,   158,   174,   283,
    -121,   249,  -121,  -121,  -121,   175,  -121,   210,     9,     9,
    -121,   111,   121,   204,  -121,  -121,  -121
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    42,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    44,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    46,     0,     0,     0,     4,    78,
       0,     0,     0,    84,     0,    11,    83,    85,    86,    87,
      94,    93,    88,    12,    13,    14,     0,    15,     0,    15,
      44,    44,     0,    47,    49,     8,     9,    23,    24,    22,
      21,    25,     0,    17,    78,    63,    64,    38,    70,    26,
      40,     0,     0,    27,    28,    29,    30,     0,     0,     0,
       0,    36,     0,     0,    37,    52,    53,    55,    54,    16,
       0,     0,     0,     2,     0,    78,     0,     0,     0,    81,
       0,     0,     0,     0,   102,     0,    44,     0,    50,    51,
       3,    48,    42,     0,     0,     0,     0,    35,    69,    66,
      65,     0,    20,     0,     0,     0,     0,     0,    74,    75,
      77,    76,    72,    73,     0,     0,     0,     0,     0,    45,
      18,     0,   109,     0,     0,     0,     0,    89,    78,    79,
       0,    82,     0,     0,     0,     0,     0,    97,     0,     0,
      41,     0,     0,    31,     0,    56,    19,    34,    62,    61,
      67,    68,    57,    58,    59,    60,    71,    44,     0,   106,
      92,     0,     0,    80,     0,     0,     0,     0,   102,     0,
       0,   107,     0,     0,    43,   108,     0,     0,    95,     0,
       0,     0,     0,    99,   101,     0,    98,    40,     0,     0,
      90,     0,   103,   104,   105,     0,    39,     0,     0,     0,
     100,     0,    92,     0,    32,    91,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,  -121,    93,    86,    34,    80,    42,    51,
    -121,   138,  -121,  -121,   -73,  -120,    46,   146,   -56,   -83,
    -121,  -121,   222,   -39,  -121,  -121,  -121,   -19,  -110,  -121,
    -121,  -121,    37,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
      89,  -121,  -121,  -121,  -113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    72,    91,    92,    93,   125,    13,    35,    36,
      62,    63,    64,    94,    95,    96,   148,    97,    45,    46,
      47,    48,   207,    49,    50,    51,    26,    27,    57,    59,
     165,   166,    52,    98,   153
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   106,   107,   161,   118,   119,   174,   105,   109,   127,
     171,    75,    76,   177,    39,    78,     3,   149,   105,   134,
     135,     6,    75,    76,    77,    40,    78,     4,    16,   151,
       6,     7,   162,   163,   146,   147,    41,   111,   -33,     1,
       7,   112,   123,     5,   190,   191,   164,    10,   128,   129,
     130,   131,    10,    10,    12,    42,    11,    87,    14,    43,
     168,    11,    11,    60,    61,   152,    88,    89,    87,    30,
      23,   157,    24,   160,    90,   205,    31,    88,    89,   194,
     195,   196,    32,   218,   152,    90,    67,    68,    69,    70,
      71,   115,   159,   117,    44,   178,   179,   180,   181,   202,
      53,    54,    55,    28,    29,   182,   183,   184,   185,   186,
      33,   109,    65,    66,    34,    37,    74,   192,   232,   233,
      75,    76,    77,    38,    78,    56,   110,    58,    73,    99,
     200,   204,   100,    79,   101,    44,    44,   222,   223,   224,
     111,   103,   225,   102,   112,   104,   108,   113,    80,   152,
      81,   120,    82,    83,    84,    85,    86,   114,   234,   216,
     116,    61,   122,   124,   126,   132,    87,   219,   123,   133,
     221,   150,   156,   158,   173,    88,    89,   167,   134,   135,
     136,   137,   169,    90,   172,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   203,   187,   189,   197,   198,
     206,   208,   199,   201,   134,   135,   136,   137,   210,    44,
      44,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   211,   134,   135,   136,   137,   212,   213,   193,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   215,
     217,   220,   209,   230,   175,   134,   135,   136,   137,   227,
     231,   236,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   155,   226,   134,   135,   136,   137,   170,   235,
     176,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   134,   135,   136,   137,   121,     0,   214,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   229,   188,
     134,   135,   136,   137,     0,     0,     0,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   134,   135,   136,
     137,     0,     0,   154,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   134,   135,   136,   137,     0,     0,
     228,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   134,   135,   136,   137,     0,     0,     0,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   134,   135,
     136,     0,     0,     0,     0,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   134,   135,     0,     0,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147
};

static const yytype_int16 yycheck[] =
{
      19,    40,    41,   113,    60,    61,   126,     5,    41,    82,
     123,     9,    10,   133,     5,    13,     5,   100,     5,    51,
      52,    25,     9,    10,    11,    16,    13,     0,    23,   102,
      25,    35,    20,    21,    66,    67,    27,    70,    68,    14,
      35,    74,    72,    68,   154,   155,    34,     5,    87,    88,
      89,    90,    10,    11,     5,    46,     5,    55,     5,    50,
     116,    10,    11,    20,    21,   104,    64,    65,    55,    61,
      29,   110,    31,   112,    72,   188,    26,    64,    65,   162,
     163,   164,    61,   203,   123,    72,     9,    10,    11,    12,
      13,    57,   111,    59,   113,   134,   135,   136,   137,   172,
      20,    21,    22,    10,    11,   144,   145,   146,   147,   148,
      36,    41,    26,    27,     5,    15,     5,   156,   228,   229,
       9,    10,    11,     8,    13,     5,    56,     5,    68,    68,
     169,   187,    69,    22,    24,   154,   155,   210,   211,   212,
      70,    70,   215,    71,    74,    72,     5,    68,    37,   188,
      39,     7,    41,    42,    43,    44,    45,    72,   231,    32,
      72,    21,    68,     5,    74,    68,    55,   206,    72,    78,
     209,    68,    56,     5,    38,    64,    65,    30,    51,    52,
      53,    54,    33,    72,    71,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    78,    68,    73,    73,    68,
      79,    28,    73,    73,    51,    52,    53,    54,    71,   228,
     229,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    71,    51,    52,    53,    54,    71,    68,    75,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    33,
      68,    17,    48,    68,    73,    51,    52,    53,    54,    75,
      40,    47,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    49,   217,    51,    52,    53,    54,   122,   232,
     132,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    51,    52,    53,    54,    63,    -1,   198,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    49,    69,
      51,    52,    53,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    51,    52,    53,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    51,    52,    53,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    51,    52,    53,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    51,    52,
      53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    82,     5,     0,    68,    25,    35,    83,    85,
      89,    90,     5,    98,     5,    92,    23,    84,    87,    88,
      89,    90,    91,    29,    31,    86,   117,   118,    85,    85,
      61,    26,    61,    36,     5,    99,   100,    15,     8,     5,
      16,    27,    46,    50,   108,   109,   110,   111,   112,   114,
     115,   116,   123,    88,    88,    88,     5,   119,     5,   120,
      20,    21,   101,   102,   103,    86,    86,     9,    10,    11,
      12,    13,    93,    68,     5,     9,    10,    11,    13,    22,
      37,    39,    41,    42,    43,    44,    45,    55,    64,    65,
      72,    94,    95,    96,   104,   105,   106,   108,   124,    68,
      69,    24,    71,    70,    72,     5,   104,   104,     5,    41,
      56,    70,    74,    68,    72,    87,    72,    87,    99,    99,
       7,   103,    68,    72,     5,    97,    74,    95,   104,   104,
     104,   104,    68,    78,    51,    52,    53,    54,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,   107,   100,
      68,    95,   104,   125,    57,    49,    56,   104,     5,   108,
     104,   109,    20,    21,    34,   121,   122,    30,    99,    33,
      98,   125,    71,    38,    96,    73,    92,    96,   104,   104,
     104,   104,   104,   104,   104,   104,   104,    68,    69,    73,
     109,   109,   104,    75,   100,   100,   100,    73,    68,    73,
     104,    73,    95,    78,    99,   125,    79,   113,    28,    48,
      71,    71,    71,    68,   121,    33,    32,    68,    96,   104,
      17,   104,    95,    95,    95,    95,    97,    75,    57,    49,
      68,    40,   109,   109,    95,   113,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    81,    82,    83,    84,    85,    85,    85,    86,    86,
      86,    87,    88,    88,    88,    88,    89,    90,    91,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     102,   103,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   111,
     112,   113,   113,   114,   114,   115,   116,   117,   118,   119,
     120,   121,   121,   122,   122,   122,   123,   124,   125,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     0,     3,     1,     1,     2,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     2,     3,     3,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     2,     3,     1,     1,     1,     1,     1,     1,     3,
       6,     5,     0,     1,     1,     5,     9,     4,     6,     5,
       7,     3,     0,     4,     4,     4,     4,     4,     3,     1
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
#line 128 "parser.y"
                                                                                                      {
	printf("\n\t-------------\n\t|Programa OK|\n\t-------------\n");
}
#line 1403 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal comentarioPreTK  */
#line 131 "parser.y"
                                                                  {

}
#line 1411 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque comentarioPostTK  */
#line 134 "parser.y"
                                    {

}
#line 1419 "parser.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 138 "parser.y"
                                       {

	}
#line 1427 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_const decl_globales  */
#line 141 "parser.y"
                                          {

	}
#line 1435 "parser.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 144 "parser.y"
                {

	}
#line 1443 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 149 "parser.y"
                                {

	}
#line 1451 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 152 "parser.y"
                                {

	}
#line 1459 "parser.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 155 "parser.y"
               {

	}
#line 1467 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 159 "parser.y"
                                        {

}
#line 1475 "parser.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 163 "parser.y"
                                                {

	}
#line 1483 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_const declaraciones  */
#line 166 "parser.y"
                                                {

	}
#line 1491 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 169 "parser.y"
                                                {

	}
#line 1499 "parser.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 172 "parser.y"
                {

	}
#line 1507 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: inicioTipoTK lista_d_tipo finTipoTK puntoYComaTK  */
#line 177 "parser.y"
                                                                        {

}
#line 1515 "parser.tab.c"
    break;

  case 17: /* declaracion_const: inicioConstantesTK lista_d_cte finalConstantesTK puntoYComaTK  */
#line 180 "parser.y"
                                                                                        {

}
#line 1523 "parser.tab.c"
    break;

  case 18: /* declaracion_var: inicioVariablesTK lista_d_var finVariablesTK puntoYComaTK  */
#line 183 "parser.y"
                                                                                {

}
#line 1531 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: identificadorTK igualTK d_tipo puntoYComaTK lista_d_tipo  */
#line 188 "parser.y"
                                                                {

	  }
#line 1539 "parser.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 191 "parser.y"
                {

	}
#line 1547 "parser.tab.c"
    break;

  case 21: /* literal: literalCadenaTK  */
#line 197 "parser.y"
                                {
		
	}
#line 1555 "parser.tab.c"
    break;

  case 22: /* literal: literalCaracterTK  */
#line 200 "parser.y"
                                {

	}
#line 1563 "parser.tab.c"
    break;

  case 23: /* literal: literalEnteroTK  */
#line 203 "parser.y"
                                {

	}
#line 1571 "parser.tab.c"
    break;

  case 24: /* literal: literalRealTK  */
#line 206 "parser.y"
                                {

	}
#line 1579 "parser.tab.c"
    break;

  case 25: /* literal: literalBooleanoTK  */
#line 209 "parser.y"
                                {

	}
#line 1587 "parser.tab.c"
    break;

  case 26: /* tipo_base: enteroTK  */
#line 215 "parser.y"
                 { 

	}
#line 1595 "parser.tab.c"
    break;

  case 27: /* tipo_base: realTK  */
#line 218 "parser.y"
                 { 

	}
#line 1603 "parser.tab.c"
    break;

  case 28: /* tipo_base: booleanoTK  */
#line 221 "parser.y"
                     { 

	}
#line 1611 "parser.tab.c"
    break;

  case 29: /* tipo_base: caracterTK  */
#line 224 "parser.y"
                     { 

	}
#line 1619 "parser.tab.c"
    break;

  case 30: /* tipo_base: cadenaTK  */
#line 227 "parser.y"
                   { 

	}
#line 1627 "parser.tab.c"
    break;

  case 31: /* d_tipo: tuplaTK lista_campos ftuplaTK  */
#line 232 "parser.y"
                                                        {

	  }
#line 1635 "parser.tab.c"
    break;

  case 32: /* d_tipo: tablaTK corcheteAbreTK expresion_t subrangoTK expresion_t corcheteCierraTK deTK d_tipo  */
#line 235 "parser.y"
                                                                                             {

	}
#line 1643 "parser.tab.c"
    break;

  case 33: /* d_tipo: identificadorTK  */
#line 238 "parser.y"
                                                                        {

	}
#line 1651 "parser.tab.c"
    break;

  case 34: /* d_tipo: expresion_t subrangoTK expresion_t  */
#line 241 "parser.y"
                                                {

	}
#line 1659 "parser.tab.c"
    break;

  case 35: /* d_tipo: refTK d_tipo  */
#line 244 "parser.y"
                                                                        {

	}
#line 1667 "parser.tab.c"
    break;

  case 36: /* d_tipo: tipo_base  */
#line 247 "parser.y"
                                                                                {

	}
#line 1675 "parser.tab.c"
    break;

  case 37: /* expresion_t: expresion  */
#line 253 "parser.y"
                                        {

	}
#line 1683 "parser.tab.c"
    break;

  case 38: /* expresion_t: literalCaracterTK  */
#line 256 "parser.y"
                            {

	}
#line 1691 "parser.tab.c"
    break;

  case 39: /* lista_campos: identificadorTK dosPuntosTK d_tipo puntoYComaTK lista_campos  */
#line 262 "parser.y"
                                                                        {

	}
#line 1699 "parser.tab.c"
    break;

  case 40: /* lista_campos: %empty  */
#line 265 "parser.y"
                    {

	}
#line 1707 "parser.tab.c"
    break;

  case 41: /* lista_d_cte: identificadorTK igualTK literal puntoYComaTK lista_d_cte  */
#line 271 "parser.y"
                                                                        {

	}
#line 1715 "parser.tab.c"
    break;

  case 42: /* lista_d_cte: %empty  */
#line 274 "parser.y"
                        {

	}
#line 1723 "parser.tab.c"
    break;

  case 43: /* lista_d_var: lista_id dosPuntosTK d_tipo puntoYComaTK lista_d_var  */
#line 280 "parser.y"
                                                                {

	}
#line 1731 "parser.tab.c"
    break;

  case 44: /* lista_d_var: %empty  */
#line 283 "parser.y"
                        {

	}
#line 1739 "parser.tab.c"
    break;

  case 45: /* lista_id: identificadorTK comaTK lista_id  */
#line 289 "parser.y"
                                                {

	}
#line 1747 "parser.tab.c"
    break;

  case 46: /* lista_id: identificadorTK  */
#line 292 "parser.y"
                                                                {

	}
#line 1755 "parser.tab.c"
    break;

  case 47: /* decl_ent_sal: decl_ent  */
#line 298 "parser.y"
                                                {
		
	}
#line 1763 "parser.tab.c"
    break;

  case 48: /* decl_ent_sal: decl_ent decl_sal  */
#line 301 "parser.y"
                                        {

	}
#line 1771 "parser.tab.c"
    break;

  case 49: /* decl_ent_sal: decl_sal  */
#line 304 "parser.y"
                                                {

	}
#line 1779 "parser.tab.c"
    break;

  case 50: /* decl_ent: entradaTK lista_d_var  */
#line 309 "parser.y"
                                {

}
#line 1787 "parser.tab.c"
    break;

  case 51: /* decl_sal: salidaTK lista_d_var  */
#line 312 "parser.y"
                               {

}
#line 1795 "parser.tab.c"
    break;

  case 52: /* expresion: exp_a  */
#line 326 "parser.y"
                                {

	}
#line 1803 "parser.tab.c"
    break;

  case 53: /* expresion: exp_b  */
#line 329 "parser.y"
                                {

	}
#line 1811 "parser.tab.c"
    break;

  case 54: /* expresion: funcion_ll  */
#line 332 "parser.y"
                        {

	}
#line 1819 "parser.tab.c"
    break;

  case 55: /* expresion: operando  */
#line 335 "parser.y"
                                {

	}
#line 1827 "parser.tab.c"
    break;

  case 56: /* expresion: parentesisAbreTK expresion parentesisCierraTK  */
#line 338 "parser.y"
                                                        {

	}
#line 1835 "parser.tab.c"
    break;

  case 57: /* exp_a: expresion masTK expresion  */
#line 344 "parser.y"
                                                                                        {

	}
#line 1843 "parser.tab.c"
    break;

  case 58: /* exp_a: expresion menosTK expresion  */
#line 347 "parser.y"
                                                                                {

	}
#line 1851 "parser.tab.c"
    break;

  case 59: /* exp_a: expresion porTK expresion  */
#line 350 "parser.y"
                                                                                        {

	}
#line 1859 "parser.tab.c"
    break;

  case 60: /* exp_a: expresion divisionTK expresion  */
#line 353 "parser.y"
                                                                                {

	}
#line 1867 "parser.tab.c"
    break;

  case 61: /* exp_a: expresion modTK expresion  */
#line 356 "parser.y"
                                                                                                {

	}
#line 1875 "parser.tab.c"
    break;

  case 62: /* exp_a: expresion divEnteraTK expresion  */
#line 359 "parser.y"
                                                                                        {

	}
#line 1883 "parser.tab.c"
    break;

  case 63: /* exp_a: literalEnteroTK  */
#line 362 "parser.y"
                                                                                                {

	}
#line 1891 "parser.tab.c"
    break;

  case 64: /* exp_a: literalRealTK  */
#line 365 "parser.y"
                                                                                                {

	}
#line 1899 "parser.tab.c"
    break;

  case 65: /* exp_a: menosTK expresion  */
#line 368 "parser.y"
                                                                                {

	}
#line 1907 "parser.tab.c"
    break;

  case 66: /* exp_a: masTK expresion  */
#line 371 "parser.y"
                                                                                {

	}
#line 1915 "parser.tab.c"
    break;

  case 67: /* exp_b: expresion yTK expresion  */
#line 377 "parser.y"
                                                                                        {

	}
#line 1923 "parser.tab.c"
    break;

  case 68: /* exp_b: expresion oTK expresion  */
#line 380 "parser.y"
                                                                                        {

	}
#line 1931 "parser.tab.c"
    break;

  case 69: /* exp_b: noTK expresion  */
#line 383 "parser.y"
                                                                                                {

	}
#line 1939 "parser.tab.c"
    break;

  case 70: /* exp_b: literalBooleanoTK  */
#line 386 "parser.y"
                                                                                                {

	}
#line 1947 "parser.tab.c"
    break;

  case 71: /* exp_b: expresion oprel expresion  */
#line 389 "parser.y"
                                                                                        {

	}
#line 1955 "parser.tab.c"
    break;

  case 72: /* oprel: menorTK  */
#line 395 "parser.y"
                                {

	}
#line 1963 "parser.tab.c"
    break;

  case 73: /* oprel: mayorTK  */
#line 398 "parser.y"
                                {

	}
#line 1971 "parser.tab.c"
    break;

  case 74: /* oprel: menorIgualTK  */
#line 401 "parser.y"
                        {

	}
#line 1979 "parser.tab.c"
    break;

  case 75: /* oprel: mayorIgualTK  */
#line 404 "parser.y"
                        {

	}
#line 1987 "parser.tab.c"
    break;

  case 76: /* oprel: igualTK  */
#line 407 "parser.y"
                                {

	}
#line 1995 "parser.tab.c"
    break;

  case 77: /* oprel: distintoTK  */
#line 410 "parser.y"
                        {

	}
#line 2003 "parser.tab.c"
    break;

  case 78: /* operando: identificadorTK  */
#line 417 "parser.y"
                                                                                                        {

	}
#line 2011 "parser.tab.c"
    break;

  case 79: /* operando: operando puntoTK operando  */
#line 420 "parser.y"
                                                                                                {

	}
#line 2019 "parser.tab.c"
    break;

  case 80: /* operando: operando corcheteAbreTK expresion corcheteCierraTK  */
#line 423 "parser.y"
                                                                {

	}
#line 2027 "parser.tab.c"
    break;

  case 81: /* operando: operando refTK  */
#line 426 "parser.y"
                                                                                                        {

	}
#line 2035 "parser.tab.c"
    break;

  case 82: /* instrucciones: instruccion puntoYComaTK instrucciones  */
#line 432 "parser.y"
                                                {

	}
#line 2043 "parser.tab.c"
    break;

  case 83: /* instrucciones: instruccion  */
#line 435 "parser.y"
                                                                        {

	}
#line 2051 "parser.tab.c"
    break;

  case 84: /* instruccion: continuarTK  */
#line 441 "parser.y"
                                {

	}
#line 2059 "parser.tab.c"
    break;

  case 85: /* instruccion: asignacion  */
#line 444 "parser.y"
                        {

	}
#line 2067 "parser.tab.c"
    break;

  case 86: /* instruccion: alternativa  */
#line 447 "parser.y"
                        {

	}
#line 2075 "parser.tab.c"
    break;

  case 87: /* instruccion: iteracion  */
#line 450 "parser.y"
                                {

	}
#line 2083 "parser.tab.c"
    break;

  case 88: /* instruccion: accion_ll  */
#line 453 "parser.y"
                                {

	}
#line 2091 "parser.tab.c"
    break;

  case 89: /* asignacion: operando asignacionTK expresion  */
#line 459 "parser.y"
                                        {

	}
#line 2099 "parser.tab.c"
    break;

  case 90: /* alternativa: siTK expresion entoncesTK instrucciones lista_opciones fsiTK  */
#line 465 "parser.y"
                                                                        {

	}
#line 2107 "parser.tab.c"
    break;

  case 91: /* lista_opciones: sinoSiTK expresion entoncesTK instrucciones lista_opciones  */
#line 471 "parser.y"
                                                                        {

	}
#line 2115 "parser.tab.c"
    break;

  case 92: /* lista_opciones: %empty  */
#line 474 "parser.y"
                        {

	}
#line 2123 "parser.tab.c"
    break;

  case 93: /* iteracion: it_cota_fija  */
#line 480 "parser.y"
                        {

	}
#line 2131 "parser.tab.c"
    break;

  case 94: /* iteracion: it_cota_exp  */
#line 483 "parser.y"
                        {

	}
#line 2139 "parser.tab.c"
    break;

  case 95: /* it_cota_exp: inicioMientrasTK expresion hacerTK instrucciones finMientrasTK  */
#line 489 "parser.y"
                                                                        {

	}
#line 2147 "parser.tab.c"
    break;

  case 96: /* it_cota_fija: paraTK identificadorTK asignacionTK expresion hastaTK expresion hacerTK instrucciones fparaTK  */
#line 495 "parser.y"
                                                                                                        {

	}
#line 2155 "parser.tab.c"
    break;

  case 97: /* accion_d: accionTK a_cabecera bloque faccionTK  */
#line 501 "parser.y"
                                                {

	}
#line 2163 "parser.tab.c"
    break;

  case 98: /* funcion_d: funcionTK f_cabecera bloque devTK expresion ffuncionTK  */
#line 507 "parser.y"
                                                                {

	}
#line 2171 "parser.tab.c"
    break;

  case 99: /* a_cabecera: identificadorTK parentesisAbreTK d_par_form parentesisCierraTK puntoYComaTK  */
#line 513 "parser.y"
                                                                                        {

	}
#line 2179 "parser.tab.c"
    break;

  case 100: /* f_cabecera: identificadorTK parentesisAbreTK lista_d_var parentesisCierraTK devTK d_tipo puntoYComaTK  */
#line 519 "parser.y"
                                                                                                        {

	}
#line 2187 "parser.tab.c"
    break;

  case 101: /* d_par_form: d_p_form puntoYComaTK d_par_form  */
#line 525 "parser.y"
                                                {

	}
#line 2195 "parser.tab.c"
    break;

  case 102: /* d_par_form: %empty  */
#line 528 "parser.y"
                        {

	}
#line 2203 "parser.tab.c"
    break;

  case 103: /* d_p_form: entradaTK lista_id dosPuntosTK d_tipo  */
#line 534 "parser.y"
                                                                {

	}
#line 2211 "parser.tab.c"
    break;

  case 104: /* d_p_form: salidaTK lista_id dosPuntosTK d_tipo  */
#line 537 "parser.y"
                                                                {

	}
#line 2219 "parser.tab.c"
    break;

  case 105: /* d_p_form: entradaSalidaTK lista_id dosPuntosTK d_tipo  */
#line 540 "parser.y"
                                                        {

	}
#line 2227 "parser.tab.c"
    break;

  case 106: /* accion_ll: identificadorTK parentesisAbreTK l_ll parentesisCierraTK  */
#line 546 "parser.y"
                                                                        {

	}
#line 2235 "parser.tab.c"
    break;

  case 107: /* funcion_ll: identificadorTK parentesisAbreTK l_ll parentesisCierraTK  */
#line 552 "parser.y"
                                                                        {

	}
#line 2243 "parser.tab.c"
    break;

  case 108: /* l_ll: expresion comaTK l_ll  */
#line 558 "parser.y"
                                {

	}
#line 2251 "parser.tab.c"
    break;

  case 109: /* l_ll: expresion  */
#line 561 "parser.y"
                                                {

	}
#line 2259 "parser.tab.c"
    break;


#line 2263 "parser.tab.c"

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

#line 566 "parser.y"

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
