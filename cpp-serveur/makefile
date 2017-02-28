CC		    = /usr/bin/g++
CPPFLAGS      = -g -c CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS       = -g
OMNI_HOME     = /usr/bin/omniidl
OMNI_INCLUDES = 
OMNI_LIB_DIR  = $/mnt/d/omniORB/lib
OMNIIDL       = $(OMNI_HOME)
INCLUDES      = $(OMNI_INCLUDES)
LIBS		  = -lomniORB4 -lomnithread -lomniDynamic4
OBJECTS       = drawMeASheep.o 

all : main

drawMeASheepSK.o: drawMeASheepSK.cc drawMeASheep.hh
		$(CC) $(CPPFLAGS) $(INCLUDES) drawMeASheepSK.cc

main : drawMeASheep.hh
	g++ -c $(CFLAGS) Serveur.cpp -o Serveur.o


drawMeASheepSK.cc: drawMeASheep.idl
		 $(OMNI_HOME) -bcxx -Wbexample -Wba drawMeASheep.idl


																				
clean clean_all:
		rm -fr *.o
		rm -fr core
		rm -fr *.hh
		rm -fr *SK.cc
		rm -fr Server