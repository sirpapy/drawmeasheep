#include "../include/image.hpp"

Image::Image( const Point & a ) :_origine( a), _nombre(0){

}

Image::Image( const Image & image ):_origine(image._origine), _nombre(image._nombre){

}

Figure * Image::copy() const {
	Image * copy = new Image(*this );
	return copy;
}

Image::~Image(){
	for( int i=0; i<_nombre; ++i ){
		delete( _tableau[i]);
	}
}
const Figure * Image::getFigure( int index ) const {
	assert( index >=0 && index < _nombre-1 );
	return _tableau[index];
}

void Image::setFigure( int & index, const Figure * figure ){
	_tableau[index] = (*figure).copy() ;
}

int Image::getNombre() const {
	return _nombre;
}

Point Image::getOrigine() const {
	return _origine;
}

void Image::ajouter( const Figure & f ){
	Figure * newFigure = f.copy();
	setFigure(_nombre, newFigure);
	_nombre++;
}

void Image::deplacer( const Point & trans ){
	_origine += trans;
	for( int i = 0 ; i<_nombre; ++i ){
		_tableau[i]->deplacer(trans);
	}
}

void Image::dessiner( ostream & os ) const{
	for( int i = 0; i<_nombre ; ++i ){
		_tableau[i]->dessiner(os);
	}
}

double Image::surface() const {
	double totalSurface = 0;
	for( int i = 0; i<_nombre ; ++i ){
		totalSurface += _tableau[i]->surface();
	}
	return totalSurface;
}