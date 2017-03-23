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

::CORBA::Boolean DrawingManagerImpl::add(const char* a) {
    cout << "Ajout de " << a << endl;
    if (this->isFull()) {
    return ::CORBA::False;
    }
        this->drawingArray.push_back(a);
    return ::CORBA::True;
}
char* DrawingManagerImpl::createDrawing(const char* name, const ::drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon){
    cout << "createDrawing " << endl;
    if(this->add(name)){
        return const_cast<char*>(name) + " added";
    }
    return "Couldn't add the drawing, the map is full";
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
char* DrawingManagerImpl::getDrawings(){
    char* tmp;
    for(int i = 0;i < this->drawingArray.size();i++)
    {
        strcat(tmp,this->drawingArray[i]);
    }
    return tmp;
}

double maxSurface(){

}