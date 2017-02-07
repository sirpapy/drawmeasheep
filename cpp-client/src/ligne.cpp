#include "../include/ligne.hpp"

Ligne::Ligne ( const Point & a, const Point & b )
	:_origine( a.getX() , a.getY()), _extremite( b.getX(), b.getY()){

	}

Ligne::~Ligne(){
}

Figure * Ligne::copy() const {
	return new Ligne( _origine , _extremite );
}

void Ligne::deplacer( const Point & trans ){
	_origine+=trans;
	_extremite+=trans;
}

double Ligne::surface( ) const {
	return 1;
}

int Ligne::longueur() const{
	return 0;
	// todo complete section
}
void Ligne::dessiner( ostream & os) const {
	os << "Origine: " << _origine << "\tExtremite: "<< _extremite << endl;
}

ostream & operator<<(ostream & os, const Figure & figure){
	figure.dessiner(os);
	return os;
}