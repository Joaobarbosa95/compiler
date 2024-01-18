all: scanner

scanner: scanner.c error.c 
	gcc -o scanner scanner.c error.c

error.o: error.c error.h
	gcc error.c 

clean: 
	rm scanner

