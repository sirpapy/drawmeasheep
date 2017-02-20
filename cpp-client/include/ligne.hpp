#ifndef LIGNE_H
#define LIGNE_H
#include "figure.hpp"
#include "point.h"

class Ligne: public Figure {

public:
	Ligne(const Point & a , const Point & b);
    virtual ~Ligne();

    virtual Figure * copy() const;
	virtual void deplacer(const Point & trans);
	virtual void dessiner(ostream & os = cout) const;
    virtual double surface() const;
	virtual int longueur( ) const;

private:
	Point _origine;
	Point _extremite;
};
#endif

