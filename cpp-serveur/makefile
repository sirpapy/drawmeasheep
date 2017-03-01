CC		    = /usr/bin/g++
CPPFLAGS      = -g -Wall -ansi -pedantic
LDFLAGS       = -g
OMNI_HOME     = /mnt/d/omniORB/build/bin/omniidl
OMNI_INCLUDES = 
OMNI_LIB_DIR  = -L/mnt/d/omniORB/build/lib/*.so
OMNIIDL       = $(OMNI_HOME)
INCLUDES      = $(OMNI_INCLUDES)
LIBS		  = -lomniORB4 -lomnithread -lomniDynamic4
OBJECTS       = drawMeASheep.o 

all : clean drawMeASheepSK main
		$(OMNI_LIB_DIR) $(LIBS) $(OMNI_LIB_DIR)

drawMeASheepSK.o: drawMeASheep.hh
		$(CC) -c $(CPPFLAGS) drawMeASheepSK.cc  -o drawMeASheepSK.o

manager.o : managerImpl.h
		$(CC) -c $(CFLAGS) managerImpl.cpp -o managerImpl.o

main : managerImpl.o drawMeASheepSK.o Serveur.cpp
		$(CC)  $(CFLAGS) -o Serveur.o Serveur.cpp managerImpl.o drawMeASheepSK.o


drawMeASheepSK: drawMeASheep.idl
		 $(OMNI_HOME) -bcxx -Wbexample -Wba drawMeASheep.idl


																				
clean clean_all:
		rm -fr *.o
		rm -fr core
		rm -fr *.hh
		rm -fr *SK.cc
		rm -fr Server