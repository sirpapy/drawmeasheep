/** Author : RABEARIJAO Maminirina Thierry
    Review : NDOYE Lamine & NDIAYE Pape
    */
#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"
#include <math.h>

class Ellipse_impl : public POA_drawMeASheep::generated::entity::Ellipse {
private:
	drawMeASheep::generated::entity::Point* _centre;
	::CORBA::Double _rayon;
	::CORBA::Double _largeur;

public:
	Ellipse_impl(drawMeASheep::generated::entity::Point& _centre, ::CORBA::Double _rayon, ::CORBA::Double _largeur);
	Ellipse_impl(){
		_centre = new drawMeASheep::generated::entity::Point ();
		_centre->x = 0;
		_centre->y = 0;
		
	};
	virtual ~Ellipse_impl();
	char* toString();

	::CORBA::Double largeur();
	::CORBA::Double rayon();
	drawMeASheep::generated::entity::Point center();
	::CORBA::Double getSurface();
	::CORBA::Double getPerimeter();
	void translate(const drawMeASheep::generated::entity::Point& translationPoint);
	void homothetie(::CORBA::Double x);
	void rotate(::CORBA::Double angle);
	void centralSymetric(const drawMeASheep::generated::entity::Point& p);
	void axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};


#endif

