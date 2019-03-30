# -------------------------------------
# Makefile; AL2016 (v1.00)             
# (c)2016 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -O2
LIBS = -lm

all: ex2-1 ex2-2 ex2-3 q2-1 q2-2 q2-3 q2-3a 

ex2-1: ex2-1.c
	$(CC) $(CFLAGS) $(LIBS) ex2-1.c -o ex2-1

ex2-2: ex2-2.c
	$(CC) $(CFLAGS) $(LIBS) ex2-2.c -o ex2-2

ex2-3: ex2-3.c
	$(CC) $(CFLAGS) $(LIBS) ex2-3.c -o ex2-3

q2-1: q2-1.c
	$(CC) $(CFLAGS) $(LIBS) q2-1.c -o q2-1

q2-2: q2-2.c
	$(CC) $(CFLAGS) $(LIBS) q2-2.c -o q2-2

q2-3: q2-3.c
	$(CC) $(CFLAGS) $(LIBS) q2-3.c -o q2-3

q2-3a: q2-3a.c
	$(CC) $(CFLAGS) $(LIBS) q2-3a.c -o q2-3a

clean:
	rm -rf *~  ex2-1 ex2-2 ex2-3 q2-1 q2-2 q2-3 q2-3a 

