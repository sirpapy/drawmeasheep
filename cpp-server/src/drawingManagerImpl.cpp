#include <iostream>
#include <stdlib.h>
#include <string>
#include "../include/drawingManagerImpl.hpp"

using namespace std;

::drawMeASheep::generated::entity::DrawingMap* DrawingManagerImpl::map(){

	 		cout << "map " << endl;

    //return new drawMeASheep::generated::entity::DrawingMap();
	return NULL;
}
::CORBA::Any* DrawingManagerImpl::createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon){
   		cout << "createDrawing " << endl;
   return NULL;
}
::CORBA::Boolean DrawingManagerImpl::add(const ::CORBA::Any& a){
    cout << "add " << endl;

	return false;
}
::CORBA::Boolean DrawingManagerImpl::isFull(){
	cout << "isFull " << endl;

    return false;
}
::CORBA::Double DrawingManagerImpl::getAvailableSurface(){
	cout << "getAvailableSurface " << endl;
    return 0.0;
}