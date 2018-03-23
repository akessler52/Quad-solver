CC = gcc
CFLAGS = -std=c11 -Wall -pedantic
LDFLAGS = -lm

wline.o: wline.c

test: test_1

test_1:
	${CC} ${CFLAGS} -g wline.c ./test/cunit.c ./test/run_test_1.c -o test_runner ${LDFLAGS}
	${CC} ${CFLAGS} -g ./test/cunit.c ./test/check_test_1.c -o test_checker ${LDFLAGS}
	./test_runner > ./test/test_cases.txt
	./test_checker < ./test/test_cases.txt
	make clean

clean:
	-rm -f *.log *.o *.exe test_runner test_checker test/test_cases.txt *.tar
