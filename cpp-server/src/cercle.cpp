/** Author : RABEARIJAO Maminirina Thierry
   * Review : Pape NDIAYE
   */
#include "../include/cercle.hpp"

Cercle_impl::Cercle_impl(const ::drawMeASheep::generated::entity::Point  centre, double rayon ){
		_center = centre ;
		_rayon = rayon;
}
Cercle_impl::~Cercle_impl(void ){

}

::CORBA::Double Cercle_impl::rayon(){
	return _rayon;
}

::drawMeASheep::generated::entity::Point Cercle_impl::center(){
  
	  return _center;
  }

::CORBA::Double Cercle_impl::getSurface(){
	return M_PI * pow( _rayon , 2 );
}
::CORBA::Double Cercle_impl::getPerimeter(){
	return M_PI *  _rayon  * 2;
}

void Cercle_impl::translate(const drawMeASheep::generated::entity::Point& translationPoint){
	_center.x = translationPoint.x + _center.x;
	_center.y = translationPoint.y + _center.y;

}

void Cercle_impl::homothetie(::CORBA::Double x){
	_rayon = _rayon * x ;
	_center.x = x * _center.x;
	_center.y = x * _center.y;
}

void Cercle_impl::rotate(::CORBA::Double angle){
	
}
void Cercle_impl::centralSymetric(const drawMeASheep::generated::entity::Point& p){
	translate(p);
}
void Cercle_impl::axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2){
	
}
char* Cercle_impl::toString(){
	return (char*)"Cercle ";
}