/** Author : RABEARIJAO Maminirina Thierry
    Review : NDOYE Lamine
    */
#ifndef CERCLE_H
#define CERCLE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"
#include <math.h>
using namespace std;

class Cercle : public POA_drawMeASheep::generated::entity::Cercle
{
public:
    Cercle(const drawMeASheep::generated::entity::Point & centre, ::CORBA::Double rayon);
    virtual ~Cercle();

  ::CORBA::Double rayon();
  drawMeASheep::generated::entity::Point center();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(const drawMeASheep::generated::entity::Point& translationPoint);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::entity::Point& p);
  void axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);

private:
    drawMeASheep::generated::entity::Point _center;
    ::CORBA::Double _rayon;
};
#endif
