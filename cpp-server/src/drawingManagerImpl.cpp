#include <iostream>
#include <stdlib.h>
#include <string>
#include "../include/drawingManagerImpl.hpp"
#include "../include/drawing.hpp"
#include "../include/cercle.hpp"


/** Author : Pape NDIAYE
*/


using namespace std;


::drawMeASheep::generated::entity::DrawingMap *DrawingManagerImpl::map() {
    cout << "map " << endl;

    return new drawMeASheep::generated::entity::DrawingMap();
//	return NULL;
}

::CORBA::Long DrawingManagerImpl::add(const char *a) {
    cout << "Ajout de " << a << endl;
    if (this->isFull()) {
        return 0;
    }
    this->drawingArray.push_back(a);
    return 1;
}

drawMeASheep::generated::entity::Drawing_ptr DrawingManagerImpl::createDrawing(const char* name, const ::drawMeASheep::generated::manager::Params& parameters) {
    cout << "createDrawing " << endl;
    if (name == "circle") {
        if (this->add(name)) {

            Cercle *cercle = new Cercle(parameters[0], new Point(parameters[1],parameters[2]));

            POA_drawMeASheep::generated::entity::Drawing *drawing = cercle;
            return drawing->_this();
        }
        return NULL;
    }

    return drawMeASheep::generated::entity::Drawing_Helper::_nil();
}

::CORBA::Boolean DrawingManagerImpl::isFull() {
    ::CORBA::Boolean isF = this->drawingArray.size() == MAXDRAWING;
    cout << "isFull " << isF << endl;

    return isF;
}

::CORBA::Double DrawingManagerImpl::getAvailableSurface() {
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

char *DrawingManagerImpl::getDrawings() {
    char *tmp;
    for (int i = 0; i < this->drawingArray.size(); i++) {
        strcat(tmp, this->drawingArray[i]);
    }
    return tmp;
}

double maxSurface() {

}