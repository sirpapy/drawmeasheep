#include "../include/Server.hpp"
#include <assert.h>

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
		 
		 
		cout << "Getting a reference of the ROOT POA  " << endl;

		// Servant must register with POA in order to be made available for client
        // Get a reference to the root POA
        CORBA::Object_var obj = orb->resolve_initial_references("NameService");
        PortableServer::POA_var _poa = PortableServer::POA::_narrow(obj.in());
       
	   
	   	cout << "Creating an instance of the Server " << endl;

		// Operations defined in object interface invoked via an object reference.
		// Instance of CRequestSocketStream_i servant is initialized.
		Server * managerImpl = new Server();

	   
		// Servant object activated in RootPOA.
        PortableServer::ObjectId_var managerImpl_oid = _poa->activate_object(managerImpl);
		cout << "the servant is activated  in RootPOA, manager_oid =   " <<  &managerImpl_oid << endl;

		//------------------------------------------------------------------------
		// Obtain object reference from servant and register in naming service(??)
		//------------------------------------------------------------------------
		CORBA::Object_var SA_obj = managerImpl->_this();
		cout << "Obtain object reference from servant and register in naming service SA_obj= " <<  &SA_obj << endl;

		   
		// Obtain a reference to the object, and print it out as string IOR.
		 CORBA::String_var sior(orb->object_to_string(SA_obj.in()));
			cerr << "'" << (char*)sior << "'" << endl;
	
		// Bind object to name service as defined by directive InitRef
		// and identifier "OmniNameService" in config file omniORB.cfg.
			CORBA::Object_var rootContextObj =orb->resolve_initial_references("OmniNameService");
			assert(!CORBA::is_nil(rootContextObj.in()));

        // Narrow to the correct type
        CosNaming::NamingContext_var nc =CosNaming::NamingContext::_narrow(rootContextObj.in());
		assert(!CORBA::is_nil(nc.in()));

		// Bind to CORBA name service. Same name to be requested by client.
		CosNaming::Name name;
		name.length(1);
		name[0].id=CORBA::string_dup("DataServiceName1");
		nc->rebind (name,SA_obj.in());

		//========================================================================

		managerImpl->_remove_ref();

		
        // Get a CORBA reference with the POA through the servant
      //  CORBA::Object_var o = _poa->servant_to_reference(managerImpl);

       // CORBA::String_var s = orb->object_to_string(o);
      //  cout <<s<<endl;
//
//        CosNaming::Name name;
//        name.length(1);
//        name[0].id = (const char *) "DrawMeASheepManagerService";
//        name[0].kind = (const char *) "";

//        // Bind the object into the name service
//        nc->rebind(name, o);

        // Activate the POA Manager
		PortableServer::POAManager_var pmgr = _poa->the_POAManager();
        pmgr->activate();
		
        cout << "The server is ready. Awaiting for incoming requests..." << endl;
       
	   // Start the ORB
        orb->run();

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