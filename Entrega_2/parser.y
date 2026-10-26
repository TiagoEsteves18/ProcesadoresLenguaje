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

%token letraTK
%token cifraTK
%token identificadorTK
 
%token comentarioTKtoken 
%token comentarioPreTK	
%token comentarioPostTK	
 
%token literalEnteroTK 
%token literalRealTK  
%token literalCaracterTK  
%token literalCadenaTK

%token algoritmoTK 
%token falgoritmoTK 
%token siTK 
%token fsiTK 
%token verdaderoTK
%token falsoTK 
%token entradaTK 
%token salidaTK
%token enteroTK
%token inicioVariablesTK
%token finVariablesTK
%token inicioConstantesTK
%token finalConstantesTK
%token inicioMientrasTK
%token finMientrasTK
%token accionTK
%token faccionTK
%token funcionTK
%token ffuncionTK
%token devTK
%token entradaSalidaTK
%token inicioTipoTK
%token finTipoTK
%token tuplaTK
%token ftuplaTK
%token tablaTK
%token deTK
%token refTK
%token realTK
%token booleanoTK
%token caracterTK
%token cadenaTK
%token paraTK 
%token fparaTK
%token hastaTK
%token hacerTK
%token continuarTK
%token divEnteraTK
%token modTK
%token yTK
%token oTK
%token noTK

%token asignacionTK 
%token entoncesTK 
%token menorIgualTK 
%token mayorIgualTK 
%token distintoTK 
%token igualTK 
%token menorTK 
%token mayorTK 
%token masTK 
%token menosTK 
%token porTK 
%token divisionTK 
%token puntoYComaTK 
%token comaTK 
%token puntoTK 
%token dosPuntosTK 
%token parentesisAbreTK 
%token parentesisCierraTK 
%token corcheteAbreTK
%token corcheteCierraTK
%token dobleComillaTK
%token comillaSimpleTK
%token subrangoTK
%token sinoSiTK

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
