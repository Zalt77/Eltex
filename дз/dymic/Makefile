BIN := calc
V := calc.c
SOURCES := main.c
CC := gcc

$(BIN): $(SOURCES)
		gcc -fPIC $(SOURCES) -c
		gcc -fPIC $(V) -c 
		gcc -shared *.o -o libcalc.so 
		gcc main.o -L. -lcalc -o $(BIN)
		rm -rf *.o
		export LD_LIBRARY_PATH=.; ./$(BIN)
clean:
		rm -rf $(BIN)
		rm -rf libcalc.a