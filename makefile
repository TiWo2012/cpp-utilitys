CC = g++
CFLAGS = -Wall -g

all: main

main: main.cpp
    $(CC) $(CFLAGS) -o main main.cpp

clean:
    rm -f main

check: main
    ./main