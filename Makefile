CC = g++

HDR = $(wildcard *.h)
OBJ = $(patsubst %.cpp, %.o, $(wildcard *.cpp))
BIN = main

all: main

main: $(OBJ)
	$(CC) -o $(BIN) -Wall $(OBJ)

%.o: %.c $(HDR)
	$(CC) -o $@ -c $<

.PHONY: clean

clean: 
	rm -f *.o
	rm -f $(BIN)