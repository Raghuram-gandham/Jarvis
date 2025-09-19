CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRC = src/main.c
OUT = bin/jarvis

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	rm -rf bin
