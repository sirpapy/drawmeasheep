<<<<<<< HEAD
#include <stdlib.h>
#include <iostream>
#include <string>
#include <iostream>
#include "../drawMeASheep.hh"

#include "../include/managerImpl.h"
#include "../Corba/Server.h"
#include "../drawMeASheep.hh"
#include <omniconfig.h>
=======
#include "../include/Server.hpp"
#include <assert.h>

>>>>>>> 6e2734af8c0c26f05c632bb8817aa451b15b12dc
using namespace std;


int main(int argc, char **argv) {
    // --------------------------------------------------------------------------
    // Start CORBA server:
    // --------------------------------------------------------------------------
// Declare ORB and servant object
<<<<<<< HEAD
    CORBA::ORB_var orb;
    Server *managerImpl = NULL;

    try {
        //------------------------------------------------------------------------
        // 1) Initialize ORB
        // 2) Get reference to root POA
        // 3) Bind to name service
        // 4) Initialize servant object
        //------------------------------------------------------------------------





        // Initialize the ORB
        orb = CORBA::ORB_init(argc, argv);
        // Get a reference to the root POA
        CORBA::Object_var rootPOAObj = orb->resolve_initial_references("RootPOA");

        // Narrow it to the correct type
        PortableServer::POA_var rootPOA = PortableServer::POA::_narrow(rootPOAObj.in());

        CORBA::PolicyList policies;
        policies.length(1);

        policies[0] = rootPOA->create_thread_policy(PortableServer::SINGLE_THREAD_MODEL);

        // Get the POA manager object
        PortableServer::POAManager_var manager = rootPOA->the_POAManager();


        // Create a new POA with specified policies
        PortableServer::POA_var myPOA = rootPOA->create_POA("myPOA", manager, policies);

//        // Free policies
//        CORBA::ULong len = policies.length();
//        for (CORBA::ULong i = 0; i < len; i++)
//            policies[i]->destroy();


        // Get a reference to the Naming Service root_context
        CORBA::Object_var rootContextObj =
                orb->resolve_initial_references("NameService");

        // Narrow to the correct type
        CosNaming::NamingContext_var nc =
                CosNaming::NamingContext::_narrow(rootContextObj.in());

        // Create a reference to the servant
        managerImpl = new Server(orb);


        // Activate object
        PortableServer::ObjectId_var myObjID = myPOA->activate_object(managerImpl);

        // Get a CORBA reference with the POA through the servant
        CORBA::Object_var o = myPOA->servant_to_reference(managerImpl);

        CORBA::String_var s = orb->object_to_string(o);
        cout <<s<<endl;
//
//        CosNaming::Name name;
//        name.length(1);
//        name[0].id = (const char *) "DrawMeASheepManagerService";
//        name[0].kind = (const char *) "";

//        // Bind the object into the name service
//        nc->rebind(name, o);

        // Activate the POA
        manager->activate();
        cout << "The server is ready. Awaiting for incoming requests..." << endl;
        // Start the ORB
        orb->run();

=======

    try {
        cout << "Initialisation of ORB " << endl;
        // Initialize the ORB
        CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);
        cout << "Initialisation of ORB end " << endl;

        // Servant must register with POA in order to be made available for client
        // Get a reference to the root POA
        CORBA::Object_var obj = orb->resolve_initial_references("NameService");
        CosNaming::NamingContext_var nc = CosNaming::NamingContext::_narrow (obj);
        assert(!CORBA::is_nil(nc));

        // Bind to CORBA name service. Same name to be requested by client.
        CosNaming::Name name;
        name.length(1);
        name[0].id=CORBA::string_dup("Serveur");
        name[0].kind = CORBA::string_dup ("");

        cout << "Instanciating the serveur " << endl;

        // Operations defined in object interface invoked via an object reference.
        // Instance of CRequestSocketStream_i servant is initialized.
        Server * managerImpl = new Server();
        cout << "Instanciating the serveur end binding object" << endl;

        cout << "Obtain object reference from servant and register in naming service " << endl;

        //------------------------------------------------------------------------
        // Obtain object reference from servant and register in naming service(??)
        //------------------------------------------------------------------------
        CORBA::Object_var SA_obj = managerImpl->_this();
        cout << "Obtain object reference from servant and register in naming service end, SA_obj= " <<  &SA_obj << endl;
        nc->bind (name,SA_obj);
        
        cout << "The server is ready. Awaiting for incoming requests..." << endl;

        // Start the ORB
        orb->run();

        // If orb leaves event handling loop.
        // - currently configured never to time out (??)
        orb->destroy();
        // free(name[0].id); // str_dup does a malloc internally
>>>>>>> 6e2734af8c0c26f05c632bb8817aa451b15b12dc

    }

    catch (CORBA::SystemException &) {
        cerr << "Caught CORBA::SystemException." << endl;
    }
    catch (CORBA::Exception &) {
        cerr << "Caught CORBA::Exception." << endl;
    }
    catch (omniORB::fatalException &fe) {
        cerr << "Caught omniORB::fatalException:" << endl;
        cerr << "  file: " << fe.file() << endl;
        cerr << "  line: " << fe.line() << endl;
        cerr << "  mesg: " << fe.errmsg() << endl;
    }
    catch (...) {
        cerr << "Caught unknown exception." << endl;
    }

    return 0;
}