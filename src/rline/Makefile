# makefile
# Michael Riess

CFLAGS= -Wall -g3 -pedantic -std=c99
CC= gcc
LIBS= -lm

test: test_1

test_1:
	${CC} ${CFLAGS} lineRead.c ./test/cunit.c ./test/test_1.c -o test_runner ${LIBS}
	./test_runner < ./test/test_cases.txt
	clean

clean:
	-rm -f ${EXES} core *.log *.o *.exe qsolve t1 *.tar
