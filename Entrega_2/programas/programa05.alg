algoritmo tiposCorrectos;
	ent a, b: entero; r: real; c, d: booleano;
	sal x: real; ok: booleano;
{Prec: programa sin errores de tipos}
	var
		e: entero;
	fvar;
	e := a + b * 2;
	e := -a + (b - 1) div 3;
	e := a mod b;
	x := r / 2.5 + a;
	x := a;
	ok := a < b y r >= 1.5;
	ok := no c o d;
	ok := a = b;
	ok := c <> d
{Post: todas las operaciones tienen tipos compatibles}
falgoritmo.
