#NDOYE Amadou Lamine
CC		    = /usr/bin/g++
CPPFLAGS      = -g -c -std=c++11
LDFLAGS       = -g

#OMNI_HOME     = /usr
#OMNI_INCLUDES = -I/usr/include -I$(OMNI_HOME)/include/omniORB4  -I$(OMNI_HOME)/include/omnithread 
#OMNI_LIB_DIR  = $(OMNI_HOME)/lib/omniidl
#OMNIIDL       = $(OMNI_HOME)/bin//omniidl
OMNI_HOME     = ./omni_inst
OMNI_INCLUDES = -I$(OMNI_HOME)/include
OMNI_LIB_DIR  = $(OMNI_HOME)/lib
OMNIIDL       = $(OMNI_HOME)/bin/omniidl

INCLUDES      = $(OMNI_INCLUDES)
LIBS          = $(OMNI_INCLUDES) -lomniORB4 -lomnithread -lomniDynamic4
SRC = ./src
INC = ./include
BIN = ./bin
CORBA = ./Corba
GEN = ./generated
#OBJECTS       = drawMeASheepSK.o drawMeASheepDynSK.o drawingManagerImpl.o serveur.o
OBJECTS       = drawMeASheepSK.o drawingManagerImpl.o serveur.o

OBJECTS_PATH = $(BIN)/Serveur.o $(BIN)/drawingManagerImpl.o $(BIN)/drawMeASheepSK.o $(BIN)/drawMeASheepDynSK.o
OMNIORB_CONFIG=./omniORB.cfg

# genere l executable du serveur a besoin des librairy omniidl et des flags -lomniORB4 -lomnithread -lomniDynamic4
all: createDir export $(OBJECTS)
	$(CC) $(LDFLAGS) -L$(OMNI_LIB_DIR) $(BIN)/*.o -o Server  $(LIBS)
	
# compile le Serveur.cpp 
serveur.o : drawingManagerImpl.o  cercle.o ligne.o ellipse.o
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRC)/Serveur.cpp -I$(GEN) -o $(BIN)/Serveur.o
# compile le Serveur.cpp 
cercle.o : 
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRC)/cercle.cpp -I$(GEN) -o $(BIN)/Cercle.o
# compile le Serveur.cpp 
ligne.o : 
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRC)/ligne.cpp -I$(GEN) -o $(BIN)/Ligne.o

ellipse.o :
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRC)/ellipse.cpp -I$(GEN) -o $(BIN)/Ellipse.o


# compile le drawingManagerImpl.cpp
#drawingManagerImpl.o : drawMeASheepSK.o drawMeASheepDynSK.o
drawingManagerImpl.o : drawMeASheepSK.o 
	$(CC) $(CPPFLAGS) $(INCLUDES) $(SRC)/drawingManagerImpl.cpp -o $(BIN)/drawingManagerImpl.o

# compile le SK.cc généré
drawMeASheepSK.o: drawMeASheepSK
	$(CC) $(CPPFLAGS) $(INCLUDES) $(GEN)/drawMeASheepSK.cc -o $(BIN)/drawMeASheepSK.o


	# compile le SK.cc généré
#drawMeASheepDynSK.o: drawMeASheepSK
#	$(CC) $(CPPFLAGS) $(INCLUDES) $(GEN)/drawMeASheepDynSK.cc -o $(BIN)/drawMeASheepDynSK.o

# compile l'idl et met les fichiers générés dans le dossier generated
drawMeASheepSK: $(CORBA)/drawMeASheep.idl
	$(OMNIIDL) -bcxx -Wbexample $(CORBA)/drawMeASheep.idl && mv *.cc *.hh -t $(GEN)



export :
	export OMNIORB_CONFIG=$(OMNIORB_CONFIG)

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