all: main

main: main.cpp
    g++ -Wall -g -o main main.cpp

clean:
    rm -f main

check: main
    ./main