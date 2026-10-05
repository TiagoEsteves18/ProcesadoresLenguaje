PRUEBA = alg1.txt

all: scannerBeta scanner

scannerBeta: scannerBeta.l
	flex scannerBeta.l
	gcc lex.yy.c -lfl -o scannerBeta

scanner: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl -o scanner

prueba_scannerBeta: scannerBeta
	cat $(PRUEBA) | ./scannerBeta

clean:
	rm -f lex.yy.c scanner scannerBeta
