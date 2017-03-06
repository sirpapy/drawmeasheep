CFLAGS = -Wall -std=c++11 #-Werror -Weffc++
SRC = ./src
INC = ./include
BIN = ./bin
CORBA = ../Corba
GEN = ./generated
LDFLAGS       = -g
CC		    = g++
OMNI_HOME     = /usr/bin/omniidl
OMNI_INCLUDES = -I/mnt/d/omniORB/include -I/mnt/d/omniORB/include/omniORB4
OMNI_LIB_DIR  = /mnt/d/omniORB/lib
OMNIIDL       = /usr/lib/omniidl
INCLUDES      = $(OMNI_INCLUDES)
LIBS		  = -L$(OMNI_LIB_DIR) -lomniORB4 -lomnithread -lomniDynamic4 -lomniCodeSets4 -lCOS4 -lCOSDynamic4
OBJECTS       = drawMeASheep.o 




all : main

main : managerImpl.o TestSK.o
	$(CC) $(CFLAGS) managerImpl.o TestSK.o -o main $(OMNI_INCLUDES) $(LIBS)

# compile le SK.cc généré
#drawMeASheepSK.o: drawMeASheepSK
#	$(CC) -c $(CPPFLAGS) $(GEN)/drawMeASheepSK.cc -o $(BIN)/drawMeASheepSK.o

managerImpl.o : managerImpl.h
	$(CC) -c $(CFLAGS) managerImpl.cpp -o managerImpl.o $(OMNI_INCLUDES) $(LIBS)

# compile l'idl et met les fichiers générés dans le dossier generated

TestSK.o : Test.hh testgen
	$(CC) -c  $(CFLAGS) TestSK.cc -o TestSK.o $(OMNI_INCLUDES) $(LIBS)

testgen: Test.idl
	$(OMNI_HOME) -bcxx Test.idl

clean: 
	rm *.o
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