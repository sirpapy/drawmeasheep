#include "../include/ligne.hpp"
/** Author : RABEARIJAO Maminirina Thierry
   * Review : Pape NDIAYE
*/
inline Ligne::Ligne ( const Point & origine, const Point & extremite){
		_origine = origine;
		_extremite = extremite;
	}

  Point Ligne::a(){
		return _origine;
  }
  Point Ligne::b(){
		return _extremite;
	  
  }
  ::CORBA::Double getSurface(){
	  
  }
  ::CORBA::Double getPerimeter(){
	  
  }
  void translate(const Point& translationPoint){
	  
  }
  void homothetie(::CORBA::Double x){
	  
  }
  void rotate(::CORBA::Double angle){
	  
  }
  void centralSymetric(const Point& p){
	  
  }
  void axialSymetric(const Point& p1, const Point& p2){
	  
  }

  void Ligne::translate( const Point & trans ){
	
  }