/** Author : RABEARIJAO Maminirina Thierry
    Review : NDOYE Lamine
*/

#ifndef CERCLE_H
#define CERCLE_H
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"
#include <math.h>
using namespace std;

class Cercle_impl : public POA_drawMeASheep::generated::entity::Cercle
{
public:
    Cercle_impl(const drawMeASheep::generated::entity::Point centre, double rayon);
	Cercle_impl(){
		
	};
    virtual ~Cercle_impl();

  ::CORBA::Double rayon();
  drawMeASheep::generated::entity::Point center();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  char* toString();
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
