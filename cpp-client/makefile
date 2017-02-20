CFLAGS = -Werror -Wall -Weffc++ -std=c++11
SRC = ./src
INC = ./include
BIN = ./bin

all: main_figure

main_figure : main $(INC)/cercle.hpp $(INC)/ligne.hpp $(INC)/figure.hpp $(INC)/point.h
	g++ $(CFLAGS) $(BIN)/main.o $(BIN)/point.o $(BIN)/figure.o $(BIN)/ligne.o $(BIN)/cercle.o $(BIN)/image.o -o main_figure

main: image cercle ligne figure $(INC)/cercle.hpp $(INC)/ligne.hpp $(INC)/figure.hpp $(INC)/point.h
	g++ -c $(CFLAGS) $(SRC)/main.cpp -o $(BIN)/main.o

image: figure point $(INC)/point.h $(INC)/image.hpp
	g++ -c $(CFLAGS) $(SRC)/image.cpp -o $(BIN)/image.o

cercle : figure point $(INC)/point.h $(INC)/cercle.hpp
	g++ -c $(CFLAGS) $(SRC)/cercle.cpp -o $(BIN)/cercle.o

ligne : figure point $(INC)/point.h $(INC)/ligne.hpp
	g++ -c $(CFLAGS) $(SRC)/ligne.cpp -o $(BIN)/ligne.o

figure : point $(INC)/figure.hpp
	g++ -c $(CFLAGS) $(SRC)/figure.cpp -o $(BIN)/figure.o

point : $(INC)/point.h
	g++ -c $(CFLAGS) $(SRC)/point.cpp -o $(BIN)/point.o

clean: 
	rm $(BIN)/*.o
	rm main_figure

rebuild:
	make clean
	make