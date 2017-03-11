#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"

class Ellipse : public POA_drawMeASheep::generated::entity::Cercle {
private:
	// Make sure all instances are built on the heap by making the
	// destructor non-public
	//virtual ~drawMeASheep_generated_entity_Ellipse_i();
	double width;
public:
	// standard constructor
	Ellipse();
	virtual ~Ellipse();

	// methods corresponding to defined IDL attributes and operations
	drawMeASheep::generated::entity::PointSet* points();
	::CORBA::Double getSurface();
	::CORBA::Double getPerimeter();
	void translate(const drawMeASheep::generated::entity::Point& translationPoint);
	void homothetie(::CORBA::Double x);
	void rotate(::CORBA::Double angle);
	void centralSymetric(const drawMeASheep::generated::entity::Point& p);
	void axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};
#endif

