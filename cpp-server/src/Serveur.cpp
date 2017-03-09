
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