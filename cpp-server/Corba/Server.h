//
// Created by Sirpapy on 06/03/2017.
//
#ifndef DRAWMEASHEEP_SERVER_H
#define DRAWMEASHEEP_SERVER_H



<<<<<<< HEAD
#include "../drawMeASheep.hh"
=======
#include "../generated/drawMeASheep.hh"
>>>>>>> 6e2734af8c0c26f05c632bb8817aa451b15b12dc
#include <omniconfig.h>

using namespace std;

<<<<<<< HEAD
class Server: virtual public Test::_impl_Account {
=======
class Server: public Test::_impl_Account {
>>>>>>> 6e2734af8c0c26f05c632bb8817aa451b15b12dc
public:
    Server(){

    };
    virtual ~Server(){};
    virtual void send(const char* v);
};
#endif //DRAWMEASHEEP_SERVER_H

void Server::send(const char *v) {
    cout <<"Coucou"<<v<<endl;
}