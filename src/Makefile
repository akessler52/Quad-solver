CC = gcc
SOURCE = main/main.c rLine/lineRead.o qsolve/quadraticFormula.o qsolve/citardarqFormula.o validate/inputValid.o
CFLAGS = -std=c11 -Wall -pedantic
OBJ = rLine qsolve validate
NAME = $(basename $(SOURCE))

LIBEMB = -lm

build:
	for obj in ${OBJ}; do cd $$obj; make; cd ..; done
	$(CC) $(CFLAGS) $(SOURCE) $(LIBEMB) -o qsolver

clean:
	for obj in ${OBJ}; do cd $$obj; make clean; cd ..; done
	rm qsolver
