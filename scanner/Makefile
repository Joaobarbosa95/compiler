all: scanner

scanner: scanner.c error.c 
	gcc -o scanner scanner.c error.c token.c

error.o: error.c error.h
	gcc error.c 

token.o: token.c token.h
	gcc token.c

clean: 
	rm scanner

