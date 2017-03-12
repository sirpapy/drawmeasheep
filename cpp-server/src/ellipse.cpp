
#include "../include/ellipse.hpp"
#include<math.h>


//
// Example implementation code for IDL interface 'drawMeASheep::generated::entity::Ellipse'
//
double pi=acos (-1.0);


Ellipse::Ellipse(drawMeASheep::generated::entity::Point& _centre, ::CORBA::Double _rayon, ::CORBA::Double _largeur):centre(_centre), rayon(_rayon), largeur(_largeur){

    // add extra constructor code here
}
Ellipse::~Ellipse(){
    // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
drawMeASheep::generated::entity::PointSet* Ellipse::points()
{
    // insert code here and remove the warning
}

::CORBA::Double Ellipse::getSurface()
{
    return 3.14 * rayon * largeur;
}

::CORBA::Double Ellipse::getPerimeter()
{
    return (pi*(pow(largeur,2)+(pow(centre.x,2)),(1.0/2)));
}

void Ellipse::translate(const drawMeASheep::generated::entity::Point& translationPoint)
{
    centre.x = translationPoint.x + centre.x;
    centre.y = translationPoint.y + centre.y;
}

void Ellipse::homothetie(::CORBA::Double x)
{
    rayon = rayon * x ;
    centre.x = x * centre.x;
    centre.y = x * centre.y;
}

void Ellipse::rotate(::CORBA::Double angle)
{
    centre.x = sin(angle) * centre.x;
    centre.y = cos(angle) * centre.y;
}

void Ellipse::centralSymetric(const drawMeASheep::generated::entity::Point& p)
{
    // insert code here and remove the warning
}

void Ellipse::axialSymetric(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
    // insert code here and remove the warning
}
// End of example implementation code