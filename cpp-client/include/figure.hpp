#ifndef FIGUREH
#define FIGUREH
#include <iostream>
#include "point.h"

using namespace std;

// classe abstraite de base
class Figure {

public:
    /**
     * Il est impossible de rendre les constructeurs de copie virtuels.
     * Par suite, une fonction virtuelle de copy est d�finie qui permet
     * la simulation de constructeurs virtuels.
     */
    virtual Figure * copy() const = 0;

    virtual ~Figure();

	virtual void deplacer(const Point & trans) = 0;
	virtual void dessiner(ostream & os = cout) const = 0;
    virtual double surface() const = 0;

	bool operator== (const Figure & f) const;

    friend ostream & operator<<(ostream & os, const Figure & figure);
};



#endif
