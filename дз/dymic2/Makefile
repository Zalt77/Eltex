BIN := main
V := calc.c
SOURCES := main.c
C := PWD


$(BIN): $(SOURCES)
		gcc -fPIC $(SOURCES) -c
		gcc -fPIC *.c -c 
		gcc -shared *.o -o libcalc.so 
		gcc main.o -o $(BIN) -ldl -Wl,-rpath,.
		
				
clean:
		rm -rf *.o
		rm -rf $(BIN)
		rm -rf libcalc.so