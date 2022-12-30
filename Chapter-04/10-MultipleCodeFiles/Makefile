all: main my_library
	g++ main.o my_library.o -o tables

main:
	g++ -c main.cpp -o main.o

my_library:
	g++ -c my_library.cpp -o my_library.o

clean:
	rm main.o
	rm my_library.o
	rm tables
