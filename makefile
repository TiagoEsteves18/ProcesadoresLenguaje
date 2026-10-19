PRUEBA = ./alg/alg1.txt

all: clean scanner

scanner: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl -o scanner

prueba_scanner: scanner
	cat $(PRUEBA) | ./scanner

clean:
	rm -f lex.yy.c scanner
