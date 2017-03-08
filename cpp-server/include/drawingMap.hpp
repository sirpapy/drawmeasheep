#ifndef DRAWINGMAP_H
#define DRAWINGMAP_H


#include "../generated/drawMeASheep.hh"

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
