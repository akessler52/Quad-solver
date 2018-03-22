# makefile
# Michael Riess

CFLAGS= -Wall -pedantic -std=c99
CC= gcc
LIBS= -lm

test: test_1

test_1:
	${CC} ${CFLAGS} foutput.c ./test/test_1.c -o test_runner ${LIBS}
	./test_runner
	clean

clean:
	-rm -f ${EXES} core *.log *.o *.exe qsolve t1 *.tar
