SRC = $(wildcard src/*.c)


build:
	gcc -std=c11 -g -Wall $(SRC)
run:
	valgrind --leak-check=full --track-origins=yes ./a.out

all:
	gcc -std=c11 -g -Wall $(SRC) test/tests.c -lcunit

test: all
	valgrind --leak-check=full --track-origins=yes ./a.out
