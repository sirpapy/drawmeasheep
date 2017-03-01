//
// Example code for implementing IDL interfaces in file drawMeASheep.idl
//

#include <iostream>
#include <drawMeASheep.hh>

//
// Example class implementing IDL interface drawMeASheep::generated::entity::Drawing
//
class drawMeASheep_generated_entity_Drawing_i : public POA_drawMeASheep::generated::entity::Drawing {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_entity_Drawing_i();

public:
  // standard constructor
  drawMeASheep_generated_entity_Drawing_i();
  virtual ~drawMeASheep_generated_entity_Drawing_i();

  // methods corresponding to defined IDL attributes and operations
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymmetry(const drawMeASheep::generated::entity::Point& p);
  void axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};

//
// Example implementation code for IDL interface 'drawMeASheep::generated::entity::Drawing'
//
drawMeASheep_generated_entity_Drawing_i::drawMeASheep_generated_entity_Drawing_i(){
  // add extra constructor code here
}
drawMeASheep_generated_entity_Drawing_i::~drawMeASheep_generated_entity_Drawing_i(){
  // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
::CORBA::Double drawMeASheep_generated_entity_Drawing_i::getSurface()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Drawing_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_entity_Drawing_i::getPerimeter()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Drawing_i::getPerimeter()>"
}

void drawMeASheep_generated_entity_Drawing_i::translate(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Drawing_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Drawing_i::homothetie(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Drawing_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Drawing_i::rotate(::CORBA::Double angle)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Drawing_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_entity_Drawing_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Drawing_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)>"
}

void drawMeASheep_generated_entity_Drawing_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Drawing_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)>"
}



// End of example implementation code

//
// Example class implementing IDL interface drawMeASheep::generated::entity::Polygon
//
class drawMeASheep_generated_entity_Polygon_i : public POA_drawMeASheep::generated::entity::Polygon {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_entity_Polygon_i();

public:
  // standard constructor
  drawMeASheep_generated_entity_Polygon_i();
  virtual ~drawMeASheep_generated_entity_Polygon_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::entity::PointSet* points()
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymmetry(const drawMeASheep::generated::entity::Point& p);
  void axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};

//
// Example implementation code for IDL interface 'drawMeASheep::generated::entity::Polygon'
//
drawMeASheep_generated_entity_Polygon_i::drawMeASheep_generated_entity_Polygon_i(){
  // add extra constructor code here
}
drawMeASheep_generated_entity_Polygon_i::~drawMeASheep_generated_entity_Polygon_i(){
  // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
drawMeASheep::generated::entity::PointSet* drawMeASheep_generated_entity_Polygon_i::points()
{
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::entity::PointSet* drawMeASheep_generated_entity_Polygon_i::points()>"
}

::CORBA::Double drawMeASheep_generated_entity_Polygon_i::getSurface()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Polygon_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_entity_Polygon_i::getPerimeter()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Polygon_i::getPerimeter()>"
}

void drawMeASheep_generated_entity_Polygon_i::translate(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Polygon_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Polygon_i::homothetie(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Polygon_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Polygon_i::rotate(::CORBA::Double angle)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Polygon_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_entity_Polygon_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Polygon_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)>"
}

void drawMeASheep_generated_entity_Polygon_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Polygon_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)>"
}



// End of example implementation code

//
// Example class implementing IDL interface drawMeASheep::generated::entity::Line
//
class drawMeASheep_generated_entity_Line_i : public POA_drawMeASheep::generated::entity::Line {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_entity_Line_i();

public:
  // standard constructor
  drawMeASheep_generated_entity_Line_i();
  virtual ~drawMeASheep_generated_entity_Line_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::entity::Point a()
  drawMeASheep::generated::entity::Point b()
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymmetry(const drawMeASheep::generated::entity::Point& p);
  void axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};

//
// Example implementation code for IDL interface 'drawMeASheep::generated::entity::Line'
//
drawMeASheep_generated_entity_Line_i::drawMeASheep_generated_entity_Line_i(){
  // add extra constructor code here
}
drawMeASheep_generated_entity_Line_i::~drawMeASheep_generated_entity_Line_i(){
  // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
drawMeASheep::generated::entity::Point drawMeASheep_generated_entity_Line_i::a()
{
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::entity::Point drawMeASheep_generated_entity_Line_i::a()>"
}

drawMeASheep::generated::entity::Point drawMeASheep_generated_entity_Line_i::b()
{
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::entity::Point drawMeASheep_generated_entity_Line_i::b()>"
}

::CORBA::Double drawMeASheep_generated_entity_Line_i::getSurface()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Line_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_entity_Line_i::getPerimeter()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Line_i::getPerimeter()>"
}

void drawMeASheep_generated_entity_Line_i::translate(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Line_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Line_i::homothetie(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Line_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Line_i::rotate(::CORBA::Double angle)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Line_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_entity_Line_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Line_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)>"
}

void drawMeASheep_generated_entity_Line_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Line_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)>"
}



// End of example implementation code

//
// Example class implementing IDL interface drawMeASheep::generated::entity::Circle
//
class drawMeASheep_generated_entity_Circle_i : public POA_drawMeASheep::generated::entity::Circle {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_entity_Circle_i();

public:
  // standard constructor
  drawMeASheep_generated_entity_Circle_i();
  virtual ~drawMeASheep_generated_entity_Circle_i();

  // methods corresponding to defined IDL attributes and operations
  ::CORBA::Double radius()
  void center(const drawMeASheep::generated::entity::Point&)
  drawMeASheep::generated::entity::Point center()
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymmetry(const drawMeASheep::generated::entity::Point& p);
  void axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};

//
// Example implementation code for IDL interface 'drawMeASheep::generated::entity::Circle'
//
drawMeASheep_generated_entity_Circle_i::drawMeASheep_generated_entity_Circle_i(){
  // add extra constructor code here
}
drawMeASheep_generated_entity_Circle_i::~drawMeASheep_generated_entity_Circle_i(){
  // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
::CORBA::Double drawMeASheep_generated_entity_Circle_i::radius()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Circle_i::radius()>"
}

void drawMeASheep_generated_entity_Circle_i::center(const drawMeASheep::generated::entity::Point&)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Circle_i::center(const drawMeASheep::generated::entity::Point&)>"
}

drawMeASheep::generated::entity::Point drawMeASheep_generated_entity_Circle_i::center()
{
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::entity::Point drawMeASheep_generated_entity_Circle_i::center()>"
}

::CORBA::Double drawMeASheep_generated_entity_Circle_i::getSurface()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Circle_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_entity_Circle_i::getPerimeter()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Circle_i::getPerimeter()>"
}

void drawMeASheep_generated_entity_Circle_i::translate(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Circle_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Circle_i::homothetie(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Circle_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Circle_i::rotate(::CORBA::Double angle)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Circle_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_entity_Circle_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Circle_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)>"
}

void drawMeASheep_generated_entity_Circle_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Circle_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)>"
}



// End of example implementation code

//
// Example class implementing IDL interface drawMeASheep::generated::entity::Ellipse
//
class drawMeASheep_generated_entity_Ellipse_i : public POA_drawMeASheep::generated::entity::Ellipse {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_entity_Ellipse_i();

public:
  // standard constructor
  drawMeASheep_generated_entity_Ellipse_i();
  virtual ~drawMeASheep_generated_entity_Ellipse_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::entity::PointSet* points()
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymmetry(const drawMeASheep::generated::entity::Point& p);
  void axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};

//
// Example implementation code for IDL interface 'drawMeASheep::generated::entity::Ellipse'
//
drawMeASheep_generated_entity_Ellipse_i::drawMeASheep_generated_entity_Ellipse_i(){
  // add extra constructor code here
}
drawMeASheep_generated_entity_Ellipse_i::~drawMeASheep_generated_entity_Ellipse_i(){
  // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
drawMeASheep::generated::entity::PointSet* drawMeASheep_generated_entity_Ellipse_i::points()
{
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::entity::PointSet* drawMeASheep_generated_entity_Ellipse_i::points()>"
}

::CORBA::Double drawMeASheep_generated_entity_Ellipse_i::getSurface()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Ellipse_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_entity_Ellipse_i::getPerimeter()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_Ellipse_i::getPerimeter()>"
}

void drawMeASheep_generated_entity_Ellipse_i::translate(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Ellipse_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Ellipse_i::homothetie(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Ellipse_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_Ellipse_i::rotate(::CORBA::Double angle)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Ellipse_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_entity_Ellipse_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Ellipse_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)>"
}

void drawMeASheep_generated_entity_Ellipse_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_Ellipse_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)>"
}



// End of example implementation code

//
// Example class implementing IDL interface drawMeASheep::generated::entity::DrawingGroup
//
class drawMeASheep_generated_entity_DrawingGroup_i : public POA_drawMeASheep::generated::entity::DrawingGroup {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_entity_DrawingGroup_i();

public:
  // standard constructor
  drawMeASheep_generated_entity_DrawingGroup_i();
  virtual ~drawMeASheep_generated_entity_DrawingGroup_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::entity::DrawingSet* Drawings()
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymmetry(const drawMeASheep::generated::entity::Point& p);
  void axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2);
};

//
// Example implementation code for IDL interface 'drawMeASheep::generated::entity::DrawingGroup'
//
drawMeASheep_generated_entity_DrawingGroup_i::drawMeASheep_generated_entity_DrawingGroup_i(){
  // add extra constructor code here
}
drawMeASheep_generated_entity_DrawingGroup_i::~drawMeASheep_generated_entity_DrawingGroup_i(){
  // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
drawMeASheep::generated::entity::DrawingSet* drawMeASheep_generated_entity_DrawingGroup_i::Drawings()
{
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::entity::DrawingSet* drawMeASheep_generated_entity_DrawingGroup_i::Drawings()>"
}

::CORBA::Double drawMeASheep_generated_entity_DrawingGroup_i::getSurface()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_DrawingGroup_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_entity_DrawingGroup_i::getPerimeter()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_entity_DrawingGroup_i::getPerimeter()>"
}

void drawMeASheep_generated_entity_DrawingGroup_i::translate(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_DrawingGroup_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_DrawingGroup_i::homothetie(::CORBA::Double x)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_DrawingGroup_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_entity_DrawingGroup_i::rotate(::CORBA::Double angle)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_DrawingGroup_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_entity_DrawingGroup_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_DrawingGroup_i::centralSymmetry(const drawMeASheep::generated::entity::Point& p)>"
}

void drawMeASheep_generated_entity_DrawingGroup_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)
{
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_entity_DrawingGroup_i::axialSymmetry(const drawMeASheep::generated::entity::Point& p1, const drawMeASheep::generated::entity::Point& p2)>"
}



// End of example implementation code

//
// Example class implementing IDL interface drawMeASheep::generated::manager::DrawingManager
//
class drawMeASheep_generated_manager_DrawingManager_i : public POA_drawMeASheep::generated::manager::DrawingManager {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_manager_DrawingManager_i();

public:
  // standard constructor
  drawMeASheep_generated_manager_DrawingManager_i();
  virtual ~drawMeASheep_generated_manager_DrawingManager_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::entity::DrawingMap* map()
  ::CORBA::Any* createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon);
  ::CORBA::Boolean add(const ::CORBA::Any& a);
  ::CORBA::Boolean isFull();
  ::CORBA::Double getAvailableSurface();
};

//
// Example implementation code for IDL interface 'drawMeASheep::generated::manager::DrawingManager'
//
drawMeASheep_generated_manager_DrawingManager_i::drawMeASheep_generated_manager_DrawingManager_i(){
  // add extra constructor code here
}
drawMeASheep_generated_manager_DrawingManager_i::~drawMeASheep_generated_manager_DrawingManager_i(){
  // add extra destructor code here
}

// Methods corresponding to IDL attributes and operations
drawMeASheep::generated::entity::DrawingMap* drawMeASheep_generated_manager_DrawingManager_i::map()
{
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::entity::DrawingMap* drawMeASheep_generated_manager_DrawingManager_i::map()>"
}

::CORBA::Any* drawMeASheep_generated_manager_DrawingManager_i::createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon)
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Any* drawMeASheep_generated_manager_DrawingManager_i::createDrawing(const char* name, const drawMeASheep::generated::entity::PointSet& points, ::CORBA::Double rayon)>"
}

::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::add(const ::CORBA::Any& a)
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::add(const ::CORBA::Any& a)>"
}

::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::isFull()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::isFull()>"
}

::CORBA::Double drawMeASheep_generated_manager_DrawingManager_i::getAvailableSurface()
{
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_manager_DrawingManager_i::getAvailableSurface()>"
}



// End of example implementation code



int main(int argc, char** argv)
{
  try {
    // Initialise the ORB.
    CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);

    // Obtain a reference to the root POA.
    CORBA::Object_var obj = orb->resolve_initial_references("RootPOA");
    PortableServer::POA_var poa = PortableServer::POA::_narrow(obj);

    // We allocate the objects on the heap.  Since these are reference
    // counted objects, they will be deleted by the POA when they are no
    // longer needed.
    drawMeASheep_generated_entity_Drawing_i* mydrawMeASheep_generated_entity_Drawing_i = new drawMeASheep_generated_entity_Drawing_i();
    drawMeASheep_generated_entity_Polygon_i* mydrawMeASheep_generated_entity_Polygon_i = new drawMeASheep_generated_entity_Polygon_i();
    drawMeASheep_generated_entity_Line_i* mydrawMeASheep_generated_entity_Line_i = new drawMeASheep_generated_entity_Line_i();
    drawMeASheep_generated_entity_Circle_i* mydrawMeASheep_generated_entity_Circle_i = new drawMeASheep_generated_entity_Circle_i();
    drawMeASheep_generated_entity_Ellipse_i* mydrawMeASheep_generated_entity_Ellipse_i = new drawMeASheep_generated_entity_Ellipse_i();
    drawMeASheep_generated_entity_DrawingGroup_i* mydrawMeASheep_generated_entity_DrawingGroup_i = new drawMeASheep_generated_entity_DrawingGroup_i();
    drawMeASheep_generated_manager_DrawingManager_i* mydrawMeASheep_generated_manager_DrawingManager_i = new drawMeASheep_generated_manager_DrawingManager_i();


    // Activate the objects.  This tells the POA that the objects are
    // ready to accept requests.
    PortableServer::ObjectId_var mydrawMeASheep_generated_entity_Drawing_iid = poa->activate_object(mydrawMeASheep_generated_entity_Drawing_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_entity_Polygon_iid = poa->activate_object(mydrawMeASheep_generated_entity_Polygon_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_entity_Line_iid = poa->activate_object(mydrawMeASheep_generated_entity_Line_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_entity_Circle_iid = poa->activate_object(mydrawMeASheep_generated_entity_Circle_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_entity_Ellipse_iid = poa->activate_object(mydrawMeASheep_generated_entity_Ellipse_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_entity_DrawingGroup_iid = poa->activate_object(mydrawMeASheep_generated_entity_DrawingGroup_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_manager_DrawingManager_iid = poa->activate_object(mydrawMeASheep_generated_manager_DrawingManager_i);


    // Obtain a reference to each object and output the stringified
    // IOR to stdout
    {
      // IDL interface: drawMeASheep::generated::entity::Drawing
      CORBA::Object_var ref = mydrawMeASheep_generated_entity_Drawing_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::entity::Drawing IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::entity::Polygon
      CORBA::Object_var ref = mydrawMeASheep_generated_entity_Polygon_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::entity::Polygon IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::entity::Line
      CORBA::Object_var ref = mydrawMeASheep_generated_entity_Line_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::entity::Line IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::entity::Circle
      CORBA::Object_var ref = mydrawMeASheep_generated_entity_Circle_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::entity::Circle IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::entity::Ellipse
      CORBA::Object_var ref = mydrawMeASheep_generated_entity_Ellipse_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::entity::Ellipse IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::entity::DrawingGroup
      CORBA::Object_var ref = mydrawMeASheep_generated_entity_DrawingGroup_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::entity::DrawingGroup IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::manager::DrawingManager
      CORBA::Object_var ref = mydrawMeASheep_generated_manager_DrawingManager_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::manager::DrawingManager IOR = '" << (char*)sior << "'" << std::endl;
    }



    // Obtain a POAManager, and tell the POA to start accepting
    // requests on its objects.
    PortableServer::POAManager_var pman = poa->the_POAManager();
    pman->activate();

    orb->run();
    orb->destroy();
  }
  catch(CORBA::TRANSIENT&) {
    std::cerr << "Caught system exception TRANSIENT -- unable to contact the "
              << "server." << std::endl;
  }
  catch(CORBA::SystemException& ex) {
    std::cerr << "Caught a CORBA::" << ex._name() << std::endl;
  }
  catch(CORBA::Exception& ex) {
    std::cerr << "Caught CORBA::Exception: " << ex._name() << std::endl;
  }
  return 0;
}

