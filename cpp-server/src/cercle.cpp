#include "../include/cercle.hpp"
#include <math.h>


inline Cercle::Cercle(const drawMeASheep::generated::entity::Point & centre, ::CORBA::Double rayon ){
		_center = centre ;
		_rayon = rayon;

}

::CORBA::Double Cercle::rayon(){
	return _rayon;
}

  drawMeASheep::generated::entity::Point Cercle::center(){
	  return _center;
  }

::CORBA::Double Cercle::getSurface(){
	return M_PI * pow( _rayon , 2 );
}
::CORBA::Double Cercle::getPerimeter(){
	return M_PI *  _rayon  * 2;
}

void Cercle::translate(const drawMeASheep::generated::entity::Point& translationPoint){

}
void Cercle::homothetie(::CORBA::Double x){
	  
  }
void Cercle::rotate(::CORBA::Double angle){
	
}
void Cercle::centralSymetric(const drawMeASheep::generated::entity::Point& p){
	
}
void Cercle::axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2){
	
}