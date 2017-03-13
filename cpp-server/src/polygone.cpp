#include "../include/polygone.hpp"


inline Polygone::Polygone(const drawMeASheep::generated::entity::Point & centre, ::CORBA::Double rayon ){
		_center = centre ;
		_rayon = rayon;
}

::CORBA::Double Polygone::rayon(){
	return _rayon;
}

 Point Polygone::center(){
	  return _center;
  }

::CORBA::Double Polygone::getSurface(){
	return M_PI * pow( _rayon , 2 );
}
::CORBA::Double Polygone::getPerimeter(){
	return M_PI *  _rayon  * 2;
}

void Polygone::translate(const Point& translationPoint){
	_center.x = translationPoint.x + _center.x;
	_center.y = translationPoint.y + _center.y;

}

void Polygone::homothetie(::CORBA::Double x){
	_rayon = _rayon * x ;
	_center.x = x * _center.x;
	_center.y = x * _center.y;
}

void Polygone::rotate(::CORBA::Double angle){
	
}
void Polygone::centralSymetric(const Point& p){
	translate(p);
}
void Polygone::axialSymetric(const Point& p1, const Point& p2){
	
}