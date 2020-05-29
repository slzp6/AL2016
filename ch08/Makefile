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

all: ex8-1 ex8-2 ex8-3 q8-1 q8-2 

ex8-1: ex8-1.c
	$(CC) $(CFLAGS) ex8-1.c $(LIBS) -o ex8-1

ex8-2: ex8-2.c
	$(CC) $(CFLAGS) ex8-2.c $(LIBS) -o ex8-2

ex8-3: ex8-3.c
	$(CC) $(CFLAGS) ex8-3.c $(LIBS) -o ex8-3

q8-1: q8-1.c
	$(CC) $(CFLAGS) q8-1.c $(LIBS) -o q8-1

q8-2: q8-2.c
	$(CC) $(CFLAGS) q8-2.c $(LIBS) -o q8-2

clean:
	rm -rf *~  ex8-1 ex8-2 ex8-3 q8-1 q8-2 

