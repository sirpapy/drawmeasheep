#ifndef SERVER_H
#define SERVER_H
//#include <CORBA.h>
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"

//NDOYE Amadou Lamine

class DrawingManagerImpl :  public ::POA_drawMeASheep::generated::manager::DrawingManager,
					public PortableServer::RefCountServantBase
{
	CORBA::ORB_var orb;
public:
       	
	drawMeASheep::generated::entity::DrawingMap* map();
	::CORBA::Any* createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon);
	::CORBA::Boolean add(const ::CORBA::Any& a);
	::CORBA::Boolean isFull();
	::CORBA::Double getAvailableSurface();

};


#endif
 