# wildcard es una función que coge los archivos que cumplen con el patrón que está dentro de los paréntesis
PROGRAMAS = $(wildcard programa*.alg)
PRUEBA    = programa1.alg

all: clean scanner

scanner: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl -o scanner

prueba: scanner
	./scanner < $(PRUEBA)

pruebas: scanner
	@for f in $(PROGRAMAS); do \
		echo "===== $$f ====="; \
		./scanner < $$f; \
		echo "=================================================="; \
	done

clean:
	rm -f lex.yy.c scanner

