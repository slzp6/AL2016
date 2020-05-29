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

all: ex11-1 ex11-2 q11-1 q11-2 q11-3 q11-4 

ex11-1: ex11-1.c
	$(CC) $(CFLAGS) ex11-1.c $(LIBS) -o ex11-1

ex11-2: ex11-2.c
	$(CC) $(CFLAGS) ex11-2.c $(LIBS) -o ex11-2

q11-1: q11-1.c
	$(CC) $(CFLAGS) q11-1.c $(LIBS) -o q11-1

q11-2: q11-2.c
	$(CC) $(CFLAGS) q11-2.c $(LIBS) -o q11-2

q11-3: q11-3.c
	$(CC) $(CFLAGS) q11-3.c $(LIBS) -o q11-3

q11-4: q11-4.c
	$(CC) $(CFLAGS) q11-4.c $(LIBS) -o q11-4

clean:
	rm -rf *~  ex11-1 ex11-2 q11-1 q11-2 q11-3 q11-4 

