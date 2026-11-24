%{
    #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <sys/stat.h>
	#include <errno.h>

	#include "nombresDeTipos.h"
	#include "nombresDeOperadores.h"
	#include "literal.h"
	#include "tablaDeSimbolos.h"
	#include "listaIdentificadores.h"
	#include "tablaDeCuadruplas.h"

	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Definicion de la funcion yyerror
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeSimbolos ts; //Es donde guardaremos los simbolos
	TablaDeCuadruplas tc; //Es donde guardaremos las cuadruplas 

	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
	#define CARPETA_SALIDA "data"

	NombreDeTipoT tipoAritmetico(int sid1, int sid2) {
		if (tipoDeSimbolo(&ts, sid1) == REAL || tipoDeSimbolo(&ts, sid2) == REAL)
			return REAL;
		return ENTERO;
	}

	int esNumerico(int sid) {
		NombreDeTipoT t = tipoDeSimbolo(&ts, sid);
		return t == ENTERO || t == REAL;
	}

	void errorDeTipos(char *operador) {
		extern int yylineno;
		printf("Error en linea %d: tipos incompatibles en '%s'\n", yylineno, operador);
		exit(1);
	}

	int sonComparables(int sid1, int sid2){
		if(esNumerico(sid1) && esNumerico(sid2))
			return 1;
		return tipoDeSimbolo(&ts, sid1) == tipoDeSimbolo(&ts, sid2); 
	}

	int esAsignable(int destino, int origen) {
		NombreDeTipoT td = tipoDeSimbolo(&ts, destino);
		NombreDeTipoT to = tipoDeSimbolo(&ts, origen);
		return td == to || (td == REAL && to == ENTERO);
	}

	void nombreBase(const char *ruta, char *base, size_t tam) {
		const char *inicio = strrchr(ruta, '/');
		inicio = (inicio == NULL) ? ruta : inicio + 1;
		snprintf(base, tam, "%s", inicio);
		char *punto = strrchr(base, '.');
		if (punto != NULL)
			*punto = '\0';
	}

	int creaCarpetaSalida(const char *base, char *carpeta, size_t tam) {
		if (mkdir(CARPETA_SALIDA, 0755) != 0 && errno != EEXIST)
			return -1;
		snprintf(carpeta, tam, CARPETA_SALIDA "/%s", base);
		if (mkdir(carpeta, 0755) != 0 && errno != EEXIST)
			return -1;
		return 0;
	}

	FILE *abreFicheroSalida(const char *carpeta, const char *prefijo, const char *base) {
		char ruta[512];
		snprintf(ruta, sizeof(ruta), "%s/%s_%s.txt", carpeta, prefijo, base);
		return fopen(ruta, "w");
	}

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
		if (!valorEnteroDeSimbolo(&ts, $3, &$$.info.tabla.limiteInferior) || !valorEnteroDeSimbolo(&ts, $5, &$$.info.tabla.limiteSuperior)) {
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

// PREGUNTAR: Cuando paramos ejecucion mostramos tablas (YYABORT) o no (exit(-1)) Ahora mismo está mezclado

lista_d_cte: 
	identificadorTK igualTK literal puntoYComaTK lista_d_cte	{
		ValorCelda valorCelda;
		valorCelda.constante = $3;
		//PREGUNTAR: ¿Hace falta que paremos ejecucion si se repite la variable en la entrada y en la salida? Ejemplo, programa 1
		if(insertarConstanteTS(&ts, $1, valorCelda) == -1)
			YYABORT;
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
	for (int i = 0; i<$1.cantidad; i++)
	//PREGUNTAR: ¿Hace falta que paremos ejecucion si se repite la variable en la entrada y en la salida? Ejemplo, programa 1
		if (insertarVariableTS(&ts, $1.nodos[i], $3) == -1)
			YYABORT;
	//liberaListaIdentificadores($1);
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
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("+");
		$$ = nuevoTemporal(&ts, tipoAritmetico($1, $3));
		gen(&tc, "+", $1, $3, $$);
	}
	| expresion menosTK expresion						{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("-");
		$$ = nuevoTemporal(&ts, tipoAritmetico($1, $3));
		gen(&tc, "-", $1, $3, $$);
	}
	| expresion porTK expresion							{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("*");
		$$ = nuevoTemporal(&ts, tipoAritmetico($1, $3));
		gen(&tc, "*", $1, $3, $$);
	}
	| expresion divisionTK expresion					{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("/");
		$$ = nuevoTemporal(&ts, tipoAritmetico($1, $3));
		gen(&tc, "/", $1, $3, $$);
	}
	| expresion modTK expresion							{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("%");
		$$ = nuevoTemporal(&ts, tipoAritmetico($1, $3));
		gen(&tc, "%", $1, $3, $$);
	}
	| expresion divEnteraTK expresion					{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("//");
		$$ = nuevoTemporal(&ts, tipoAritmetico($1, $3));
		gen(&tc, "//", $1, $3, $$);
	}
	| literalEnteroTK									{
		$$ = insertarLiteralTS(&ts, $1);
	}
	| literalRealTK										{
		$$ = insertarLiteralTS(&ts, $1);
	}
	| menosTK expresion	%prec SIGNAL					{
		if (!esNumerico($2))
			errorDeTipos("- unit");
		$$ = nuevoTemporal(&ts, tipoDeSimbolo(&ts, $2));
		gen(&tc, "-u", $2, VACIO, $$);
	}
	| masTK expresion	%prec SIGNAL					{
		if (!esNumerico($2))
			errorDeTipos("+ unit");
		$$ = nuevoTemporal(&ts, tipoDeSimbolo(&ts, $2));
		gen(&tc, "+u", $2, VACIO, $$);
	}
	| expresion yTK expresion							{
		if (tipoDeSimbolo(&ts, $1) != BOOLEANO || tipoDeSimbolo(&ts, $3) != BOOLEANO)
			errorDeTipos("y");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, "y", $1, $3, $$);
	}
	| expresion oTK expresion							{
		if (tipoDeSimbolo(&ts, $1) != BOOLEANO || tipoDeSimbolo(&ts, $3) != BOOLEANO)
			errorDeTipos("o");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, "o", $1, $3, $$);
	}
	| noTK expresion 									{
		if (tipoDeSimbolo(&ts, $2) != BOOLEANO)
			errorDeTipos("no");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, "no", $2, VACIO, $$);
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
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("<");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, "<", $1, $3, $$);
	}
	| expresion mayorTK expresion						{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos(">");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, ">", $1, $3, $$);
	}
	| expresion menorIgualTK expresion					{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos("<=");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, "<=", $1, $3, $$);
	}
	| expresion mayorIgualTK expresion					{
		if (!esNumerico($1) || !esNumerico($3))
			errorDeTipos(">=");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, ">=", $1, $3, $$);
	}
	| expresion igualTK expresion						{
		if (!sonComparables($1, $3))
			errorDeTipos("=");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, "=", $1, $3, $$);
	}
	| expresion distintoTK expresion					{
		if (!sonComparables($1, $3))
			errorDeTipos("<>");
		$$ = nuevoTemporal(&ts, BOOLEANO);
		gen(&tc, "<>", $1, $3, $$);
	}
	| parentesisAbreTK expresion parentesisCierraTK		{
		$$ = $2;
	}
	;

operando:
	identificadorTK											{
		$$ = buscarSimbolo(&ts, $1);
		if ($$ == -1) {
			extern int yylineno;
			printf("Error en linea %d: '%s' no esta declarado\n", yylineno, $1);
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
		if (ts.celdas[$1].tipoSimbolo == CONSTANTE) {
			extern int yylineno;
			printf("Error en linea %d: no se puede asignar a la constante '%s'\n", yylineno, ts.celdas[$1].nombre);
			exit(1);
		}
		if (!esAsignable($1, $3))
			errorDeTipos(":=");
		gen(&tc, ":=", $3, VACIO, $1);
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
	char *ruta = (argc > 0) ? argv[0] : "stdin";
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	ts = nuevaTablaDeSimbolos();
	tc = nuevaTablaDeCuadruplas();
	yyparse();

	/* Pantalla */
	imprimeTablaDeSimbolos(stdout, ts);
	escribeCodigoIntermedio(stdout, tc, ts);

	/* Ficheros */
	char base[256], carpeta[300];
	nombreBase(ruta, base, sizeof(base));
	if (creaCarpetaSalida(base, carpeta, sizeof(carpeta)) == 0) {
		FILE *f = abreFicheroSalida(carpeta, "tabla_simbolos", base);
		if (f != NULL) { imprimeTablaDeSimbolos(f, ts); fclose(f); }
		f = abreFicheroSalida(carpeta, "codigo_intermedio", base);
		if (f != NULL) { escribeCodigoIntermedio(f, tc, ts); fclose(f); }
	} 
	else {
		printf("No se ha podido crear la carpeta %s\n", CARPETA_SALIDA);
	}		
}

void yyerror(char * s){
	extern int yylineno;
	printf("\tBISON: ERROR en linea %d, %s\n", yylineno, s);
}
