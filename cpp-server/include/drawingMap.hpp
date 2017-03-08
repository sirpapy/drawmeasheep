#ifndef DRAWINGMAP_H
#define DRAWINGMAP_H


#include "../generated/drawMeASheep.hh"
#include <omniconfig.h>
#include "../omniORB-4.2.0/include/omniORB4/CORBA.h"
using namespace std;

class DrawingMap : public virtual ::CORBA::Object,
public virtual omniObjRef
{
public:
    DrawingMap(){

    };
    virtual ~DrawingMap(){};

};


#endif
