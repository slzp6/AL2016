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

all: q15-1 q15-2 

q15-1: q15-1.c
	$(CC) $(CFLAGS) q15-1.c $(LIBS) -o q15-1

q15-2: q15-2.c
	$(CC) $(CFLAGS) q15-2.c $(LIBS) -o q15-2

clean:
	rm -rf *~  q15-1 q15-2 

