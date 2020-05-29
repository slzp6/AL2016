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

all: ex12-1 ex12-2 ex12-3 ex12-4 ex12-5 q12-1 q12-2 

ex12-1: ex12-1.c
	$(CC) $(CFLAGS) ex12-1.c $(LIBS) -o ex12-1

ex12-2: ex12-2.c
	$(CC) $(CFLAGS) ex12-2.c $(LIBS) -o ex12-2

ex12-3: ex12-3.c
	$(CC) $(CFLAGS) ex12-3.c $(LIBS) -o ex12-3

ex12-4: ex12-4.c
	$(CC) $(CFLAGS) ex12-4.c $(LIBS) -o ex12-4

ex12-5: ex12-5.c
	$(CC) $(CFLAGS) ex12-5.c $(LIBS) -o ex12-5

q12-1: q12-1.c
	$(CC) $(CFLAGS) q12-1.c $(LIBS) -o q12-1

q12-2: q12-2.c
	$(CC) $(CFLAGS) q12-2.c $(LIBS) -o q12-2

clean:
	rm -rf *~  ex12-1 ex12-2 ex12-3 ex12-4 ex12-5 q12-1 q12-2 

