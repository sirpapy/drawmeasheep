//
// Created by Sirpapy on 20/02/2017.
//

#ifndef DRAWMEASHEEP_MANAGERIMPL_H
#define DRAWMEASHEEP_MANAGERIMPL_H




//
// Created by Sirpapy on 20/02/2017.
//

#include <iostream>
#include <string>

#include "../include/image.hpp"
#include "../include/ligne.hpp"
#include "../include/cercle.hpp"
#include "../include/point.h"

//#include "OB/CORBA.h"
using namespace std;

class ManagerImpl : public virtual PortableServer::ServantBase{

    CORBA::ORB_var orb; // Reference to CORBA ORB


public:ManagerImpl(CORBA::ORB_var orb):orb(orb){

        cout << "Server initialised"<<endl;
    }
};


#endif //DRAWMEASHEEP_MANAGERIMPL_H




