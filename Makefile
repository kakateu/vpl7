CC := g++
FLAGS := -I include/ -Wall
LFLAGS := -lm
BUILDDIR := build
SRCDIR := src
TARGET := main.out

all: clean main
	$(CC) $(FLAGS) $(LFLAGS) *.o -o $(TARGET)

main: intruso
	$(CC) $(FLAGS) -c main.cpp -o main.o

intruso: 
	$(CC) $(FLAGS) -c intruso.cpp -o intruso.o

clean:
	rm -rf build/*
	rm -rf build/$(TARGET)