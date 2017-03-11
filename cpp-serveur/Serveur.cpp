#include <stdlib.h>
#include <iostream>
#include <string>
#include <iostream>
#include "drawMeASheep.hh"
#include "managerImpl.h"

using namespace std;


int main(int argc, char** argv)
{
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


  }

  catch(CORBA::SystemException&) {
    cerr << "Caught CORBA::SystemException." << endl;
  }
  catch(CORBA::Exception&) {
    cerr << "Caught CORBA::Exception." << endl;
  }
  catch(omniORB::fatalException& fe) {
    cerr << "Caught omniORB::fatalException:" << endl;
    cerr << "  file: " << fe.file() << endl;
    cerr << "  line: " << fe.line() << endl;
    cerr << "  mesg: " << fe.errmsg() << endl;
  }
  catch(...) {
    cerr << "Caught unknown exception." << endl;
  }

  return 0;
}