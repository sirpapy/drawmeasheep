/** Author : RABEARIJAO Maminirina Thierry
   * Review : Pape NDIAYE
   */
#include "../include/cercle.hpp"

inline MyCercle::MyCercle(const drawMeASheep::generated::entity::Point & centre, ::CORBA::Double rayon ){
		_center = centre ;
		_rayon = rayon;
}

::CORBA::Double MyCercle::rayon(){
	return _rayon;
}

  drawMeASheep::generated::entity::Point MyCercle::center(){
	  return _center;
  }

::CORBA::Double MyCercle::getSurface(){
	return M_PI * pow( _rayon , 2 );
}
::CORBA::Double MyCercle::getPerimeter(){
	return M_PI *  _rayon  * 2;
}

void MyCercle::translate(const drawMeASheep::generated::entity::Point& translationPoint){
	_center.x = translationPoint.x + _center.x;
	_center.y = translationPoint.y + _center.y;

}

void MyCercle::homothetie(::CORBA::Double x){
	_rayon = _rayon * x ;
	_center.x = x * _center.x;
	_center.y = x * _center.y;
}

void MyCercle::rotate(::CORBA::Double angle){
	
}
void MyCercle::centralSymetric(const drawMeASheep::generated::entity::Point& p){
	translate(p);
}
void MyCercle::axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2){
	
}