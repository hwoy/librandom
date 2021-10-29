CC=gcc
CFLAGS=-O2 -std=c11 -pedantic -Wall
BIN=dice.exe
AR=ar
LIB=librandom.a

.PHONY: all clean

all: $(BIN)

$(BIN): main.o $(LIB)
	$(CC) -o $(BIN) main.o $(LIB)

$(LIB): lcg.o msvcrtrng.o glibcrng.o random.o
	$(AR) crv $(LIB) lcg.o msvcrtrng.o glibcrng.o random.o



clean:
	rm *.o $(BIN) $(LIB)



glibcrng.o: glibcrng.c glibcrng.h lcg.h
lcg.o: lcg.c lcg.h
main.o: main.c random.h lcg.h msvcrtrng.h glibcrng.h
msvcrtrng.o: msvcrtrng.c lcg.h msvcrtrng.h
random.o: random.c random.h lcg.h msvcrtrng.h glibcrng.h
