#include "../include/drawing.hpp"
/** Author : Pape NDIAYE
*/
bool MyDrawing::operator==( const Drawing & d ) const {
	return *this == ds;
}

Drawing::~Drawing(){}