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

all: ex13-1 ex13-2 ex13-3 ex13-4 q13-1 q13-2 q13-3 q13-4 

ex13-1: ex13-1.c
	$(CC) $(CFLAGS) ex13-1.c $(LIBS) -o ex13-1

ex13-2: ex13-2.c
	$(CC) $(CFLAGS) ex13-2.c $(LIBS) -o ex13-2

ex13-3: ex13-3.c
	$(CC) $(CFLAGS) ex13-3.c $(LIBS) -o ex13-3

ex13-4: ex13-4.c
	$(CC) $(CFLAGS) ex13-4.c $(LIBS) -o ex13-4

q13-1: q13-1.c
	$(CC) $(CFLAGS) q13-1.c $(LIBS) -o q13-1

q13-2: q13-2.c
	$(CC) $(CFLAGS) q13-2.c $(LIBS) -o q13-2

q13-3: q13-3.c
	$(CC) $(CFLAGS) q13-3.c $(LIBS) -o q13-3

q13-4: q13-4.c
	$(CC) $(CFLAGS) q13-4.c $(LIBS) -o q13-4

clean:
	rm -rf *~  ex13-1 ex13-2 ex13-3 ex13-4 q13-1 q13-2 q13-3 q13-4 

