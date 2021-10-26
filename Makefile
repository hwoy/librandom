CC=gcc
CFLAGS=-O2 -std=c11 -pedantic -Wall
BIN=rand.exe

.PHONY: all clean

all: $(BIN)

$(BIN): main.o lcg.o mslcg.o
	$(CC) -o $(BIN) main.o lcg.o mslcg.o

lcg.o: lcg.c lcg.h
main.o: main.c random.h lcg.h mslcg.h
mslcg.o: mslcg.c lcg.h mslcg.h

clean:
	rm *.o $(BIN)
