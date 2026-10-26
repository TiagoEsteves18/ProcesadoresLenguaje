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

{comentarioPreDR} { return comentarioPreTK; }
{comentarioPostDR} { return comentarioPostTK; }
{comentarioDR} { 
	//Los comentarios no generan tokens 
}


{algoritmoDR} { return algoritmoTK; } 
{falgoritmoDR} { return falgoritmoTK; } 
{siDR} { return siTK; } 
{fsiDR} { return fsiTK;  }
{verdaderoDR} { return literalBooleanoTK; }
{falsoDR} { return literalBooleanoTK; }
{entradaDR} { return entradaTK; }
{salidaDR} { return salidaTK; }
{enteroDR} { return enteroTK; }
{inicioVariablesDR} { return inicioVariablesTK; }
{finVariablesDR} { return finVariablesTK; }
{inicioConstantesDR} { return inicioConstantesTK; }
{finalConstantesDR} { return finConstantesTK; }
{inicioMientrasDR} {return inicioMientrasTK; }
{finMientrasDR} {return finMientrasTK; }
{accionDR} { return accionTK; }
{faccionDR} { return faccionTK; }
{funcionDR} { return funcionTK; }
{ffuncionDR} { return ffuncionTK; }
{devDR} { return devTK; }
{entradaSalidaDR} { return entradaSalidaTK; }
{inicioTipoDR} { return inicioTipoTK; }
{finTipoDR} { return finTipoTK; }
{tuplaDR} { return tuplaTK; }
{ftuplaDR} { return ftuplaTK; }
{tablaDR} { return tablaTK; }
{deDR} { return deTK; }
{refDR} { return refTK; }
{realDR} { return realTK; }
{booleanoDR} { return booleanoTK; }
{caracterDR} { return caracterTK; }
{cadenaDR} { return cadenaTK; }
{paraDR} { return paraTK; }
{fparaDR} { return fparaTK; }
{hastaDR} { return hastaTK; }
{hacerDR} { return hacerTK; }
{continuarDR} { return continuarTK; }
{divEnteraDR} { return divEnteraTK; }
{modDR} { return modTK; }
{yDR} { return yTK; }
{oDR} { return oTK; }
{noDR} { return noTK; }

{asignacionDR} { return asignacionTK; } 
{entoncesDR} { return entoncesTK; } 
{menorIgualDR} { return menorIgualTK; } 
{mayorIgualDR} { return mayorIgualTK; } 
{distintoDR} { return distintoTK; } 
{igualDR} { return igualTK; } 
{menorDR} { return menorTK; } 
{mayorDR} { return mayorTK; } 
{masDR} { return masTK; } 
{menosDR} { return menosTK; } 
{porDR} { return porTK; } 
{divisionDR} { return divisionTK; }
{puntoYComaDR} { return puntoYComaTK; }
{comaDR} { return comaTK; } 
{puntoDR} { return puntoTK; } 
{dosPuntosDR} { return dosPuntosTK; } 
{parentesisAbreDR} { return parentesisAbreTK; } 
{parentesisCierraDR} { return parentesisCierraTK; } 
{corcheteAbreDR} { return corcheteAbreTK; } 
{corcheteCierraDR} { return corcheteCierraTK; } 
{dobleComillaDR} { return dobleComillaTK; }
{comillaSimpleDR} { return comillaSimpleTK; }
{subrangoDR} { return subrangoTK; }
{sinoSiDR} { return sinoSiTK; }

{literalEnteroDR} { return literalEnteroTK; }
{literalRealDR} { return literalRealTK; } 
{literalCaracterDR} { return literalCaracterTK; } 
{literalCadenaDR} { return literalCadenaTK; } 

{identificadorDR} { return identificadorTK; }

[ \t\r\n]+ ;

. { return ERROR, caracter no reconocido; }

%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}

