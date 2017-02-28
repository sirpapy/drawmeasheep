#include <stdlib.h>
#include <iostream>
#include <string>
#include <iostream>
#include "drawMeASheep.hh"

#include "managerImpl.h"

using namespace std;


int main(int argc, char **argv) {
    // --------------------------------------------------------------------------
    // Start CORBA server:
    // --------------------------------------------------------------------------
// Declare ORB and servant object
    CORBA::ORB_var orb;
    ManagerImpl* Manager = NULL;

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

        // Free policies
        CORBA::ULong len = policies.length();
        for (CORBA::ULong i = 0; i < len; i++)
            policies[i]->destroy();


        // Get a reference to the Naming Service root_context
        CORBA::Object_var rootContextObj =
                orb->resolve_initial_references("NameService");

        // Narrow to the correct type
        CosNaming::NamingContext_var nc =
                CosNaming::NamingContext::_narrow(rootContextObj.in());

        // Create a reference to the servant
        Manager = new ManagerImpl(orb);


        // Activate object
        PortableServer::ObjectId_var myObjID =
                myPOA->activate_object(Manager);






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