//
// Created by Sirpapy on 06/03/2017.
//
#ifndef DRAWMEASHEEP_SERVER_H
#define DRAWMEASHEEP_SERVER_H



#include "../drawMeASheep.hh"
#include <omniconfig.h>

using namespace std;

class Server: virtual public Test::_impl_Account {
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