#ifndef CERCLE_H
#define CERCLE_H
#include "figure.hpp"

using namespace std;

class Cercle: public Figure
{
public:
    Cercle(const Point & centre = Point(0,0), int rayon = 0);
    virtual ~Cercle();

    virtual Figure * copy() const;
    virtual void deplacer(const Point & trans);
    virtual void dessiner(ostream & os = cout) const;
    virtual double surface() const;

private:
    Point _centre;
    int _rayon;
};
#endif
