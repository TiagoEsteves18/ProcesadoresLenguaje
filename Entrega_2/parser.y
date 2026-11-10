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

%left oTK
%left yTK
%right noTK
%nonassoc igualTK distintoTK menorTK mayorTK menorIgualTK mayorIgualTK
%left masTK menosTK
%left porTK divisionTK modTK divEnteraTK
%right UMENOS
%left puntoTK corcheteAbreTK refTK

%%
/* ====================================================
   2. REGLAS GRAMATICALES
   ==================================================== */

desc_algoritmo: algoritmoTK identificadorTK puntoYComaTK cabecera_alg bloque_alg falgoritmoTK puntoTK {
	printf("OK");
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
	| literalCaracterDR {

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
	- Juntar expresion, exp_a y exp_b. Problema --> No se puede diferenciar cuando es una expresion relacional
	- Meter en expresion operando y parentesisAbreTK expresion parentesisCierraTK (y quitar eso de exp_a y exp_b). 
		Además crear exp_rel para diferenciar entre expresiones de suma y así con las realcionales.
		En exp_a y exp_b usar expresion¿?
 */

expresion:
	exp_a			{

	}
	| exp_b			{

	}
	| funcion_ll	{

	}
	;

exp_a:
	exp_a masTK exp_a							{

	}
	| exp_a menosTK exp_a						{

	}
	| exp_a porTK exp_a							{

	}
	| exp_a divisionTK exp_a					{

	}
	| exp_a modTK exp_a							{

	}
	| exp_a divEnteraTK exp_a					{

	}
	| parentesisAbreTK exp_a parentesisCierraTK	{

	}
	| operando									{

	}
	| literalEnteroTK							{

	}
	| literalRealTK								{

	}
	| menosTK exp_a %prec UMENOS				{

	}
	| masTK exp_a %prec UMENOS					{

	}
	;

exp_b:
	exp_b yTK exp_b								{

	}
	| exp_b oTK exp_b							{

	}
	| noTK exp_b								{

	}
	| operando									{

	}
	| literalBooleanoTK							{

	}
	| expresion oprel expresion					{

	}
	| parentesisAbreTK exp_b parentesisCierraTK	{

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
	| operando puntoTK operando						{

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

/* ---------- 4.1.6 Acciones y funciones ---------- */
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