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
//NDOYE Amadou Lamine
using namespace std;

class Server : public drawMeASheep::generated::manager::DrawingManager,
				public PortableServer::ServantBase
{
public:
    Server();
    virtual ~Server();
	//drawMeASheep::generated::manager::DrawingManager_ptr _this();
	inline ::drawMeASheep::generated::manager::DrawingManager_ptr _this() {
          return (::drawMeASheep::generated::manager::DrawingManager_ptr) _do_this(::drawMeASheep::generated::manager::DrawingManager::_PD_repoId);
        }
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

 drawMeASheep::generated::entity::DrawingMap* Server::map(){

	 		cout << "map " << endl;

    return NULL;
}
::CORBA::Any* Server::createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon){
   		cout << "createDrawing " << endl;
   return NULL;
}
::CORBA::Boolean Server::add(const ::CORBA::Any& a){
    cout << "add " << endl;

	return false;
}
::CORBA::Boolean Server::isFull(){
	cout << "isFull " << endl;

    return false;
}
::CORBA::Double Server::getAvailableSurface(){
	cout << "getAvailableSurface " << endl;
    return 0.0;
}