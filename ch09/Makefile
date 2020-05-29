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

all: ex9-1 ex9-2 ex9-3 q9-1 q9-2 q9-3 q9-4 

ex9-1: ex9-1.c
	$(CC) $(CFLAGS) ex9-1.c $(LIBS) -o ex9-1

ex9-2: ex9-2.c
	$(CC) $(CFLAGS) ex9-2.c $(LIBS) -o ex9-2

ex9-3: ex9-3.c
	$(CC) $(CFLAGS) ex9-3.c $(LIBS) -o ex9-3

q9-1: q9-1.c
	$(CC) $(CFLAGS) q9-1.c $(LIBS) -o q9-1

q9-2: q9-2.c
	$(CC) $(CFLAGS) q9-2.c $(LIBS) -o q9-2

q9-3: q9-3.c
	$(CC) $(CFLAGS) q9-3.c $(LIBS) -o q9-3

q9-4: q9-4.c
	$(CC) $(CFLAGS) q9-4.c $(LIBS) -o q9-4

clean:
	rm -rf *~  ex9-1 ex9-2 ex9-3 q9-1 q9-2 q9-3 q9-4 

