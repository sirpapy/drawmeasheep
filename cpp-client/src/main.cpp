#include <iostream>

#include "../include/image.hpp"
#include "../include/ligne.hpp"
#include "../include/cercle.hpp"
#include "../include/point.h"

using namespace std;

static void testPoint(void);
static void testLigne(void);
static void testCercle(void);
static void testImageAllocStatique(void);
static void testCopy();
static void testImageAllocDynamique(void);


int main(void)
{
    int choix;
    char c;

    do
    {
        do
        {
            cout << "1 : Point " << endl;
            cout << "2 : Ligne " << endl;
            cout << "3 : Cercle " << endl;
            cout << "4 : Figures allouees statiquement " << endl;
            cout << "5 : Copies virtuelles dynamiques de figures " << endl;
            cout << "6 : Figures allouees dynamiquement " << endl;
            cout << "Votre choix : ";
            cin >> choix;
        }
        while (choix < 1 || choix > 11);

        switch(choix)
        {
        case 1 :
            testPoint();
            break;
        case 2 :
            testLigne();
            break;
        case 3 :
            testCercle();
            break;
        case 4 :
            testImageAllocStatique();
            break;
        case 5 :
            testCopy();
            break;
        case 6 :
            testImageAllocDynamique();
            break;
        default :
            cout << "Choix invalide " << endl;
            break;

        }
        cout << "Encore? : y/n";
        cin >> c;
    }
    while(c != 'N' && c != 'n');


    return 0;
}

void testPoint(void)
{
    Point x;
    Point y(10, 20);
    Point z = Point(y);

    cout << x << y << z << endl;
    z = x + y;
    cout << z << endl;
    z += y;
    cout << z << endl;
    z = x;
    cout << z << endl;
}

void testLigne(void)
{
    Ligne l1 = Ligne(Point(10, 20), Point(16, 30));
    l1.dessiner(cout);
    cout << "Translation(5,8)" << endl;
    l1.deplacer(Point(5,8));
    l1.dessiner(cout);
    cout << l1 << endl;
}

void testCercle(void)
{
    Cercle c1 = Cercle (Point(10, 20), 22);
    c1.dessiner();
    cout << "Translation(5,8)" << endl;
    c1.deplacer(Point(5,8));
    c1.dessiner();
    cout << c1 << endl;
}

void testImageAllocStatique(void)
{
    Ligne l1 = Ligne(Point(10, 20), Point(16, 30));
    Cercle c1 = Cercle(Point (10, 20), 22);

    Image i1 = Image();
    cout << "image no 1 = ligne no 1 + cercle n� 1" << endl;
    i1.ajouter(l1);
    i1.ajouter(c1);
    i1.dessiner();
    cout << i1 << endl;

    cout << "l1 / Translation(40,50)" << endl;
    l1.deplacer(Point(40, 50));
    i1.dessiner();

    cout << "image no 1 += image no 1" << endl;
    i1.ajouter(i1);
    i1.dessiner();

    cout << "c1 : Translation(11,13)" << endl;
    c1.deplacer(Point(11, 13));
    i1.dessiner();

    cout << "image i1 : Translation(15,40)" << endl;
    i1.deplacer(Point(15, 40));
    i1.dessiner();

    Image i2 = Image();
    cout << "image no 2 = image no 1 + ligne no 1" << endl;
    i2.ajouter(i1);
    i2.ajouter(l1);
    i2.dessiner();
    cout << "image i2 : Translation(150,400)" << endl;
    i2.deplacer(Point(150, 400));
    i2.dessiner();

    Image i3 = Image();
    cout << "image no 2 = image no 1 + iamge no 2" << endl;
    i3.ajouter(i1);
    i3.ajouter(i2);
    i3.dessiner();
    cout << i3 << endl;
}

void testCopy()
{
    Cercle * c1 = new Cercle(Point(10, 20), 2);
    Figure * fc1 = c1->copy();
    cout << "c1 : " << *c1 << endl;
    cout << "copie de c1 : " << endl;
    /**
    * la figure ne peut �tre qu'un cercle
    * le static_cast est s�r
    */
    Cercle * c1Copy = static_cast<Cercle *>(fc1);
    cout << *c1Copy << endl;

    Ligne * l1 = new Ligne(Point(10, 20), Point(12, 44));
    Figure * fl1 = l1->copy();
    cout << "l1 : " << *l1 << endl;
    cout << "copie de l1 : " << endl;
    Ligne * l1Copy = static_cast<Ligne *>(fl1);
    cout << *l1Copy << endl;

    Image * i1 = new Image();
    i1->ajouter(*c1);
    i1->ajouter(*l1);
    Figure * fi1 = i1->copy();
    cout << "i1 : " << *i1 << endl;
    cout << "i1Copy copie de i1 : " << endl;
    Image * i1Copy = static_cast<Image *>(fi1);
    cout << *i1Copy << endl;

    Image * i2 = new Image();
    i2->ajouter(*c1);
    i2->ajouter(*i1);
    Figure * fi2 = i2->copy();
    cout << "i2 : " << *i2 << endl;
    cout << "i2Copy copie de i2 : " << endl;
    Image * i2Copy = static_cast<Image *>(fi2);
    cout << *i2Copy << endl;

    Image * i3 = new Image();
    i3->ajouter(*i1);
    i3->ajouter(*c1);
    i3->ajouter(*i2);
    i3->ajouter(*l1);
    Figure * fi3 = i3->copy();
    cout << "i3 : " << *i3 << endl;
    cout << "i3Copy copie de i3 : " << endl;
    Image * i3Copy = static_cast<Image *>(fi3);
    cout << *i3Copy << endl;

    /**
    * test du constructeur de copie de la classe Image
    */
    Image * i4 = new Image(*i3);
    cout << "Contructeur de copie : i4 copie de i3" << endl;
    cout << *i4 << endl;

    delete c1;
    delete fc1; // ou delete c1Copy
    delete l1;
    delete l1Copy; // ou delete fl1
    delete i1;
    delete i1Copy; // ou delete fi1
    delete i2;
    delete fi2;  // ou delete i2Copy
    delete i3;
    delete i3Copy;  // ou delete fi3

    cout << *i4 << endl;
    delete i4;
}

void testImageAllocDynamique(void)
{
    Ligne * l1 = new Ligne(Point(10, 20), Point(16, 30));
    Cercle * c1 = new Cercle(Point (10, 20), 22);

    Image * i1 = new Image();
    cout << "image no 1 = ligne no 1 + cercle n� 1" << endl;
    i1->ajouter(*l1);
    i1->ajouter(*c1);
    i1->dessiner();
    cout << *i1 << endl;

    cout << "l1 / Translation(40,50)" << endl;
    l1->deplacer(Point(40, 50));
    i1->dessiner();

    cout << "image no 1 += image no 1" << endl;
    i1->ajouter(*i1);
    i1->dessiner();

    cout << "c1 : Translation(11,13)" << endl;
    c1->deplacer(Point(11, 13));
    i1->dessiner();

    cout << "image i1 : Translation(15,40)" << endl;
    i1->deplacer(Point(15, 40));
    i1->dessiner();

    Image * i2 = new Image();
    cout << "image no 2 = image no 1 + ligne no 1" << endl;
    i2->ajouter(*i1);
    i2->ajouter(*l1);
    i2->dessiner();
    cout << "image i2 : Translation(150,400)" << endl;
    i2->deplacer(Point(150, 400));
    i2->dessiner();

    Image * i3 = new Image();
    cout << "image no 2 = image no 1 + iamge no 2" << endl;
    i3->ajouter(*i1);
    i3->ajouter(*i2);
    i3->dessiner();
    cout << *i3 << endl;

    delete c1;
    delete l1;
    delete i1;
    delete i2;
    delete i3;
}
