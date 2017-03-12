#ifndef LIGNE_H
#define LIGNE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"

class Ligne : public POA_drawMeASheep::generated::entity::Line
{
	 
public:

  Ligne (const drawMeASheep::generated::entity::Point & origine, const drawMeASheep::generated::entity::Point & extremite );
  virtual ~Ligne();

  drawMeASheep::generated::entity::Point a();
  drawMeASheep::generated::entity::Point b();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(const drawMeASheep::generated::entity::Point& translationPoint);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::entity::Point& p);
  void axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);


private:
	drawMeASheep::generated::entity::Point _origine;
	drawMeASheep::generated::entity::Point _extremite;
};
#endif

