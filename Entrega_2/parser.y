%{
    #include <stdio.h>
	#include <stdlib.h>
	#include "nombresDeTipos.h"
	#include "nombresDeOperadores.h"
	#include "literal.h"
	#include "tablaDeSimbolos.h"
	#include "listaIdentificadores.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Definicion de la funcion yyerror
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeSimbolos ts; //Es donde guardaremos los simbolos
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

%}

/* ====================================================
   1. DECLARACIONES DE BISON (Tokens y Tipos)
   ==================================================== */
%union{
	char* cadena;
	ValorCelda valorCelda;
	NombreDeTipoT tipo;
	LiteralT literal;
	NombreDeOperador operador;
	int entero;
	ListaIdentificadores listaIds;
	Variable variable;
}

%type <literal> literal
%type <variable> d_tipo
%type <tipo> tipo_base
%type <listaIds> lista_id
%type <entero> expresion expresion_t operando

%token letraTK
%token cifraTK
%token <cadena> identificadorTK
 
%token comentarioTK 
%token comentarioPreTK	
%token comentarioPostTK	
 
%token <literal> literalEnteroTK 
%token <literal> literalRealTK  
%token <literal> literalCaracterTK  
%token <literal> literalCadenaTK
%token <literal> literalBooleanoTK

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
%token <operador> divEnteraTK
%token <operador> modTK
%token <operador> yTK
%token <operador> oTK
%token <operador> noTK

%token asignacionTK 
%token entoncesTK 
%token <operador> menorIgualTK 
%token <operador> mayorIgualTK 
%token <operador> distintoTK 
%token <operador> igualTK 
%token <operador> menorTK 
%token <operador> mayorTK 
%token <operador> masTK 
%token <operador> menosTK 
%token <operador> porTK 
%token <operador> divisionTK 
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

/* Ordenes de menos prioritario al más prioritario */

/* and y or tienen ascociatividad por la izquierda */
%left oTK
%left yTK

/* Los operadores relacionales no son asociatovios */
%left igualTK distintoTK
%left menorTK mayorTK menorIgualTK mayorIgualTK

/* Los operadores + y - son asociatovios por la izquierda */
%left masTK menosTK

/* Los operadores *, /, // y % son asociatovios por la izquierda */
%left porTK divisionTK modTK divEnteraTK

/* El símbolo de negativo o positivo, es decir, -a o +a, y la negación de booleano es ascociativio por la derecha*/
%right noTK SIGNAL

/* El acceso a las partes de una variable tiene ascociatividad por la izquierda. v.[i] */
%left puntoTK corcheteAbreTK refTK

%%
/* ====================================================
   2. REGLAS GRAMATICALES
   ==================================================== */

desc_algoritmo: algoritmoTK identificadorTK puntoYComaTK cabecera_alg bloque_alg falgoritmoTK puntoTK {
	printf("\n\t-------------\n\t|Programa OK|\n\t-------------\n\n");
};
cabecera_alg: decl_globales decl_a_f decl_ent_sal comentarioPreTK {

};
bloque_alg: bloque comentarioPostTK {

};
decl_globales: 
	declaracion_tipo decl_globales {

	}
	| declaracion_const decl_globales {

	}	
    | /*empty*/	{

	}
	;
decl_a_f:
	accion_d decl_a_f	{

	}
	| funcion_d decl_a_f	{

	}
    | /*empty*/{

	}
	;
bloque: declaraciones instrucciones	{

};
declaraciones:
	declaracion_tipo declaraciones		{

	}
	| declaracion_const declaraciones	{

	}
    | declaracion_var declaraciones		{

	}
    | /*empty*/	{

	}
	;

declaracion_tipo: inicioTipoTK lista_d_tipo finTipoTK puntoYComaTK	{

};
declaracion_const: inicioConstantesTK lista_d_cte finalConstantesTK puntoYComaTK	{

};
declaracion_var: inicioVariablesTK lista_d_var finVariablesTK puntoYComaTK	{

};

lista_d_tipo:
      identificadorTK igualTK d_tipo puntoYComaTK lista_d_tipo	{

	  }
    | /*empty*/	{

	}
    ;

literal:
	literalCadenaTK		{
		$$ = $1;
	}
	| literalCaracterTK	{
		$$ = $1;
	}
	| literalEnteroTK	{
		$$ = $1;
	}
	| literalRealTK		{
		$$ = $1;
	}
	| literalBooleanoTK	{
		$$ = $1;
	}
	;

tipo_base: 
	enteroTK { 
		$$ = ENTERO;
	} 
  	| realTK { 
		$$ = REAL;
	} 
	| booleanoTK { 
		$$ = BOOLEANO;
	} 
	| caracterTK { 
		$$ = CARACTER;
	} 
	| cadenaTK { 
		$$ = CADENA;
	} ;

d_tipo:
    tuplaTK lista_campos ftuplaTK			{
		$$.tipo = DESCONOCIDO;
		$$.tipoDeVariable = TUPLA;
	}
    | tablaTK corcheteAbreTK expresion_t subrangoTK expresion_t corcheteCierraTK deTK d_tipo {
		$$.tipo = $8.tipo;
		$$.tipoDeVariable = TABLA;

		// Los limites deben ser enteros
		if (!valorEnteroDeSimbolo(&ts, $3, &$$.limiteInferior) || !valorEnteroDeSimbolo(&ts, $5, &$$.limiteSuperior)) {
			yyerror("los limites de una tabla deben ser enteros constantes");
			YYABORT;
		}
	}
	| identificadorTK						{
		$$.tipo = DESCONOCIDO;
		$$.tipoDeVariable = SIMPLE;
	}
	| expresion_t subrangoTK expresion_t	{
		$$.tipo = ts.celdas[$1].valorCelda.constante.tipoDelValor;
		$$.tipoDeVariable = SIMPLE;
	}
	| refTK d_tipo							{
		$$ = $2;
	}
	| tipo_base								{
		$$.tipo = $1;
		$$.tipoDeVariable = SIMPLE;
	}
    ;

expresion_t: 
	expresion			{
		$$ = $1;
	}
	| literalCaracterTK {
		$$ = insertarLiteralTS(&ts, $1);
	}
	;

lista_campos:
	identificadorTK dosPuntosTK d_tipo puntoYComaTK lista_campos	{

	}
	| /*empty*/ {

	}
	;

lista_d_cte: 
	identificadorTK igualTK literal puntoYComaTK lista_d_cte	{
		ValorCelda valorCelda;
		valorCelda.constante = $3;
		insertarConstanteTS(&ts, $1, valorCelda);
	}
	| /*empty*/	{

	}
	;

lista_d_var:
	linea_de_var lista_d_var  {

	} 
	| /*empty*/	{

	}
	;

linea_de_var: lista_id dosPuntosTK d_tipo puntoYComaTK {
	for (NodoIdentificador *n = $1; n != NULL; n = n->sig)
		insertarVariableTS(&ts, n->nombre, $3);
	liberaListaIdentificadores($1);
};

lista_id:
	identificadorTK comaTK lista_id		{
		$$ = anadirIdentificador($3, $1);
	}
	| identificadorTK 					{
		$$ = nuevaListaIdentificadores($1);
	}
	;

decl_ent_sal:
	decl_ent				{
		
	}
	| decl_ent decl_sal		{

	}
	| decl_sal				{

	};

decl_ent:entradaTK lista_d_var {
	
};
decl_sal: salidaTK lista_d_var {

};

expresion:
	expresion masTK expresion							{
		// insertarEnTablaDeCuadruplas(&tc, SUMA, $1, $3);
	}
	| expresion menosTK expresion						{
		// insertarEnTablaDeCuadruplas(&tc, RESTA, $1, $3);
	}
	| expresion porTK expresion							{
		// insertarEnTablaDeCuadruplas(&tc, POR, $1, $3);
	}
	| expresion divisionTK expresion					{
		// insertarEnTablaDeCuadruplas(&tc, DIVISION, $1, $3);
	}
	| expresion modTK expresion							{
		// insertarEnTablaDeCuadruplas(&tc, MODULO, $1, $3);
	}
	| expresion divEnteraTK expresion					{
		// insertarEnTablaDeCuadruplas(&tc, DIVISION_ENTERA, $1, $3);
	}
	| literalEnteroTK									{
		$$ = insertarLiteralTS(&ts, $1);
	}
	| literalRealTK										{
		$$ = insertarLiteralTS(&ts, $1);
	}
	| menosTK expresion	%prec SIGNAL					{
		// insertarEnTablaDeCuadruplas(&tc, MENOS_UNIT, $2, {0});
	}
	| masTK expresion	%prec SIGNAL					{
		// insertarEnTablaDeCuadruplas(&tc, MAS_UNIT, $2, {0});
	}
	| expresion yTK expresion							{
		// insertarEnTablaDeCuadruplas(&tc, Y, $1, $3);
	}
	| expresion oTK expresion							{
		// insertarEnTablaDeCuadruplas(&tc, O, $1, $3);
	}
	| noTK expresion 									{
		// insertarEnTablaDeCuadruplas(&tc, NO, $2, {0});
	}
	| literalBooleanoTK									{
		$$ = insertarLiteralTS(&ts, $1);
	}
	| funcion_ll										{
		
	}
	| operando 											{
		$$ = $1;
	}
	| expresion menorTK expresion						{
		// insertarEnTablaDeCuadruplas(&tc, MENOR, $1, $3);
	}
	| expresion mayorTK expresion						{
		// insertarEnTablaDeCuadruplas(&tc, MAYOR, $1, $3);
	}
	| expresion menorIgualTK expresion					{
		// insertarEnTablaDeCuadruplas(&tc, MENOR_IGUAL, $1, $3);
	}
	| expresion mayorIgualTK expresion					{
		// insertarEnTablaDeCuadruplas(&tc, MAYOR_IGUAL, $1, $3);
	}
	| expresion igualTK expresion						{
		// insertarEnTablaDeCuadruplas(&tc, IGUAL, $1, $3);
	}
	| expresion distintoTK expresion					{
		// insertarEnTablaDeCuadruplas(&tc, DISTINTO, $1, $3);
	}
	| parentesisAbreTK expresion parentesisCierraTK		{
		$$ = $2;
	}
	;

operando:
	identificadorTK											{
		$$ = buscarSimbolo(&ts, $1);
		if ($$ == -1) {
			printf("Error: '%s' no esta declarado\n", $1);
			YYABORT;
		}
	}
	| operando puntoTK operando								{
		$$ = $1;
	}
	| operando corcheteAbreTK expresion corcheteCierraTK	{
		$$ = $1;
	}
	| operando refTK										{
		$$ = $1;
	}
	;

instrucciones:
	instruccion puntoYComaTK instrucciones	{

	}
	| instruccion							{

	}
	;

instruccion:
	continuarTK		{

	}
	| asignacion	{

	}
	| alternativa	{

	}
	| iteracion		{

	}
	| accion_ll		{

	}
	;

asignacion:
	operando asignacionTK expresion	{

	}
	;

alternativa:
	siTK expresion entoncesTK instrucciones lista_opciones fsiTK	{

	}
	;

lista_opciones:
	sinoSiTK expresion entoncesTK instrucciones lista_opciones	{

	}
	| /*empty*/	{

	}
	;

iteracion:
	it_cota_fija	{

	}
	| it_cota_exp	{

	}
	;

it_cota_exp:
	inicioMientrasTK expresion hacerTK instrucciones finMientrasTK	{

	}
	;

it_cota_fija:
	paraTK identificadorTK asignacionTK expresion hastaTK expresion hacerTK instrucciones fparaTK	{

	}
	;

accion_d:
	accionTK a_cabecera bloque faccionTK	{

	}
	;

funcion_d:
	funcionTK f_cabecera bloque devTK expresion ffuncionTK	{

	}
	;

a_cabecera:
	identificadorTK parentesisAbreTK d_par_form parentesisCierraTK puntoYComaTK	{

	}
	;

f_cabecera:
	identificadorTK parentesisAbreTK lista_d_var parentesisCierraTK devTK d_tipo puntoYComaTK	{

	}
	;

d_par_form:
	d_p_form puntoYComaTK d_par_form	{

	}
	| /*empty*/	{

	}
	;

d_p_form:
	entradaTK lista_id dosPuntosTK d_tipo			{

	}
	| salidaTK lista_id dosPuntosTK d_tipo			{

	}
	| entradaSalidaTK lista_id dosPuntosTK d_tipo	{

	}
	;

accion_ll:
	identificadorTK parentesisAbreTK l_ll parentesisCierraTK	{

	}
	;

funcion_ll:
	identificadorTK parentesisAbreTK l_ll parentesisCierraTK	{

	}
	;

l_ll:
	expresion comaTK l_ll	{

	}
	| expresion				{

	}
	;

%%
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
	imprimeTablaDeSimbolos(ts);
}

void yyerror(char * s){
	extern int yylineno;
	printf("\tBISON: ERROR en linea %d, %s\n", yylineno, s);
}
