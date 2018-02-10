CFLAGS = -std=c99 -Wall -g

main: list.h list.o node.o

list.o: node.h node.o
