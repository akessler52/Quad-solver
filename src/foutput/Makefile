# makefile
# Michael Riess

CFLAGS= -Wall -pedantic -std=c99
CC= gcc
LIBS= -lm
SRC = Makefile cunit.c cunit.h mock_qsolve_sqrt.c mock_qsolve_sqrt.h \
  qsolve_interface.c \
  qsolve_roots.c qsolve_roots.h \
  qsolve_sqrt.c qsolve_sqrt.h \
  t1.c t2.c

test: test_1

test_1:
	${CC} ${CFLAGS} foutput.c ./test/test_1.c -o test_runner ${LIBS}
	./test_runner
	clean

clean:
	-rm -f ${EXES} core *.log *.o *.exe qsolve t1 *.tar
