CC := g++
FLAGS := -I include/ -Wall
LFLAGS := -lm
BUILDDIR := build
SRCDIR := src
TARGET := main.out

all: clean main
	$(CC) $(FLAGS) $(LFLAGS) $(BUILDDIR)/*.o -o $(BUILDDIR)/$(TARGET)

main: intruso
	$(CC) $(FLAGS) -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o

intruso: 
	$(CC) $(FLAGS) -c $(SRCDIR)/intruso.cpp -o $(BUILDDIR)/intruso.o

clean:
	rm -rf build/*
	rm -rf build/$(TARGET)