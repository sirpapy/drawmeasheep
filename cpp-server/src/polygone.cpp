#include "../include/polygone.hpp"
/** Author : Pape NDIAYE
*/

Polygone_impl::Polygone_impl( const ::CORBA::Double side, const ::CORBA::Double nb_points){
	_side_length = side;
	_points = new ::drawMeASheep::generated::entity::PointSet(nb_points);
	_nb_point = nb_points;
}
Polygone_impl::~Polygone_impl( void){
	
}	
drawMeASheep::generated::entity::PointSet* Polygone_impl::points()
{
	return _points;
}
::CORBA::Double Polygone_impl::getSurface(){
	return _nb_point*_side_length;
}
::CORBA::Double Polygone_impl::getPerimeter(){
	return 0;
}

void Polygone_impl::translate(const drawMeASheep::generated::entity::Point& translationPoint){

}

void Polygone_impl::homothetie(::CORBA::Double x){
}

void Polygone_impl::rotate(::CORBA::Double angle){
	
}
void Polygone_impl::centralSymetric(const drawMeASheep::generated::entity::Point& p){
	translate(p);
}
void Polygone_impl::axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2){
	
}
char* Polygone_impl::toString(){
    return (char*)"Polygone ";
}