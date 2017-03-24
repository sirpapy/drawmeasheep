/** Author : Pape NDIAYE
*/
#ifndef POLYGONE_H
#define POLYGONE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"
#include <math.h>
using namespace std;

class Polygone : public POA_drawMeASheep::generated::entity::Polygone
{
public:
  Polygone(const ::CORBA::Double side_length, ::CORBA::Double nb_points);
  virtual ~Polygone();

  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(const ::drawMeASheep::generated::entity::Point &translationPoint);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const ::drawMeASheep::generated::entity::Point &p);
  void axialSymetric(const ::drawMeASheep::generated::entity::Point &p1, const ::drawMeASheep::generated::entity::Point &p2);

private:
  ::CORBA::Double _side_length;
  ::drawMeASheep::generated::entity::PointSet _points;
  int _nb_point;
};
#endif