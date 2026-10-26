%{
    #include <stdio.h>
    #include <stdlib.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"

    // Declaraciones de funciones del analizador léxico (Flex) u otras
    int yylex();
    void yyerror(const char *s);
%}

/* ====================================================
   1. DECLARACIONES DE BISON (Tokens y Tipos)
   ==================================================== */
%define api.value.type {int}   /* Tipo de valor semántico por defecto (ej. int) */

%token NUM
%token PLUS MINUS MULT DIV
%token EOL

%left PLUS MINUS
%left MULT DIV

%%
/* ====================================================
   2. REGLAS GRAMATICALES
   ==================================================== */

input:
      /* vacío */
    | input line
    ;

line:
      EOL
    | expr EOL   { printf("Resultado: %d\n", $1); }
    ;

expr:
      NUM              { $$ = $1; }
    | expr PLUS expr   { $$ = $1 + $3; }
    | expr MINUS expr  { $$ = $1 - $3; }
    | expr MULT expr   { $$ = $1 * $3; }
    | expr DIV expr    { $$ = $1 / $3; }
    ;

%%
/* ====================================================
   3. CÓDIGO C ADICIONAL (Funciones auxiliares y main)
   ==================================================== */

void yyerror(const char *s) {
    fprintf(stderr, "Error sintáctico: %s\n", s);
}

int main(void) {
    return yyparse();
}
