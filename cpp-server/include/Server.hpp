#ifndef SERVER_H
#define SERVER_H

#include <stdlib.h>
#include <iostream>
#include <string>
#include <iostream>
#include <sys/wait.h>
#include <omniconfig.h>
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"
#include "../include/drawingMap.hpp"

using namespace std;

class Server : public drawMeASheep::generated::manager::DrawingManager,
				public PortableServer::ServantBase
{
public:
    Server();
    virtual ~Server();
	drawMeASheep::generated::manager::DrawingManager_ptr _this();
	drawMeASheep::generated::entity::DrawingMap* map();
	::CORBA::Any* createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon);
	::CORBA::Boolean add(const ::CORBA::Any& a);
	::CORBA::Boolean isFull();
	::CORBA::Double getAvailableSurface();

};


#endif

	Server::Server(){

    };
    Server::~Server(){

    };

drawMeASheep::generated::manager::DrawingManager_ptr Server::_this(){
	return _this();
}
	
 drawMeASheep::generated::entity::DrawingMap* Server::map(){
    return NULL;
}
::CORBA::Any* Server::createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon){
    return NULL;
}
::CORBA::Boolean Server::add(const ::CORBA::Any& a){
    return false;
}
::CORBA::Boolean Server::isFull(){
    return false;
}
::CORBA::Double Server::getAvailableSurface(){
    return 0.0;
}