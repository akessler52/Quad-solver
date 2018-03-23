CC = gcc
CFLAGS = -std=c11 -Wall -pedantic -c
LDFLAGS = -lm

citardarqFormula.o: citardarqFormula.c

test: test_1

test_1:
	${CC} -std=c11 -Wall -pedantic citardarqFormula.c ./test/cunit.c ./test/test_1.c -o test_runner ${LDFLAGS}
	./test_runner
	make clean

clean:
	-rm -f core *.log *.o *.exe test_runner *.tar
