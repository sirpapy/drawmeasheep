#include <iostream>
#include <stdlib.h>
#include <string>
#include "../include/drawingManagerImpl.hpp"
#include "../include/drawing.hpp"


/** Author : Pape NDIAYE
*/


using namespace std;


::drawMeASheep::generated::entity::DrawingMap* DrawingManagerImpl::map(){
	 		cout << "map " << endl;

    return new drawMeASheep::generated::entity::DrawingMap();
//	return NULL;
}
char* DrawingManagerImpl::createDrawing(const char* name, const ::drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon){
   		cout << "createDrawing " << endl;

   return const_cast<char*>(name);
}
::CORBA::Boolean DrawingManagerImpl::add(const char* a){
    cout << "Ajout de " << a << endl;
    this->drawingArray.push_back(a);
}

::CORBA::Boolean DrawingManagerImpl::isFull(){
    ::CORBA::Boolean isF=this->drawingArray.size()==MAXDRAWING;
	cout << "isFull " << isF << endl;

    return isF;
}
::CORBA::Double DrawingManagerImpl::getAvailableSurface(){
	cout << "getAvailableSurface " << endl;
//    Drawing tmp;
    double current = 0.0;
//    for(int i = 0;i < this->drawingArray.size();i++)
//    {
//        tmp = static_cast<drawMeASheep::generated::entity::Drawing>(drawingArray[i]);
//        current += tmp.getSurface();
//    }
//    return MAXSURFACE - current;
    return MAXSURFACE - this->drawingArray.size();
}

double maxSurface(){

}