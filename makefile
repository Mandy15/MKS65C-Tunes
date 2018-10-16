all: test.o lib.o list.o
	gcc -o test test.o lib.o list.o

test.o: test.c
	gcc -c test.c

lib.o: lib.c lib.h
	gcc -c lib.c

list.o: list.c list.h
	gcc -c list.c

clean:
	rm test test.o lib.o list.o

run:
	./test
