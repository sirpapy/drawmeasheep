#include "../include/ellipse.hpp"
/** Author : RABEARIJAO Maminirina Thierry
   * Review : Pape NDIAYE
*/


double pi=acos (-1.0);


Ellipse_impl::Ellipse_impl(drawMeASheep::generated::entity::Point& centre, ::CORBA::Double rayon, ::CORBA::Double largeur):_centre(&centre), _rayon(rayon), _largeur(largeur){

}
Ellipse_impl::~Ellipse_impl(void){
    // add extra destructor code here
}

::CORBA::Double Ellipse_impl::largeur()
{
	return _largeur;
}

::CORBA::Double Ellipse_impl::rayon()
{
	return _rayon;
}

drawMeASheep::generated::entity::Point Ellipse_impl::center()
{
	return *_centre;
 }


::CORBA::Double Ellipse_impl::getSurface()
{
    return M_PI * _rayon * _largeur;
}

::CORBA::Double Ellipse_impl::getPerimeter()
{
    return (pi*(pow(_largeur,2) ,pow(_centre->x,2),(1.0/2)));
}

void Ellipse_impl::translate(const drawMeASheep::generated::entity::Point& translationPoint)
{
    _centre->x = translationPoint.x + _centre->x;
    _centre->y = translationPoint.y + _centre->y;
}

void Ellipse_impl::homothetie(::CORBA::Double x)
{
    _rayon = _rayon * x ;
    _centre->x = x * _centre->x;
    _centre->y = x * _centre->y;
}

void Ellipse_impl::rotate(::CORBA::Double angle)
{
    _centre->x = sin(angle) * _centre->x;
    _centre->y = cos(angle) * _centre->y;
}

void Ellipse_impl::centralSymetric(const drawMeASheep::generated::entity::Point& p)
{
    // insert code here and remove the warning
}

char* Ellipse_impl::toString(){
    return (char*)"Ellipse ";
}

void Ellipse_impl::axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
    // insert code here and remove the warning
}
