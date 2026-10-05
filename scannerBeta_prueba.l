 //Archivo: scannerBeta.l
 //Ejemplo de archivo .l que permite crear un scanner que a partir de una entrada  
 // escrita en el fichero estandard de entrada devuelve una secuencia de tokens validos 
 // para la gram�tica explicada en el ejemplo.
 //Autor: Federico Fari�a
 //Fecha: 27/9/23
 //Version: 0.0.1
 //Copyright: Este ejemplo se hace para que lo puedan analizar los alumnos de 
 // la asignatura de procesadores de lenguaje de la UPNA. El autor prohibe 
 // expresamente la copia/uso de este fichero salvo para los alumnos de la 
 // asignatura. Estos pueden usarlo como muestra para desarrollar la practica,
 // pero para ning�n otro tipo de uso.
 // AVISO: el codigo puede contener errores (por despiste o cometidos queriendo). Nunca
 // debe creerse al 100% el material que no haya testado.

 //Para poder probar el ejemplo debe:
 //1-Usar flex ejecutando flex scannerBeta.l
 //2-Compilar el fichero generado por flex con la opcion -lfl (-ll en OSx)
 //3-Ejecutar el fichero resultante
 //4-Introducir lo que quiera que lea el scanner mediante el teclado

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
 // A veces, por claridad del fichero resultante, es mejor ponerlas todas
 // y no usar expresiones regulares en la siguiente seccion (cabe destacar
 // que mejora la calidad del codigo). Otras, por velocidad en la escritura
 // del fichero se usan las estrictamente necesarias. En este ejemplo
 // estoy en un punto intermedio. Solo una de las que aparecen me resulta
 // realmente necesaria para evitar lineas de codigo. Pero para ejemplificar
 // opciones me ha parecido bien dejar algunas mas (la mitad).
 //
 // Ah, esto es un comentario que va directamente al .c
 //
 // Ah, y no pongo acentos por que no quiero. Evito todo lo que puede dar 
 // problemas al leer el fichero desde otro SO. Aunque os creais que no, sigue
 // siendo un problema en funcion de que useis

letraDR [a-zA-Z]
cifraDR [0-9]
identificadorDR {letraDR}({letraDR}|{cifraDR})*

comentarioDR	\{([^}]|\/\})*\}

literalEnteroDR [+-]?[0-9]+ 
literalRealDR [+-]?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?[rR]? 
literalCaracterDR \"([^\"\\]|\\.)\" 
literalCadenaDR '([^']|\/')*'

algoritmoDR (?i:algoritmo)
falgoritmoDR (?i:falgoritmo)
siDR (?i:si)
fsiDR (?i:fsi)
verdaderoDR (?i:verdadero)
falsoDR (?i:falso)

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

%%

 //PARTE 2: Reglas
 //Aqui se indica que codigo tiene que ejecutarse al leer cada patron definido
 //No todas las definiciones regulares necesitan reglas. Por ejemplo, la ultima
 //que he puesto solo se emplea para que no se haga echo de los caracteres que
 //no cumplan ninguna definicion regular

 // Comentarios
{comentarioDR} { //Los comentarios no generan tokens }

{algoritmoDR} { printf("(algoritmoTK, )\n"); } 
{falgoritmoDR} { printf("(falgoritmoTK, )\n"); } 
{siDR} { printf("(siTK, )\n"); } 
{fsiDR} { printf("(fsiTK, )\n");  }
{verdaderoDR} { printf("(literalBooleanoTK, verdadero)\n"); }
{falsoDR} { printf("(literalBooleanoTK, falso)\n"); }

{literalEnteroDR} { printf("(literalEnteroTK, %d)\n", atoi(yytext)); }
{literalRealDR} { printf("(literalRealTK, %f)\n", atof(yytext)); } 
{literalCaracterDR} { printf("(literalCaracterTK, %c)\n", yytext[1]); } 
{literalCadenaDR} { printf("(literalCadenaTK, %s)\n", yytext); } 

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
 
{identificadorDR} { printf("(identificadorTK, %s)\n", yytext); }

[ \t\n\r]+ { //Los espacios, tabuladores y saltos de linea no generan tokens } 

. { printf("(ERROR, caracter no reconocido: %s)\n", yytext); }

%%

 //PARTE 3: CODIGO ADICIONAL
 //En la parte anterior se ha hecho uso de funciones que el compilador debe conocer. 
 //Aqu� se programan esas funciones. Su prototipo debe aparecer en la parte de arriba
 //(salvo el main, en el caso que exista)
 //Como podeis ver, ni siquiera pongo un main. La libreria de flex proporciona un main
 //por defecto que usa stdin como fichero de entrada y stdout como fichero de salida 

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}

