%{
    #include <stdio.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Definicion de la funcion yyerror
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
%}

/* ====================================================
   1. DECLARACIONES DE BISON (Tokens y Tipos)
   ==================================================== */

%token letraTK
%token cifraTK
%token identificadorTK
 
%token comentarioTK 
%token comentarioPreTK	
%token comentarioPostTK	
 
%token literalEnteroTK 
%token literalRealTK  
%token literalCaracterTK  
%token literalCadenaTK
%token literalBooleanoTK

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

/* Ordenes de menos prioritario al más prioritario */

/* and y or tienen ascociatividad por la izquierda */
%left oTK
%left yTK

/* La negación tiene ascociatividad por la derecha */
%right noTK

/* Los operadores relacionales no son asociatovios */
%nonassoc igualTK distintoTK menorTK mayorTK menorIgualTK mayorIgualTK

/* Los operadores + y - son asociatovios por la izquierda */
%left masTK menosTK

/* Los operadores *, /, // y % son asociatovios por la izquierda */
%left porTK divisionTK modTK divEnteraTK

/* El símbolo de negativo o positivo, es decir, -a o +a, es ascociativio por la derecha*/
%right SIGNAL

/* El acceso a las partes de una variable tiene ascociatividad por la izquierda. v.[i] */
%left puntoTK corcheteAbreTK refTK

%%
/* ====================================================
   2. REGLAS GRAMATICALES
   ==================================================== */

desc_algoritmo: algoritmoTK identificadorTK puntoYComaTK cabecera_alg bloque_alg falgoritmoTK puntoTK {
	printf("\n\t-------------\n\t|Programa OK|\n\t-------------\n");
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
		
	}
	| literalCaracterTK	{

	}
	| literalEnteroTK	{

	}
	| literalRealTK		{

	}
	| literalBooleanoTK	{

	}
	;

tipo_base: 
	enteroTK { 

	} 
  	| realTK { 

	} 
	| booleanoTK { 

	} 
	| caracterTK { 

	} 
	| cadenaTK { 

	} ;

d_tipo:
      tuplaTK lista_campos ftuplaTK			{

	  }
    | tablaTK corcheteAbreTK expresion_t subrangoTK expresion_t corcheteCierraTK deTK d_tipo {

	}
	| identificadorTK						{

	}
	| expresion_t subrangoTK expresion_t	{

	}
	| refTK d_tipo							{

	}
	| tipo_base								{

	}
    ;

expresion_t: 
	expresion			{

	}
	| literalCaracterTK {

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

	}
	| /*empty*/	{

	}
	;

lista_d_var:
	lista_id dosPuntosTK d_tipo puntoYComaTK lista_d_var	{

	}
	| /*empty*/	{

	}
	;

lista_id:
	identificadorTK comaTK lista_id		{

	}
	| identificadorTK 					{

	}
	;

decl_ent_sal:
	decl_ent				{
		
	}
	| decl_ent decl_sal		{

	}
	| decl_sal				{

	}
	;

decl_ent: entradaTK lista_d_var {

};
decl_sal: salidaTK lista_d_var {

};

/* 
	PREGUNTAR: Se puede hacer algo con esta parte? Ideas que se nos ocurrierion:
	- Juntar expresion, exp_a y exp_b. Esto al final no, da problema ya que no se puede diferenciar cuando es una expresion relacional (Creo)
	- Meter en expresion operando y parentesisAbreTK expresion parentesisCierraTK (y quitar eso de exp_a y exp_b). 
		Además crear exp_rel para diferenciar entre expresiones aritmáticas con las realcionales.
		En exp_a y exp_b usar expresion ¿?
		Diferenciar una expresion aritmética de una expresion relacional
 */

expresion:
	exp_a			{

	}
	| exp_b			{

	}
	| funcion_ll	{

	}
	| operando 		{

	}
	| parentesisAbreTK expresion parentesisCierraTK	{

	}
	;

exp_a:
	expresion masTK expresion							{

	}
	| expresion menosTK expresion						{

	}
	| expresion porTK expresion							{

	}
	| expresion divisionTK expresion					{

	}
	| expresion modTK expresion								{

	}
	| expresion divEnteraTK expresion						{

	}
	| literalEnteroTK									{

	}
	| literalRealTK										{

	}
	| menosTK expresion	%prec SIGNAL					{

	}
	| masTK expresion	%prec SIGNAL					{

	}
	;

exp_b:
	expresion yTK expresion								{

	}
	| expresion oTK expresion							{

	}
	| noTK expresion 									{

	}
	| literalBooleanoTK									{

	}
	| expresion oprel expresion							{

	}
	;

oprel:
	menorTK			{

	}
	| mayorTK		{

	}
	| menorIgualTK	{

	}
	| mayorIgualTK	{

	}
	| igualTK		{

	}
	| distintoTK	{

	}
	;

/* PREGUNTAR: Cambiar operando puntoTK operando por operando puntoTK identificadorTK para quitar ambiguedad */
operando:
	identificadorTK											{

	}
	| operando puntoTK operando								{

	}
	| operando corcheteAbreTK expresion corcheteCierraTK	{

	}
	| operando refTK										{

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