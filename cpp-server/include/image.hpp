/** Author : RABEARIJAO Maminirina Thierry
 * review : Pape NDIAYE
    */
    
#ifndef IMAGE_H
#define IMAGE_H
#include "figure.hpp"
#include "assert.h"

/**
 * Politique uniforme d'allocation m�moire
 * Toutes les figures sont allou�es dynamiquement
 * Une image les m�morise via un tableau de pointeurs de figures
 */
class Image : public Figure
{

public:
    enum {IMAGE_MAX = 50};

    Image (const Point & a = Point(0,0));

    /**
     * contructeur de copie profonde
     */
    Image(const Image & image);

    virtual Figure * copy() const;

    virtual ~Image();

    const Figure * getFigure(int index) const;

    void setFigure(int & index, const Figure * figure);

    int getNombre() const;

    Point getOrigine() const;

    /*
    * ajout d'une copie dans le container de figures */
    void ajouter(const Figure & f);

    virtual void deplacer(const Point & trans);
    virtual void dessiner(ostream & os = cout) const;
    virtual double surface() const;

    Image * operator=( const Image & );
private:
    /**
     * Origine de la figure
     */
    Point _origine;
    /**
     * Container de figures allou�es dynamiquement
     */
    Figure * _tableau[IMAGE_MAX];
    /**
     * Nombre de figures dans une image
     */
    int _nombre;
};
#endif
