CC=gcc
CFLAGS=-O2 -std=c11 -pedantic -Wall
BIN=rand.exe
AR=ar
LIB=librandom.a

.PHONY: all clean

all: $(BIN)

$(BIN): main.o $(LIB)
	$(CC) -o $(BIN) main.o $(LIB)

$(LIB): lcg.o mslcg.o
	$(AR) crv $(LIB) lcg.o mslcg.o

lcg.o: lcg.c lcg.h
main.o: main.c random.h lcg.h mslcg.h
mslcg.o: mslcg.c lcg.h mslcg.h

clean:
	rm *.o $(BIN) $(LIB)
