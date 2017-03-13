/** Author : RABEARIJAO Maminirina Thierry*/
#ifndef POLYGONE_H
/** Author : RABEARIJAO Maminirina Thierry
   * Review : 
   */
#define POLYGONE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"
#include <math.h>
using namespace std;
using namespace drawMeASheep::generated::entity;

class Polygone : public POA_drawMeASheep::generated::entity::Polygone
{
public:
    Polygone(const Point & centre, ::CORBA::Double rayon);
    virtual ~Polygone();

  ::CORBA::Double rayon();
  Point center();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(const Point& translationPoint);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const Point& p);
  void axialSymetric(const Point& p1, const Point& p2);

private:
    PointSet _points;
	int _nb_points;
};
#endif