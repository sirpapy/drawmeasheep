#include "../include/point.h"

Point::Point( int a, int b ):x(a), y(b){}

int Point::getX() const {
	return x;
}

void Point::setX(int a ){
	x = a;
}

int Point::getY() const {
	return y;
}

void Point::setY(int a ){
	y = a;
}

double Point::distance ( const Point & p ) const{
	return sqrt( pow( x - p.x, 2) + pow( y - p.y , 2));
}

Point Point::operator+( const Point & p ) const {
	Point *newPoint = new Point(this->x + p.x,
								this->y + p.y);
	return *newPoint;
}

Point & Point::operator+=( const Point & p ){
	this->x += p.x;
	this->y += p.y;
	return *this;
}

Point & Point::operator=( const Point & p ){
	this->x = p.x;
	this->y = p.y;
	return *this;
}

ostream & operator<< ( ostream & os , const Point & p ){
	os << " ( " << p.x << "," << p.y << ")";
	return os;
}