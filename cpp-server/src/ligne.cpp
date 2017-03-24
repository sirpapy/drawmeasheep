#include "../include/ligne.hpp"
/** Author : RABEARIJAO Maminirina Thierry
   * Review : Pape NDIAYE
*/
Line_impl::Line_impl ( const Point & origine, const Point & extremite){
	_origine = origine;
	_extremite = extremite;
}
Line_impl::~Line_impl ( void){
	
}

  Point Line_impl::a(){
		return _origine;
  }
  Point Line_impl::b(){
		return _extremite;
	  
  }
  ::CORBA::Double Line_impl::getSurface(){
	  return 0 ;
  }
  ::CORBA::Double Line_impl::getPerimeter(){
	  return 0;
  }
  void Line_impl::translate(const Point& translationPoint){
	  
  }
  void Line_impl::homothetie(::CORBA::Double x){
	  
  }
  void Line_impl::rotate(::CORBA::Double angle){
	  
  }
  void Line_impl::centralSymetric(const Point& p){
	  
  }
  void Line_impl::axialSymetric(const Point& p1, const Point& p2){
	  
  }
char* Line_impl::toString(){
    return (char*)"Line ";
}
 