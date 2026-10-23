 //Archivo: scanner.l
 // Archivo .l que permite crear un scanner que a partir de una entrada  
 // escrita en el fichero estandard de entrada devuelve una secuencia de tokens validos 
 // para la gramatica del lenguaje ProAlg.
 //Autor: Tiago Filipe Esteves Iria y Juan Pablo Jiménez Arenas
 //Fecha: 19/10/26
 //Version: 1.0.0

 //Uso de make para compilacion y uso:
 //  make -> genera el ejecutable scanner (flex + gcc -lfl)
 //  make prueba -> ejecuta el scanner con programa1.alg
 //  make prueba PRUEBA=programa2.alg -> ejecuta el scanner con otro fichero
 //  make pruebas -> ejecuta el scanner con todos los programaX.alg
 //  make clean -> borra los ficheros que se generan
 //  Tambien se puede ejecutar a mano: 
 // 	./scanner < programa1.alg
 // 	cat programa1.alg | ./scanner

 //PARTE 1: ZONA DE DECLARACIONES
 //PARTE 1.1: Constantes manifiestas y codigo necesario para el .c que genera flex 

%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	
%}

 // PARTE 1.2: Zona de definiciones regulares

letraDR [a-zA-Z]
cifraDR [0-9]
identificadorDR {letraDR}({letraDR}|{cifraDR})*

comentarioDR	\{([^}]|\/\})*\}
comentarioPreDR	\{(?i:Prec\:\ )([^}]|\/\})*\}
comentarioPostDR	\{(?i:Post\:\ )([^}]|\/\})*\}

literalEnteroDR [0-9]+ 
literalRealDR [0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?[rR]? 
literalCaracterDR \".\"
literalCadenaDR '([^']|\/')*'

algoritmoDR (?i:algoritmo)
falgoritmoDR (?i:falgoritmo)
siDR (?i:si)
fsiDR (?i:fsi)
verdaderoDR (?i:verdadero)
falsoDR (?i:falso)
entradaDR (?i:ent)
salidaDR (?i:sal)
enteroDR (?i:entero)
inicioVariablesDR (?i:var)
finVariablesDR (?i:fvar)
inicioConstantesDR (?i:const)
finalConstantesDR (?i:fconst)
inicioMientrasDR (?i:mientras)
finMientrasDR (?i:fmientras)
accionDR (?i:accion)
faccionDR (?i:faccion)
funcionDR (?i:funcion)
ffuncionDR (?i:ffuncion)
devDR (?i:dev)
entradaSalidaDR (?i:e\/s)
inicioTipoDR (?i:tipo)
finTipoDR (?i:ftipo)
tuplaDR (?i:tupla)
ftuplaDR (?i:ftupla)
tablaDR (?i:tabla)
deDR (?i:de)
refDR (?i:ref)
realDR (?i:real)
booleanoDR (?i:booleano)
caracterDR (?i:caracter)
cadenaDR (?i:cadena)
paraDR (?i:para)
fparaDR (?i:fpara)
hastaDR (?i:hasta)
hacerDR (?i:hacer)
continuarDR (?i:continuar)
divEnteraDR (?i:div)
modDR (?i:mod)
yDR (?i:y)
oDR (?i:o)
noDR (?i:no)

asignacionDR := 
entoncesDR -> 
menorIgualDR <= 
mayorIgualDR >= 
distintoDR <> 
igualDR = 
menorDR < 
mayorDR > 
masDR \+ 
menosDR - 
porDR \* 
divisionDR \/ 
puntoYComaDR ; 
comaDR , 
puntoDR \. 
dosPuntosDR : 
parentesisAbreDR \( 
parentesisCierraDR \) 
corcheteAbreDR \[
corcheteCierraDR \]
dobleComillaDR \"
comillaSimpleDR \'
subrangoDR \.\.
sinoSiDR \[\]

%%

 //PARTE 2: Reglas
 //Aqui se indica que codigo tiene que ejecutarse al leer cada patron definido

{comentarioPreDR} { printf("(comentarioPreTK, )\n"); }
{comentarioPostDR} { printf("(comentarioPostTK, )\n"); }
{comentarioDR} { 
	//Los comentarios no generan tokens 
}


{algoritmoDR} { printf("(algoritmoTK, )\n"); } 
{falgoritmoDR} { printf("(falgoritmoTK, )\n"); } 
{siDR} { printf("(siTK, )\n"); } 
{fsiDR} { printf("(fsiTK, )\n");  }
{verdaderoDR} { printf("(literalBooleanoTK, verdadero)\n"); }
{falsoDR} { printf("(literalBooleanoTK, falso)\n"); }
{entradaDR} { printf("(entradaTK, )\n"); }
{salidaDR} { printf("(salidaTK, )\n"); }
{enteroDR} { printf("(enteroTK, )\n"); }
{inicioVariablesDR} { printf("(inicioVariablesTK, )\n"); }
{finVariablesDR} { printf("(finVariablesTK, )\n"); }
{inicioConstantesDR} { printf("(inicioConstantesTK, )\n"); }
{finalConstantesDR} { printf("(finConstantesTK, )\n"); }
{inicioMientrasDR} {printf("(inicioMientrasTK, )\n"); }
{finMientrasDR} {printf("(finMientrasTK, )\n"); }
{accionDR} { printf("(accionTK, )\n"); }
{faccionDR} { printf("(faccionTK, )\n"); }
{funcionDR} { printf("(funcionTK, )\n"); }
{ffuncionDR} { printf("(ffuncionTK, )\n"); }
{devDR} { printf("(devTK, )\n"); }
{entradaSalidaDR} { printf("(entradaSalidaTK, )\n"); }
{inicioTipoDR} { printf("(inicioTipoTK, )\n"); }
{finTipoDR} { printf("(finTipoTK, )\n"); }
{tuplaDR} { printf("(tuplaTK, )\n"); }
{ftuplaDR} { printf("(ftuplaTK, )\n"); }
{tablaDR} { printf("(tablaTK, )\n"); }
{deDR} { printf("(deTK, )\n"); }
{refDR} { printf("(refTK, )\n"); }
{realDR} { printf("(realTK, )\n"); }
{booleanoDR} { printf("(booleanoTK, )\n"); }
{caracterDR} { printf("(caracterTK, )\n"); }
{cadenaDR} { printf("(cadenaTK, )\n"); }
{paraDR} { printf("(paraTK, )\n"); }
{fparaDR} { printf("(fparaTK, )\n"); }
{hastaDR} { printf("(hastaTK, )\n"); }
{hacerDR} { printf("(hacerTK, )\n"); }
{continuarDR} { printf("(continuarTK, )\n"); }
{divEnteraDR} { printf("(divEnteraTK, )\n"); }
{modDR} { printf("(modTK, )\n"); }
{yDR} { printf("(yTK, )\n"); }
{oDR} { printf("(oTK, )\n"); }
{noDR} { printf("(noTK, )\n"); }

{asignacionDR} { printf("(asignacionTK, )\n"); } 
{entoncesDR} { printf("(entoncesTK, )\n"); } 
{menorIgualDR} { printf("(menorIgualTK, )\n"); } 
{mayorIgualDR} { printf("(mayorIgualTK, )\n"); } 
{distintoDR} { printf("(distintoTK, )\n"); } 
{igualDR} { printf("(igualTK, )\n"); } 
{menorDR} { printf("(menorTK, )\n"); } 
{mayorDR} { printf("(mayorTK, )\n"); } 
{masDR} { printf("(masTK, )\n"); } 
{menosDR} { printf("(menosTK, )\n"); } 
{porDR} { printf("(porTK, )\n"); } 
{divisionDR} { printf("(divisionTK, )\n"); }
{puntoYComaDR} { printf("(puntoYComaTK, )\n"); }
{comaDR} { printf("(comaTK, )\n"); } 
{puntoDR} { printf("(puntoTK, )\n"); } 
{dosPuntosDR} { printf("(dosPuntosTK, )\n"); } 
{parentesisAbreDR} { printf("(parentesisAbreTK, )\n"); } 
{parentesisCierraDR} { printf("(parentesisCierraTK, )\n"); } 
{corcheteAbreDR} { printf("(corcheteAbreTK, )\n"); } 
{corcheteCierraDR} { printf("(corcheteCierraTK, )\n"); } 
{dobleComillaDR} { printf("(dobleComillaTK, )\n"); }
{comillaSimpleDR} { printf("(comillaSimpleTK, )\n"); }
{subrangoDR} { printf("(subrangoTK, )\n"); }
{sinoSiDR} { printf("(sinoSiTK, )\n"); }

{literalEnteroDR} { printf("(literalEnteroTK, %d)\n", atoi(yytext)); }
{literalRealDR} { printf("(literalRealTK, %f)\n", atof(yytext)); } 
{literalCaracterDR} { printf("(literalCaracterTK, %c)\n", yytext[1]); } 
{literalCadenaDR} { printf("(literalCadenaTK, %s)\n", yytext); } 

{identificadorDR} { printf("(identificadorTK, %s)\n", yytext); }

[ \t\r\n]+ ;

. { printf("(ERROR, caracter no reconocido: %s)\n", yytext); }

%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}

