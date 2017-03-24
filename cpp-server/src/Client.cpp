//
// Created by Sirpapy on 23/03/2017.
//
#include <assert.h>

#include "../include/Client.h"
#include <iostream>
#include "../omni_inst/include/omniORB4/CORBA.h"
//#include <Naming.hh>
#include "../include/drawingManagerImpl.hpp"

/** Name is defined in the server.cpp */
#define SERVER_NAME		"Serveur"

using namespace std;

int main(int argc, char ** argv)
{
    try {
        //------------------------------------------------------------------------
        // Initialize ORB object.
        //------------------------------------------------------------------------
        CORBA::ORB_ptr orb = CORBA::ORB_init(argc, argv);

        //------------------------------------------------------------------------
        // Resolve service
        //------------------------------------------------------------------------
        DrawingManagerImpl* service_server;

        try {

            //------------------------------------------------------------------------
            // Bind ORB object to name service object.
            // (Reference to Name service root context.)
            //------------------------------------------------------------------------
            CORBA::Object_var ns_obj = orb->resolve_initial_references("NameService");

            if (!CORBA::is_nil(ns_obj)) {
                //------------------------------------------------------------------------
                // Bind ORB object to name service object.
                // (Reference to Name service root context.)
                //------------------------------------------------------------------------
                CosNaming::NamingContext_ptr nc = CosNaming::NamingContext::_narrow(ns_obj);

                //------------------------------------------------------------------------
                // The "name text" put forth by CORBA server in name service.
                // This same name ("MyServerName") is used by the CORBA server when
                // binding to the name server (CosNaming::Name).
                //------------------------------------------------------------------------
                CosNaming::Name name;
                name.length(1);
                name[0].id = CORBA::string_dup(SERVER_NAME);
                name[0].kind = CORBA::string_dup("");

                //------------------------------------------------------------------------
                // Resolve "name text" identifier to an object reference.
                //------------------------------------------------------------------------
                CORBA::Object_ptr obj = nc->resolve(name);

//                assert(!CORBA::is_nil(ns_obj.in()));
                    service_server = new DrawingManagerImpl;

            }
        } catch (CosNaming::NamingContext::NotFound &) {
            cerr << "Caught corba not found" << endl;
        } catch (CosNaming::NamingContext::InvalidName &) {
            cerr << "Caught corba invalid name" << endl;
        } catch (CosNaming::NamingContext::CannotProceed &) {
            cerr << "Caught corba cannot proceed" << endl;
        }

        //------------------------------------------------------------------------
        // Do stuff
        //------------------------------------------------------------------------
//        assert(!CORBA::is_nil(nc.in()));

//        if (!CORBA::is_nil(service_server)) {
            cout << "response from Server: " << service_server->isFull() << endl;
//        }

        //------------------------------------------------------------------------
        // Destroy OBR
        //------------------------------------------------------------------------
        orb->destroy();

    } catch (CORBA::UNKNOWN) {
        cerr << "Caught CORBA exception: unknown exception" << endl;
    }
}