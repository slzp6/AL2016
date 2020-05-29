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

all: ex7-1 ex7-2 q7-1 q7-2 q7-3 

ex7-1: ex7-1.c
	$(CC) $(CFLAGS) ex7-1.c $(LIBS) -o ex7-1

ex7-2: ex7-2.c
	$(CC) $(CFLAGS) ex7-2.c $(LIBS) -o ex7-2

q7-1: q7-1.c
	$(CC) $(CFLAGS) q7-1.c $(LIBS) -o q7-1

q7-2: q7-2.c
	$(CC) $(CFLAGS) q7-2.c $(LIBS) -o q7-2

q7-3: q7-3.c
	$(CC) $(CFLAGS) q7-3.c $(LIBS) -o q7-3

clean:
	rm -rf *~  ex7-1 ex7-2 q7-1 q7-2 q7-3 

