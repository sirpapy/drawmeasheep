/** Author :  NDIAYE Pape
    Review : NDOYE Lamine
    */
	
#ifndef DRAWINGMANAGER_H
#define DRAWINGMANAGER_H
//#include <CORBA.h>
#include "../omni_inst/include/omniORB4/CORBA.h"
#include "../generated/drawMeASheep.hh"
#include <vector>



using namespace std;
const int MAXDRAWING = 10;
const int MAXSURFACE = 100;

class DrawingManagerImpl : public POA_drawMeASheep::generated::manager::DrawingManager,
					public PortableServer::RefCountServantBase
{
	CORBA::ORB_var orb;
public:
	vector <const char*> drawingArray;
	DrawingManagerImpl(){
		drawingArray.reserve(MAXDRAWING);
	}
	drawMeASheep::generated::entity::DrawingMap* map();
    drawMeASheep::generated::entity::Drawing_ptr createDrawing(const char* name, const ::drawMeASheep::generated::manager::Params& parameters);
    ::CORBA::Long add(const char* a);
	::CORBA::Boolean isFull();
	::CORBA::Double getAvailableSurface();
    char* getDrawings();

};


#endif
 