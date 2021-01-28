CXX = gcc
CXXFLAGS = -Wall -Werror -pedantic -std=c99 -Iinclude

all: test clean run

test: main.o dll.o
	$(CXX) $(CXXFLAGS) main.o dll.o -o bin/test

main.o:
	$(CXX) $(CXXFLAGS) -c tests/main.c

dll.o:
	$(CXX) $(CXXFLAGS) -c src/dll.c

.PHONY: clean run

run:
	bin/test
clean:
	rm -rf *.o