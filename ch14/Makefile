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

all: ex14-1 ex14-2 q14-1 q14-2 

ex14-1: ex14-1.c
	$(CC) $(CFLAGS) ex14-1.c $(LIBS) -o ex14-1

ex14-2: ex14-2.c
	$(CC) $(CFLAGS) ex14-2.c $(LIBS) -o ex14-2

q14-1: q14-1.c
	$(CC) $(CFLAGS) q14-1.c $(LIBS) -o q14-1

q14-2: q14-2.c
	$(CC) $(CFLAGS) q14-2.c $(LIBS) -o q14-2

clean:
	rm -rf *~  ex14-1 ex14-2 q14-1 q14-2 

