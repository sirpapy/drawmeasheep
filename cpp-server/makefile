CFLAGS = -Werror -Wall -Weffc++ -std=c++11
SRC = ./src
INC = ./include
BIN = ./bin
CORBA = ../Corba
GEN = ./generated
LDFLAGS       = -g
CC		    = g++
OMNI_HOME     = /usr/bin/omniidl
OMNI_INCLUDES = 
OMNI_LIB_DIR  = $/mnt/d/omniORB/lib
OMNIIDL       = /usr/lib/omniidl
INCLUDES      = $(OMNI_INCLUDES)
LIBS		  = -lomniORB4 -lomnithread -lomniDynamic4 -lomniCodeSets4 -lCOS4 -lCOSDynamic4
OBJECTS       = drawMeASheep.o 




all : drawMeASheepSK main

main : managerImpl.o drawMeASheepSK.o
	$(CC)  $(CFLAGS) -o Serveur.o $(SRC)/Serveur.cpp $(BIN)/managerImpl.o $(BIN)/drawMeASheepSK.o

# compile le SK.cc généré
drawMeASheepSK.o: drawMeASheepSK
	$(CC) -c $(CPPFLAGS) $(GEN)/drawMeASheepSK.cc -o $(BIN)/drawMeASheepSK.o

managerImpl.o : $(INC)/managerImpl.h
	$(CC) -c $(CFLAGS) $(SRC)/managerImpl.cpp -o $(BIN)/managerImpl.o

# compile l'idl et met les fichiers générés dans le dossier generated
drawMeASheepSK: $(CORBA)/drawMeASheep.idl
	$(OMNI_HOME) -bcxx $(CORBA)/drawMeASheep.idl #&& mv *.cc *.hh -t $(GEN)

clean: 
	rm $(BIN)/*.o
	rm main
	rm $(GEN)/*
	rm -fr *.o
	rm -fr core
	rm -fr *.hh
	rm -fr *SK.cc
	rm -fr Server

rebuild:
	make clean
	make