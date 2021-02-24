EXE := hejsan
OBJ := hmap.o \
	list.o \

%.o : src/%.c
	gcc -std=c11 -c -g -Wall $^ -o $@

${EXE} : ${OBJ}
	gcc -std=c11 -g -Wall $^ test/tests.c -o $@ -lcunit

run : ${EXE}
	valgrind --leak-check=full --track-origins=yes ./${EXE}
