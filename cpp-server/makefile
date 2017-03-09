<<<<<<< HEAD
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
=======
CC		    = /usr/bin/g++
CPPFLAGS      = -g -c
LDFLAGS       = -g
OMNI_HOME     = ./omni_inst
OMNI_INCLUDES = -I$(OMNI_HOME)/include
OMNI_LIB_DIR  = $(OMNI_HOME)/lib
OMNIIDL       = $(OMNI_HOME)/bin/omniidl
INCLUDES      = $(OMNI_INCLUDES)
LIBS          = -lomniORB4 -lomnithread -lomniDynamic4
SRC = ./src
INC = ./include
BIN = ./bin
CORBA = ./Corba
GEN = ./generated
OBJECTS       = serveur.o managerImpl.o drawMeASheepSK.o
OBJECTS_PATH = $(BIN)/Serveur.o $(BIN)/managerImpl.o $(BIN)/drawMeASheepSK.o
OMNIORB_CONFIG=./omniORB.cfg
LD_LIBRARY_PATH=/mnt/c/Users/Lamine/cppCorba/omni_inst/lib:$LD_LIBRARY_PATH


export LD_LIBRARY_PATH LD_LIBRARY_PATH

# genere l executable du serveur a besoin des librairy omniidl et des flags -lomniORB4 -lomnithread -lomniDynamic4
all Server:$(OBJECTS)
	$(CC) $(LDFLAGS) -L$(OMNI_LIB_DIR) $(OBJECTS_PATH) -o Server  $(LIBS)
	
# compile le Serveur.cpp 
	
serveur.o : managerImpl.o drawMeASheepSK.o
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRC)/Serveur.cpp -I$(GEN) -o $(BIN)/Serveur.o

# compile le SK.cc généré
drawMeASheepSK.o: drawMeASheepSK
	$(CC) $(CPPFLAGS) $(INCLUDES) $(GEN)/drawMeASheepSK.cc -o $(BIN)/drawMeASheepSK.o

# compile le managerImpl.cpp
managerImpl.o : $(INC)/managerImpl.h
	$(CC) $(CPPFLAGS) $(INCLUDES)  $(SRC)/managerImpl.cpp -o $(BIN)/managerImpl.o

# compile l'idl et met les fichiers générés dans le dossier generated
drawMeASheepSK: $(CORBA)/drawMeASheep.idl
	$(OMNI_HOME)/bin/omniidl -bcxx  $(CORBA)/drawMeASheep.idl && mv *.cc *.hh -t $(GEN)

clean: 
	rm $(BIN)/*.o
	rm $(GEN)/*.hh
	rm $(GEN)/*.cc
>>>>>>> 6e2734af8c0c26f05c632bb8817aa451b15b12dc
	rm -fr *.o
	rm -fr core
	rm -fr *.hh
	rm -fr *SK.cc
	rm -fr Server

rebuild:
	make clean
	make