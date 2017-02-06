#include "cercle.hpp"

Cercle::Cercle(const Point & centre, int rayon ):_centre( centre ), _rayon( rayon ){

}
Cercle::~Cercle(){

}

Figure * Cercle::copy() const{
	return new Cercle( _centre, _rayon );
}
void Cercle::deplacer(const Point & trans){
	_centre += trans;
}
double Cercle::surface() const{
	return M_PI * pow( _rayon , 2 );
}

void Cercle::dessiner(ostream & os) const{
	os << "Centre: "<<_centre<<"\tRayon: "<<_rayon<<endl;
}