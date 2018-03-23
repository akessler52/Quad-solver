CC = gcc
CFLAGS = -std=c11 -Wall -pedantic
LDFLAGS = -lm

inputValid.o: inputValid.c

test: test_1

test_1:
	${CC} ${CFLAGS} -g inputValid.c ./test/run_test_1.c -o test_runner ${LDFLAGS}
	./test_runner
	make clean

clean:
	-rm -f *.log *.o *.exe test_runner *.tar
