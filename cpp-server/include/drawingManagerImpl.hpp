/** Author :  NDIAYE Pape
    Review : NDOYE Lamine
    */
	
#ifndef DRAWINGMANAGER_H
#define DRAWINGMANAGER_H
//#include <CORBA.h>
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"


using namespace std;
const int MAXDRAWING = 10;
const int MAXSURFACE = 100;

class DrawingManagerImpl : public POA_drawMeASheep::generated::manager::DrawingManager,
					public PortableServer::RefCountServantBase
{
	CORBA::ORB_var orb;
private : 
	 ::CORBA::Any* _drawingArray;
	 int _index ;
public:
	DrawingManagerImpl(){
		_drawingArray = new ::CORBA::Any[MAXDRAWING];
		_index = 0;
	};
	virtual ~DrawingManagerImpl(){
		
	};
		
	drawMeASheep::generated::entity::DrawingMap* map();
	::CORBA::Any* createDrawing(const char* name, const drawMeASheep::generated::manager::Params& parameters);
	::CORBA::Long add(const ::CORBA::Any& a);
	::CORBA::Boolean isFull();
	::CORBA::Double getAvailableSurface();
	::CORBA::Boolean transformDrawing(::CORBA::Double id, const ::drawMeASheep::generated::manager::Params& parameters);
    char* getDrawings();

};


#endif
 