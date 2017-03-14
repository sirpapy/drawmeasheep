#ifndef LIGNE_H
#define LIGNE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"

using namespace drawMeASheep::generated::entity;

class Ligne : public POA_drawMeASheep::generated::entity::Line
{
	 
public:

  Ligne (const Point & origine, const Point & extremite );
  virtual ~Ligne();

  drawMeASheep::generated::entity::Point a();
  drawMeASheep::generated::entity::Point b();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(const Point& translationPoint);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const Point& p);
  void axialSymetric(const Point& p1, const Point& p2);


private:
	Point _origine;
	Point _extremite;
};
#endif

