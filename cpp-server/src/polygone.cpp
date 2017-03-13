#include "../include/polygone.hpp"


inline Polygone::Polygone( const ::CORBA::Double side, const ::CORBA::Double nb_points){
	_side_length = side;
	_points = new ::drawMeASheep::generated::entity::PointSet(nb_points);
}	

::CORBA::Double Polygone::getSurface(){
	return _points.size()*_side_length;
}
::CORBA::Double Polygone::getPerimeter(){
}

void Polygone::translate(const drawMeASheep::generated::entity::Point& translationPoint){

}

void Polygone::homothetie(::CORBA::Double x){
}

void Polygone::rotate(::CORBA::Double angle){
	
}
void Polygone::centralSymetric(const drawMeASheep::generated::entity::Point& p){
	translate(p);
}
void Polygone::axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2){
	
}