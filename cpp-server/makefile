#NDOYE Amadou Lamine
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
LD_LIBRARY_PATH=$(OMNI_LIB_DIR):$LD_LIBRARY_PATH

# genere l executable du serveur a besoin des librairy omniidl et des flags -lomniORB4 -lomnithread -lomniDynamic4
all: createDir export $(OBJECTS)
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


	
export :
		export OMNIORB_CONFIG=$(OMNIORB_CONFIG)
		export LD_LIBRARY_PATH=$(LD_LIBRARY_PATH)

clean: 
	rm $(BIN)/*.o -f
	rm $(GEN)/*.hh -f
	rm $(GEN)/*.cc -f
	rm  $(OMNI_HOME)/omniNamesLogdir/*.bak -f
	rm  $(OMNI_HOME)/omniNamesLogdir/*.log -f
	rm -fr *.o -f
	rm -fr core -f
	rm -fr *.hh -f
	rm -fr *SK.cc -f
	rm -fr Server -f

createDir:
	mkdir $(GEN) -p
	mkdir $(BIN) -p
	mkdir $(OMNI_HOME) -p
	mkdir $(OMNI_HOME)/omniNamesLogdir -p
  
rebuild:
	make clean
	make