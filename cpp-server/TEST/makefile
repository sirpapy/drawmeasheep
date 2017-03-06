CFLAGS = -Wall -std=c++11 #-Werror -Weffc++ -lpthread
SRC = ./src
INC = ./include
BIN = ./bin
CORBA = ../Corba
GEN = ./generated
LDFLAGS       = -g
CC		    = g++
OMNI_INCLUDES = -I/home/sirpapy/Bureau/omniORB-4.2.1/include/omniORB4/  -I/home/sirpapy/Bureau/omniORB-4.2.1/include
OMNI_LIB_DIR  = /home/sirpapy/Bureau/omniORB-4.2.1/lib
OMNIIDL       = /home/sirpapy/Bureau/omniORB-4.2.1/bin/omniidl
LIBS		  = -L$(OMNI_LIB_DIR) -lomniORB4 -lomnithread -lomniDynamic4
OBJECTS       = drawMeASheep.o




all : main

main : server.o TestSK.o managerImpl.o
	$(CXX) -o $@ $^ $(LIBS)

# compile le SK.cc généré
#drawMeASheepSK.o: drawMeASheepSK
#	$(CC) -c $(CPPFLAGS) $(GEN)/drawMeASheepSK.cc -o $(BIN)/drawMeASheepSK.o

server.o: server.cpp managerImpl.h

managerImpl.h: Test.hh

managerImpl.o : managerImpl.h Test.hh
#	$(CC) -c $(CFLAGS) managerImpl.cpp -o managerImpl.o $(OMNI_INCLUDES) $(LIBS)

# compile l'idl et met les fichiers générés dans le dossier generated

TestSK.o : TestSK.cc Test.hh

Test.hh TestSK.cc: Test.idl
	$(OMNIIDL) -bcxx Test.idl

clean: 
	rm *.o
	rm main
	rm -fr *.o
	rm -fr core
	rm -fr *.hh
	rm -fr *SK.cc
	rm -fr Server

rebuild:
	make clean
	make

.cpp.o:
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(OMNI_INCLUDES)

.cc.o:
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(OMNI_INCLUDES)
