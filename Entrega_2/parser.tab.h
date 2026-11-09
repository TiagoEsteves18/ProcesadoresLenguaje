/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    letraTK = 258,                 /* letraTK  */
    cifraTK = 259,                 /* cifraTK  */
    identificadorTK = 260,         /* identificadorTK  */
    comentarioTK = 261,            /* comentarioTK  */
    comentarioPreTK = 262,         /* comentarioPreTK  */
    comentarioPostTK = 263,        /* comentarioPostTK  */
    literalEnteroTK = 264,         /* literalEnteroTK  */
    literalRealTK = 265,           /* literalRealTK  */
    literalCaracterTK = 266,       /* literalCaracterTK  */
    literalCadenaTK = 267,         /* literalCadenaTK  */
    literalBooleanoTK = 268,       /* literalBooleanoTK  */
    algoritmoTK = 269,             /* algoritmoTK  */
    falgoritmoTK = 270,            /* falgoritmoTK  */
    siTK = 271,                    /* siTK  */
    fsiTK = 272,                   /* fsiTK  */
    verdaderoTK = 273,             /* verdaderoTK  */
    falsoTK = 274,                 /* falsoTK  */
    entradaTK = 275,               /* entradaTK  */
    salidaTK = 276,                /* salidaTK  */
    enteroTK = 277,                /* enteroTK  */
    inicioVariablesTK = 278,       /* inicioVariablesTK  */
    finVariablesTK = 279,          /* finVariablesTK  */
    inicioConstantesTK = 280,      /* inicioConstantesTK  */
    finalConstantesTK = 281,       /* finalConstantesTK  */
    inicioMientrasTK = 282,        /* inicioMientrasTK  */
    finMientrasTK = 283,           /* finMientrasTK  */
    accionTK = 284,                /* accionTK  */
    faccionTK = 285,               /* faccionTK  */
    funcionTK = 286,               /* funcionTK  */
    ffuncionTK = 287,              /* ffuncionTK  */
    devTK = 288,                   /* devTK  */
    entradaSalidaTK = 289,         /* entradaSalidaTK  */
    inicioTipoTK = 290,            /* inicioTipoTK  */
    finTipoTK = 291,               /* finTipoTK  */
    tuplaTK = 292,                 /* tuplaTK  */
    ftuplaTK = 293,                /* ftuplaTK  */
    tablaTK = 294,                 /* tablaTK  */
    deTK = 295,                    /* deTK  */
    refTK = 296,                   /* refTK  */
    realTK = 297,                  /* realTK  */
    booleanoTK = 298,              /* booleanoTK  */
    caracterTK = 299,              /* caracterTK  */
    cadenaTK = 300,                /* cadenaTK  */
    paraTK = 301,                  /* paraTK  */
    fparaTK = 302,                 /* fparaTK  */
    hastaTK = 303,                 /* hastaTK  */
    hacerTK = 304,                 /* hacerTK  */
    continuarTK = 305,             /* continuarTK  */
    divEnteraTK = 306,             /* divEnteraTK  */
    modTK = 307,                   /* modTK  */
    yTK = 308,                     /* yTK  */
    oTK = 309,                     /* oTK  */
    noTK = 310,                    /* noTK  */
    asignacionTK = 311,            /* asignacionTK  */
    entoncesTK = 312,              /* entoncesTK  */
    menorIgualTK = 313,            /* menorIgualTK  */
    mayorIgualTK = 314,            /* mayorIgualTK  */
    distintoTK = 315,              /* distintoTK  */
    igualTK = 316,                 /* igualTK  */
    menorTK = 317,                 /* menorTK  */
    mayorTK = 318,                 /* mayorTK  */
    masTK = 319,                   /* masTK  */
    menosTK = 320,                 /* menosTK  */
    porTK = 321,                   /* porTK  */
    divisionTK = 322,              /* divisionTK  */
    puntoYComaTK = 323,            /* puntoYComaTK  */
    comaTK = 324,                  /* comaTK  */
    puntoTK = 325,                 /* puntoTK  */
    dosPuntosTK = 326,             /* dosPuntosTK  */
    parentesisAbreTK = 327,        /* parentesisAbreTK  */
    parentesisCierraTK = 328,      /* parentesisCierraTK  */
    corcheteAbreTK = 329,          /* corcheteAbreTK  */
    corcheteCierraTK = 330,        /* corcheteCierraTK  */
    dobleComillaTK = 331,          /* dobleComillaTK  */
    comillaSimpleTK = 332,         /* comillaSimpleTK  */
    subrangoTK = 333,              /* subrangoTK  */
    sinoSiTK = 334,                /* sinoSiTK  */
    UMENOS = 335                   /* UMENOS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
