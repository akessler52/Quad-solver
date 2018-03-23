CC= gcc
CFLAGS= -Wall -g3 -pedantic -std=c11
LIBS= -lm

lineRead.o: lineRead.c

test: test_1

test_1:
	${CC} ${CFLAGS} lineRead.c ./test/cunit.c ./test/test_1.c -o test_runner ${LIBS}
	./test_runner < ./test/test_cases.txt
	make clean

clean:
	-rm -f *.log *.o *.exe test_runner *.tar
