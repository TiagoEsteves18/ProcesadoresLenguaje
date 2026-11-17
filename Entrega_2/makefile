compilador: parser.tab.c lex.yy.o literal.o literal.h nombresDeTipos.h tablaDeSimbolos.o tablaDeSimbolos.h listaIdentificadores.o listaIdentificadores.h
	gcc parser.tab.c lex.yy.o tablaDeSimbolos.o listaIdentificadores.o literal.o -lfl
	mv a.out compilador

parser.tab.c parser.tab.h: parser.y literal.h nombresDeTipos.h tablaDeSimbolos.h
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h
	flex scanner.l
	gcc -c lex.yy.c

literal.o: literal.c
	gcc -c literal.c

tablaDeSimbolos.o: tablaDeSimbolos.c tablaDeSimbolos.h literal.h nombresDeTipos.h
	gcc -c tablaDeSimbolos.c

scanner: scannerBeta.l
	flex scannerBeta.l
	gcc lex.yy.c -lfl
	mv a.out scanner

listaIdentificadores.o: listaIdentificadores.c listaIdentificadores.h
	gcc -c listaIdentificadores.c

clean:
	rm *.tab.* lex.yy.c *.o parser.output compilador
