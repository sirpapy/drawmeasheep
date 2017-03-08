#ifndef SERVER_H
#define SERVER_H


#include "../generated/drawMeASheep.hh"
#include "../include/drawingMap.hpp"
#include <omniconfig.h>
#include "../omniORB-4.2.0/include/omniORB4/CORBA.h"
using namespace std;

class Server: public POA_manager::DrawingManager,
              public PortableServer::RefCountServantBase
{
public:
    CORBA::ORB_var _orb;
    Server(CORBA::ORB_var orb):_orb(orb){

    };
    virtual ~Server(){

    };
    entity::DrawingMap* map();
    CORBA::Any* createDrawing(const char* name, const ::entity::PointSet& points, ::CORBA::Double rayon);
    CORBA::Boolean add(const ::CORBA::Any& a);
    CORBA::Boolean isFull();
    CORBA::Double getAvailableSurface();

};


#endif
//DrawingMap* Server::map(){
//    return NULL;
//}
CORBA::Any* Server::createDrawing(const char* name, const ::entity::PointSet& points, ::CORBA::Double rayon){
    return NULL;
}
CORBA::Boolean Server::add(const ::CORBA::Any& a){
    return false;
}
CORBA::Boolean Server::isFull(){
    return false;
}
CORBA::Double Server::getAvailableSurface(){
    return 0.0;
}