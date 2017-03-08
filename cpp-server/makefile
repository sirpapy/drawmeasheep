CC		    = /usr/bin/g++
CPPFLAGS      = -g
LDFLAGS       = -g
CFLAGS = -Werror -Wall -Weffc++ -std=c++11
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
OBJECTS       = drawMeASheep.o 




all : server

server : managerImpl.o drawMeASheepSK.o
	$(CC) -c $(CPPFLAGS) $(INCLUDES) -I$(GEN) -o Serveur.o $(SRC)/Serveur.cpp

# compile le SK.cc généré
drawMeASheepSK.o: drawMeASheepSK
	$(CC) -c $(CPPFLAGS) $(INCLUDES) $(GEN)/drawMeASheepSK.cc -o $(BIN)/drawMeASheepSK.o

managerImpl.o : $(INC)/managerImpl.h
	$(CC) -c $(CPPFLAGS) $(INCLUDES)  $(SRC)/managerImpl.cpp -o $(BIN)/managerImpl.o

# compile l'idl et met les fichiers générés dans le dossier generated
drawMeASheepSK: $(CORBA)/drawMeASheep.idl
	$(OMNI_HOME)/bin/omniidl -bcxx $(CORBA)/drawMeASheep.idl && mv *.cc *.hh -t $(GEN)

clean: 
	rm $(BIN)/*.o
	rm main
	rm $(GEN)/* -f
	rm -fr *.o
	rm -fr core
	rm -fr *.hh
	rm -fr *SK.cc
	rm -fr Server

rebuild:
	make clean
	make