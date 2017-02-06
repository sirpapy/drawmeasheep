CFLAGS = -Werror -Wall -Weffc++ -std=c++11
SRC = ./src
INC = ./include
BIN = ./bin

all: main_figure

main_figure : main.o cercle.hpp ligne.hpp figure.hpp point.h
	g++ $(CFLAGS) main.o point.o figure.o ligne.o cercle.o image.o -o main_figure

main.o: image.o cercle.o ligne.o figure.o cercle.hpp ligne.hpp figure.hpp point.h
	g++ -c $(CFLAGS) main.cpp

image.o: figure.o point.o point.h image.hpp
	g++ -c $(CFLAGS) image.cpp

cercle.o : figure.o point.o point.h cercle.hpp
	g++ -c $(CFLAGS) cercle.cpp

ligne.o : figure.o point.o point.h ligne.hpp
	g++ -c $(CFLAGS) ligne.cpp

figure.o : point.o figure.hpp
	g++ -c $(CFLAGS) figure.cpp

point.o : point.h
	g++ -c $(CFLAGS) point.cpp

clean: 
	rm *.o
	rm main_figure

rebuild:
	make clean
	make