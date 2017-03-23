#include <assert.h>
//#include <CORBA.h>
#include "../omni_inst/include/omniORB4/CORBA.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "../include/drawingManagerImpl.hpp"


/** Author : NDIAYE PAPE
   * Review : NDOYE Lamine
*/

using namespace std;


int main(int argc, char **argv) {
    // --------------------------------------------------------------------------
    // Start CORBA server:
    // --------------------------------------------------------------------------
// Declare ORB and servant object
    try {


		cout << "Initialisation of ORB " << endl;
        // Initialize the ORB
         CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);
		 
		 // Get a reference to the root POA
        CORBA::Object_var obj = orb->resolve_initial_references("RootPOA");
		PortableServer::POA_var _poa = PortableServer::POA::_narrow(obj.in());
		PortableServer::POAManager_var pmgr = _poa->the_POAManager();
		CORBA::PolicyList policies;
		policies.length(1);

		policies[0] =
			_poa->create_thread_policy
			(PortableServer::SINGLE_THREAD_MODEL);

		PortableServer::POA_var myPOA = _poa->create_POA("myPOA", pmgr, policies);
		 cout << "Initialisation of ORB end " << endl;
		CORBA::ULong len = policies.length();
		for (CORBA::ULong i = 0; i < len; i++)
			policies[i]->destroy();	
		
		cout << "resolve_initial_references NameService " << endl;
		CORBA::Object_var obj1=orb->resolve_initial_references("NameService");
		assert(!CORBA::is_nil(obj1.in()));
		
		// Operations defined in object interface invoked via an object reference.
		// Instance of CRequestSocketStream_i servant is initialized.
		DrawingManagerImpl* managerImpl = new DrawingManagerImpl;
		cout << "Instanciating the serveur end" << endl;

		cout << "Obtainong object reference from servant and register in naming service " << endl;
         PortableServer::ObjectId_var managerImpl_oid = myPOA->activate_object(managerImpl);
		CORBA::Object_var SA_obj = myPOA->servant_to_reference(managerImpl);
		// Get a CORBA reference with the POA through the servant
		
		cout << "Obtain object reference from servant and register in naming service end, SA_obj= " <<  &SA_obj << endl;
			CORBA::String_var sior(orb->object_to_string(SA_obj.in()));
			cerr << "'" << (char*)sior << "'" << endl;
			
		
		
		cout << "Creating Serveur CosNaming" << endl;
		CosNaming::NamingContext_var nc = CosNaming::NamingContext::_narrow(obj1.in());
		assert(!CORBA::is_nil(nc.in()));
		
		CosNaming::Name name;
		name.length(1);
		name[0].id=CORBA::string_dup("Serveur");
		
		cout << "Creating Serveur CosNaming end" << endl;

		cout << "Binding Serveur " << endl;
		
		nc->rebind (name,SA_obj.in());
	  
		cout << "Binding Serveur end " << endl;
		
		cout << "Activating the POA Manager " << endl;
		pmgr->activate();       
	  
	   	cout << "Activating the POA Manager end" << endl;

        cout << "The server is ready. Awaiting for incoming requests..." << endl;
       

	   // Start the ORB
        orb->run();
        cout << "orb stop running ..." << endl;

		// If orb leaves event handling loop.
    // - currently configured never to time out (??)
		orb->destroy();
       free(name[0].id); // str_dup does a malloc internally
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