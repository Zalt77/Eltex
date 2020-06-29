BIN := byte
SOURCES := byte.c
BIN2 := bytetwo
SOURCES2 := bytetwo.c
CC := gcc
.PHONY := clean

all: $(BIN) $(BIN2)

$(BIN): $(SOURCES)
		$(CC) $(SOURCES) -o $(BIN) -g
$(BIN2): $(SOURCES2)
		$(CC) $(SOURCES2) -o $(BIN2) -g

clean:
		rm -rf $(BIN)
		rm -rf $(BIN2)
