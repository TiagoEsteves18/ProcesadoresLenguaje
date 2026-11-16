compilador: parser.tab.c lex.yy.o literal.o literal.h nombresDeTipos.h tablaDeTipos.o tablaDeTipos.h
	gcc parser.tab.c lex.yy.o tablaDeTipos.o literal.o -lfl
	mv a.out compilador

parser.tab.c parser.tab.h: parser.y literal.h nombresDeTipos.h tablaDeTipos.h
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h
	flex scanner.l
	gcc -c lex.yy.c

literal.o: literal.c
	gcc -c literal.c

tablaDeTipos.o: tablaDeTipos.c tablaDeTipos.h literal.h nombresDeTipos.h
	gcc -c tablaDeTipos.c

scanner: scannerBeta.l
	flex scannerBeta.l
	gcc lex.yy.c -lfl
	mv a.out scanner

clean:
	rm *.tab.* lex.yy.c *.o parser.output compilador
