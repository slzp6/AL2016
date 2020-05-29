# -------------------------------------
# Makefile; AL2016 (v1.01)             
# (c)2016 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2
# CFLAGS = -Wall -O2
LIBS = -lm

all: ex4-1 ex4-2 

ex4-1: ex4-1.c
	$(CC) $(CFLAGS) ex4-1.c $(LIBS) -o ex4-1

ex4-2: ex4-2.c
	$(CC) $(CFLAGS) ex4-2.c $(LIBS) -o ex4-2

clean:
	rm -rf *~  ex4-1 ex4-2 

