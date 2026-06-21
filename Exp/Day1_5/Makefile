CXX=g++

all: hello.o add.o 
	g++ hello.o add.o -o add

hello.o: add.o
	g++ -C hello.cpp -o hello.o

add.o:
	g++ -C add.cpp -o add.o

clean:
	rm -rf *.o