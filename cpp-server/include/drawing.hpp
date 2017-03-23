/** Author : NDOYE Lamine
    Review : NDIAYE Pape
    */

#ifndef DRAWINGH
#define DRAWINGH
#include <iostream>
using namespace std;

// classe abstraite de base
class Drawing : public POA_drawMeASheep::generated::entity::Drawing,drawMeASheep::generated::entity::Drawing{

public:
    /**
     * Il est impossible de rendre les constructeurs de copie virtuels.
     * Par suite, une fonction virtuelle de copy est d�finie qui permet
     * la simulation de constructeurs virtuels.
     */
    virtual Drawing * copy() const = 0;

    virtual ~Drawing();
	virtual char* toString();

	virtual void deplacer(const ::drawMeASheep::generated::entity::Point & trans) = 0;
	virtual void dessiner(ostream & os = cout) const = 0;
    virtual double getSurface() const = 0;

	bool operator== (const ::drawMeASheep::generated::entity::Drawing & f) const;

    friend ostream & operator<<(ostream & os, const ::drawMeASheep::generated::entity::Drawing & drawing);
};



#endif
