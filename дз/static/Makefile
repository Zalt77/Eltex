BIN := calc
V := main.o
SOURCES := main.c
CC := gcc

$(BIN): $(SOURCES)
		gcc *.c -c 
		ar rc libcalc.a *.o
		gcc $(SOURCES) -o $(BIN) -L. -lcalc
clean:
		rm -rf $(BIN)
		rm -rf libcalc.a
		rm -rf *.o