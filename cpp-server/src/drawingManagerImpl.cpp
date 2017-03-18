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
::CORBA::Any* DrawingManagerImpl::createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon){
   		cout << "createDrawing " << endl;
		
   return new CORBA::Any;
}
::CORBA::Boolean DrawingManagerImpl::add(const ::CORBA::Any& a){
    cout << "add " << endl;
    ::CORBA::Any an_any;
    an_any <<=&a;
	drawingArray.push_back(an_any);
}
::CORBA::Boolean DrawingManagerImpl::isFull(){
	cout << "isFull " << endl;

    return drawingArray.size()==MAXDRAWING;
}
::CORBA::Double DrawingManagerImpl::getAvailableSurface(){
	cout << "getAvailableSurface " << endl;
    drawMeASheep::generated::entity::Drawing tmp;
    double current = 0.0;
    for(int i = 0;i < drawingArray.size();i++)
    {
        tmp = static_cast<drawMeASheep::generated::entity::Drawing>(drawingArray[i]);
        current += tmp.getSurface();
    }
    return MAXSURFACE - current;
}

double maxSurface(){

}