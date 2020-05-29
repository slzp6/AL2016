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

all: ex2-1 ex2-2 ex2-3 q2-1 q2-2 q2-3 q2-3a 

ex2-1: ex2-1.c
	$(CC) $(CFLAGS) ex2-1.c $(LIBS) -o ex2-1

ex2-2: ex2-2.c
	$(CC) $(CFLAGS) ex2-2.c $(LIBS) -o ex2-2

ex2-3: ex2-3.c
	$(CC) $(CFLAGS) ex2-3.c $(LIBS) -o ex2-3

q2-1: q2-1.c
	$(CC) $(CFLAGS) q2-1.c $(LIBS) -o q2-1

q2-2: q2-2.c
	$(CC) $(CFLAGS) q2-2.c $(LIBS) -o q2-2

q2-3: q2-3.c
	$(CC) $(CFLAGS) q2-3.c $(LIBS) -o q2-3

q2-3a: q2-3a.c
	$(CC) $(CFLAGS) q2-3a.c $(LIBS) -o q2-3a

clean:
	rm -rf *~  ex2-1 ex2-2 ex2-3 q2-1 q2-2 q2-3 q2-3a 

