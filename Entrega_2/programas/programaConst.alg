algoritmo constantes;
const
	MAX = 10;
	PI = 3.1416;
	MES = 'Enero';
	INICIAL = "E";
	DEPURAR = falso;
fconst;
	ent 
		n: entero;
	sal 
		area: real;
		dentro: booleano;
{Prec: n = N AND N >= 0}
	const
		MIN = 1;
	fconst;
	var
		i, a: entero;
		b: real; 
	fvar;
	para i := MIN hasta MAX hacer
		v[i] := i * n
	fpara;
	area := PI * n * n;
	dentro := n >= MIN y n <= MAX y no DEPURAR
{Post: area = PI * N * N AND dentro = (MIN <= N <= MAX)}
falgoritmo.