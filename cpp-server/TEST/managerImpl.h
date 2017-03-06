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
#include "Test.hh"
#include <omniconfig.h>
#include <omniORB4/CORBA.h>
#include <omniORB4/Naming.hh>
using namespace std;

class Manager : public POA_Account{

public:
    virtual void send(::CORBA::Double amount);
};

void Manager::send(::CORBA::Double amount) {
    cout << "hello" << endl;
}

#endif //DRAWMEASHEEP_MANAGERIMPL_H




