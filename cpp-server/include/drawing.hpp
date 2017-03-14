#ifndef DRAWINGH
#define DRAWINGH
#include <iostream>

using namespace std;

// classe abstraite de base
class Drawing {

public:
    /**
     * Il est impossible de rendre les constructeurs de copie virtuels.
     * Par suite, une fonction virtuelle de copy est d�finie qui permet
     * la simulation de constructeurs virtuels.
     */
    virtual Drawing * copy() const = 0;

    virtual ~Drawing();

	virtual void deplacer(const Point & trans) = 0;
	virtual void dessiner(ostream & os = cout) const = 0;
    virtual double surface() const = 0;

	bool operator== (const Figure & f) const;

    friend ostream & operator<<(ostream & os, const Drawing & drawing);
};



#endif
