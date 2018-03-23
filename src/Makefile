CC = gcc
SOURCE = main/main.c rline/lineRead.o wline/wline.o qsolve/citardarqFormula.o \
			validate/inputValid.o foutput/foutput.o
CFLAGS = -std=c11 -Wall -pedantic
OBJ = rline qsolve validate wline foutput
NAME = $(basename $(SOURCE))
LIBEMB = -lm

build:
	for obj in ${OBJ}; do cd $$obj; make; cd ..; done
	$(CC) $(CFLAGS) $(SOURCE) $(LIBEMB) -o qsolver

clean:
	for obj in ${OBJ}; do cd $$obj; make clean; cd ..; done
	rm qsolver
