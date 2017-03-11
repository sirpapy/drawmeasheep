#include "../include/ligne.hpp"

inline Ligne::Ligne ( const drawMeASheep::generated::entity::Point & origine, const drawMeASheep::generated::entity::Point & extremite){
		_origine = origine;
		_extremite = extremite;
	}

  drawMeASheep::generated::entity::Point Ligne::a(){
		return _origine;
  }
  drawMeASheep::generated::entity::Point Ligne::b(){
		return _extremite;
	  
  }
  ::CORBA::Double getSurface(){
	  
  }
  ::CORBA::Double getPerimeter(){
	  
  }
  void translate(const drawMeASheep::generated::entity::Point& translationPoint){
	  
  }
  void homothetie(::CORBA::Double x){
	  
  }
  void rotate(::CORBA::Double angle){
	  
  }
  void centralSymetric(const drawMeASheep::generated::entity::Point& p){
	  
  }
  void axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2){
	  
  }

  void Ligne::translate( const drawMeASheep::generated::entity::Point & trans ){
	
  }