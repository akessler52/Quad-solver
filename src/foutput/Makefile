CFLAGS= -Wall -pedantic -std=c11
CC= gcc
LIBS= -lm

foutput.o: foutput.c

test: test_1

test_1:
	${CC} ${CFLAGS} foutput.c ./test/cunit.c ./test/test_1.c -o test_runner ${LIBS}
	./test_runner
	make clean

clean:
	-rm -f *.log *.o *.exe test_runner *.tar
