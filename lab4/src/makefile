CC=gcc
CFLAGS=-I.
all: parallel_sum

parallel_sum : utils.o Sum.o utils.h Sum.h
	$(CC) -pthread -o parallel_sum utils.o Sum.o parallel_sum.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

Sum : Sum.h
	$(CC) -o Sum.o -c Sum.c $(CFLAGS)

clean :
	rm utils.o Sum.o parallel_sum
