#include <iostream>
#include <stdlib.h>
#include <string>

#include "../include/drawingManagerImpl.hpp"

#include "../include/cercle.hpp"
#include "../include/ligne.hpp"
#include "../include/ellipse.hpp"
#include "../include/polygone.hpp"

/** Author : Pape NDIAYE
	review by : NDOYE Amadou Lamine
*/


using namespace std;


::drawMeASheep::generated::entity::DrawingMap *DrawingManagerImpl::map() {
    cout << "map " << endl;

    return new drawMeASheep::generated::entity::DrawingMap();
//	return NULL;
}

::CORBA::Any* DrawingManagerImpl::createDrawing(const char* name, const drawMeASheep::generated::manager::Params& parameters){
    cout << "createDrawing name =  " << name << endl;
	::CORBA::Any* sender = new CORBA::Any;
    if (strcmp(name,"circle")==0) {
		drawMeASheep::generated::entity::Point * p1 = new drawMeASheep::generated::entity::Point();
		p1->x = 0;
		p1->y = 0;
		double angle = parameters[0];
	    Cercle_impl* drawing = new Cercle_impl(*p1,angle );
		*sender <<= drawing->_this();
		cout << "the any was filled up " << endl;

    }
	if (strcmp(name,"line")==0) {
		drawMeASheep::generated::entity::Point * p1 = new drawMeASheep::generated::entity::Point();
		p1->x = 0;
		p1->y = 0;
		drawMeASheep::generated::entity::Point * p2 = new drawMeASheep::generated::entity::Point();
		p2->x = 0;
		p2->y = 0;
		double distance = parameters[0];
	    Line_impl* drawing = new Line_impl(*p1,*p2 );

		*sender <<= drawing->_this();
		cout << "the any was filled up " << endl;

    }
	if (strcmp(name,"ellispe")==0) {
		drawMeASheep::generated::entity::Point * p1 = new drawMeASheep::generated::entity::Point();
		p1->x = 0;
		p1->y = 0;
		double rayon = parameters[0];
		double largeur = parameters[1];
	    Ellipse_impl* drawing = new Ellipse_impl(*p1,rayon,largeur);
		
		*sender <<= drawing->_this();
		cout << "the any was filled up " << endl;

    }
	if (strcmp(name,"polygone")==0) {
		drawMeASheep::generated::entity::Point * p1 = new drawMeASheep::generated::entity::Point();
		
		double side = parameters[0];
		double nb_point = parameters[1];

	    Polygone_impl* drawing = new Polygone_impl(side, nb_point);

		*sender <<= drawing->_this();
		cout << "the any was filled up " << endl;

    }

    return sender;
}

::CORBA::Long DrawingManagerImpl::add(const ::CORBA::Any& a){
   cout << "Ajout de " << endl;
    if (this->isFull()) {
        return -1;
    }
    this->_drawingArray[_index] = a;
	_index++;
    return _index - 1 ;
}


::CORBA::Boolean DrawingManagerImpl::isFull() {
    ::CORBA::Boolean isF = _index >= MAXDRAWING;
    cout << "isFull index  = " << _index << endl;

    return isF;
}

::CORBA::Double DrawingManagerImpl::getAvailableSurface() {
    cout << "getAvailableSurface " << endl;

    return MAXSURFACE - this->_index -1;
}

char * DrawingManagerImpl::getDrawings() {
    string tmp = string("Il y'a ") + std::to_string(_index)+ string(" dessin dans l'image : ");
	// Cercle_impl c ;
	//Line_impl l ;
	//Ellipse_impl* e = drawMeASheep::generated::entity::Ellipse->_nil();
	//Polygone_impl p;
   // for (int i = 0; i < _index ; i++) {
	//	if(this->_drawingArray[i] >>= e){
	//		tmp.append("Cercle ");

	//	}
    //}
    return strdup(tmp.c_str());
}

::CORBA::Boolean DrawingManagerImpl::transformDrawing(::CORBA::Double id, const ::drawMeASheep::generated::manager::Params& parameters) {
    return NULL;
}