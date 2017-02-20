//
// Example code for implementing IDL interfaces in file drawMeASheep.idl
//

#include <iostream>
#include <drawMeASheep.hh>

//
// Example class implementing IDL interface drawMeASheep::generated::drawingEntity::Drawing
//
class drawMeASheep_generated_drawingEntity_Drawing_i: public POA_drawMeASheep::generated::drawingEntity::Drawing {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_drawingEntity_Drawing_i();
public:
  // standard constructor
  drawMeASheep_generated_drawingEntity_Drawing_i();
  virtual ~drawMeASheep_generated_drawingEntity_Drawing_i();

  // methods corresponding to defined IDL attributes and operations
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p);
  void axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2);

};

//
// Example implementational code for IDL interface drawMeASheep::generated::drawingEntity::Drawing
//
drawMeASheep_generated_drawingEntity_Drawing_i::drawMeASheep_generated_drawingEntity_Drawing_i(){
  // add extra constructor code here
}
drawMeASheep_generated_drawingEntity_Drawing_i::~drawMeASheep_generated_drawingEntity_Drawing_i(){
  // add extra destructor code here
}
//   Methods corresponding to IDL attributes and operations
::CORBA::Double drawMeASheep_generated_drawingEntity_Drawing_i::getSurface(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Drawing_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Drawing_i::getPerimeter(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Drawing_i::getPerimeter()>"
}

void drawMeASheep_generated_drawingEntity_Drawing_i::translate(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Drawing_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Drawing_i::homothetie(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Drawing_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Drawing_i::rotate(::CORBA::Double angle){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Drawing_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_drawingEntity_Drawing_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Drawing_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p)>"
}

void drawMeASheep_generated_drawingEntity_Drawing_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Drawing_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2)>"
}



// End of example implementational code

//
// Example class implementing IDL interface drawMeASheep::generated::drawingEntity::Polygone
//
class drawMeASheep_generated_drawingEntity_Polygone_i: public POA_drawMeASheep::generated::drawingEntity::Polygone {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_drawingEntity_Polygone_i();
public:
  // standard constructor
  drawMeASheep_generated_drawingEntity_Polygone_i();
  virtual ~drawMeASheep_generated_drawingEntity_Polygone_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::drawingEntity::PointSet* points();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p);
  void axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2);

};

//
// Example implementational code for IDL interface drawMeASheep::generated::drawingEntity::Polygone
//
drawMeASheep_generated_drawingEntity_Polygone_i::drawMeASheep_generated_drawingEntity_Polygone_i(){
  // add extra constructor code here
}
drawMeASheep_generated_drawingEntity_Polygone_i::~drawMeASheep_generated_drawingEntity_Polygone_i(){
  // add extra destructor code here
}
//   Methods corresponding to IDL attributes and operations
drawMeASheep::generated::drawingEntity::PointSet* drawMeASheep_generated_drawingEntity_Polygone_i::points(){
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::drawingEntity::PointSet* drawMeASheep_generated_drawingEntity_Polygone_i::points()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Polygone_i::getSurface(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Polygone_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Polygone_i::getPerimeter(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Polygone_i::getPerimeter()>"
}

void drawMeASheep_generated_drawingEntity_Polygone_i::translate(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Polygone_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Polygone_i::homothetie(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Polygone_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Polygone_i::rotate(::CORBA::Double angle){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Polygone_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_drawingEntity_Polygone_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Polygone_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p)>"
}

void drawMeASheep_generated_drawingEntity_Polygone_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Polygone_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2)>"
}



// End of example implementational code

//
// Example class implementing IDL interface drawMeASheep::generated::drawingEntity::Line
//
class drawMeASheep_generated_drawingEntity_Line_i: public POA_drawMeASheep::generated::drawingEntity::Line {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_drawingEntity_Line_i();
public:
  // standard constructor
  drawMeASheep_generated_drawingEntity_Line_i();
  virtual ~drawMeASheep_generated_drawingEntity_Line_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::drawingEntity::Point a();
  drawMeASheep::generated::drawingEntity::Point b();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p);
  void axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2);

};

//
// Example implementational code for IDL interface drawMeASheep::generated::drawingEntity::Line
//
drawMeASheep_generated_drawingEntity_Line_i::drawMeASheep_generated_drawingEntity_Line_i(){
  // add extra constructor code here
}
drawMeASheep_generated_drawingEntity_Line_i::~drawMeASheep_generated_drawingEntity_Line_i(){
  // add extra destructor code here
}
//   Methods corresponding to IDL attributes and operations
drawMeASheep::generated::drawingEntity::Point drawMeASheep_generated_drawingEntity_Line_i::a(){
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::drawingEntity::Point drawMeASheep_generated_drawingEntity_Line_i::a()>"
}

drawMeASheep::generated::drawingEntity::Point drawMeASheep_generated_drawingEntity_Line_i::b(){
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::drawingEntity::Point drawMeASheep_generated_drawingEntity_Line_i::b()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Line_i::getSurface(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Line_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Line_i::getPerimeter(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Line_i::getPerimeter()>"
}

void drawMeASheep_generated_drawingEntity_Line_i::translate(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Line_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Line_i::homothetie(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Line_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Line_i::rotate(::CORBA::Double angle){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Line_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_drawingEntity_Line_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Line_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p)>"
}

void drawMeASheep_generated_drawingEntity_Line_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Line_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2)>"
}



// End of example implementational code

//
// Example class implementing IDL interface drawMeASheep::generated::drawingEntity::Cercle
//
class drawMeASheep_generated_drawingEntity_Cercle_i: public POA_drawMeASheep::generated::drawingEntity::Cercle {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_drawingEntity_Cercle_i();
public:
  // standard constructor
  drawMeASheep_generated_drawingEntity_Cercle_i();
  virtual ~drawMeASheep_generated_drawingEntity_Cercle_i();

  // methods corresponding to defined IDL attributes and operations
  ::CORBA::Double rayon();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p);
  void axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2);

};

//
// Example implementational code for IDL interface drawMeASheep::generated::drawingEntity::Cercle
//
drawMeASheep_generated_drawingEntity_Cercle_i::drawMeASheep_generated_drawingEntity_Cercle_i(){
  // add extra constructor code here
}
drawMeASheep_generated_drawingEntity_Cercle_i::~drawMeASheep_generated_drawingEntity_Cercle_i(){
  // add extra destructor code here
}
//   Methods corresponding to IDL attributes and operations
::CORBA::Double drawMeASheep_generated_drawingEntity_Cercle_i::rayon(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Cercle_i::rayon()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Cercle_i::getSurface(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Cercle_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Cercle_i::getPerimeter(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Cercle_i::getPerimeter()>"
}

void drawMeASheep_generated_drawingEntity_Cercle_i::translate(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Cercle_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Cercle_i::homothetie(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Cercle_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Cercle_i::rotate(::CORBA::Double angle){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Cercle_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_drawingEntity_Cercle_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Cercle_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p)>"
}

void drawMeASheep_generated_drawingEntity_Cercle_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Cercle_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2)>"
}



// End of example implementational code

//
// Example class implementing IDL interface drawMeASheep::generated::drawingEntity::Ellipse
//
class drawMeASheep_generated_drawingEntity_Ellipse_i: public POA_drawMeASheep::generated::drawingEntity::Ellipse {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_drawingEntity_Ellipse_i();
public:
  // standard constructor
  drawMeASheep_generated_drawingEntity_Ellipse_i();
  virtual ~drawMeASheep_generated_drawingEntity_Ellipse_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::drawingEntity::PointSet* points();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p);
  void axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2);

};

//
// Example implementational code for IDL interface drawMeASheep::generated::drawingEntity::Ellipse
//
drawMeASheep_generated_drawingEntity_Ellipse_i::drawMeASheep_generated_drawingEntity_Ellipse_i(){
  // add extra constructor code here
}
drawMeASheep_generated_drawingEntity_Ellipse_i::~drawMeASheep_generated_drawingEntity_Ellipse_i(){
  // add extra destructor code here
}
//   Methods corresponding to IDL attributes and operations
drawMeASheep::generated::drawingEntity::PointSet* drawMeASheep_generated_drawingEntity_Ellipse_i::points(){
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::drawingEntity::PointSet* drawMeASheep_generated_drawingEntity_Ellipse_i::points()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Ellipse_i::getSurface(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Ellipse_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_Ellipse_i::getPerimeter(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_Ellipse_i::getPerimeter()>"
}

void drawMeASheep_generated_drawingEntity_Ellipse_i::translate(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Ellipse_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Ellipse_i::homothetie(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Ellipse_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_Ellipse_i::rotate(::CORBA::Double angle){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Ellipse_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_drawingEntity_Ellipse_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Ellipse_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p)>"
}

void drawMeASheep_generated_drawingEntity_Ellipse_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_Ellipse_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2)>"
}



// End of example implementational code

//
// Example class implementing IDL interface drawMeASheep::generated::drawingEntity::DrawingGroup
//
class drawMeASheep_generated_drawingEntity_DrawingGroup_i: public POA_drawMeASheep::generated::drawingEntity::DrawingGroup {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_drawingEntity_DrawingGroup_i();
public:
  // standard constructor
  drawMeASheep_generated_drawingEntity_DrawingGroup_i();
  virtual ~drawMeASheep_generated_drawingEntity_DrawingGroup_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::drawingEntity::DrawingSet* Drawings();
  ::CORBA::Double getSurface();
  ::CORBA::Double getPerimeter();
  void translate(::CORBA::Double x);
  void homothetie(::CORBA::Double x);
  void rotate(::CORBA::Double angle);
  void centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p);
  void axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2);

};

//
// Example implementational code for IDL interface drawMeASheep::generated::drawingEntity::DrawingGroup
//
drawMeASheep_generated_drawingEntity_DrawingGroup_i::drawMeASheep_generated_drawingEntity_DrawingGroup_i(){
  // add extra constructor code here
}
drawMeASheep_generated_drawingEntity_DrawingGroup_i::~drawMeASheep_generated_drawingEntity_DrawingGroup_i(){
  // add extra destructor code here
}
//   Methods corresponding to IDL attributes and operations
drawMeASheep::generated::drawingEntity::DrawingSet* drawMeASheep_generated_drawingEntity_DrawingGroup_i::Drawings(){
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::drawingEntity::DrawingSet* drawMeASheep_generated_drawingEntity_DrawingGroup_i::Drawings()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_DrawingGroup_i::getSurface(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_DrawingGroup_i::getSurface()>"
}

::CORBA::Double drawMeASheep_generated_drawingEntity_DrawingGroup_i::getPerimeter(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_drawingEntity_DrawingGroup_i::getPerimeter()>"
}

void drawMeASheep_generated_drawingEntity_DrawingGroup_i::translate(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_DrawingGroup_i::translate(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_DrawingGroup_i::homothetie(::CORBA::Double x){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_DrawingGroup_i::homothetie(::CORBA::Double x)>"
}

void drawMeASheep_generated_drawingEntity_DrawingGroup_i::rotate(::CORBA::Double angle){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_DrawingGroup_i::rotate(::CORBA::Double angle)>"
}

void drawMeASheep_generated_drawingEntity_DrawingGroup_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_DrawingGroup_i::centralSymetric(const drawMeASheep::generated::drawingEntity::Point& p)>"
}

void drawMeASheep_generated_drawingEntity_DrawingGroup_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2){
  // insert code here and remove the warning
  #warning "Code missing in function <void drawMeASheep_generated_drawingEntity_DrawingGroup_i::axialSymetric(const drawMeASheep::generated::drawingEntity::Point& p1, const drawMeASheep::generated::drawingEntity::Point& p2)>"
}



// End of example implementational code

//
// Example class implementing IDL interface drawMeASheep::generated::manager::DrawingManager
//
class drawMeASheep_generated_manager_DrawingManager_i: public POA_drawMeASheep::generated::manager::DrawingManager {
private:
  // Make sure all instances are built on the heap by making the
  // destructor non-public
  //virtual ~drawMeASheep_generated_manager_DrawingManager_i();
public:
  // standard constructor
  drawMeASheep_generated_manager_DrawingManager_i();
  virtual ~drawMeASheep_generated_manager_DrawingManager_i();

  // methods corresponding to defined IDL attributes and operations
  drawMeASheep::generated::drawingEntity::DrawingMap* map();
  ::CORBA::Any* createDrawing(const char* name, const drawMeASheep::generated::drawingEntity::PointSet& points, ::CORBA::Double rayon);
  ::CORBA::Boolean add(const ::CORBA::Any& a);
  ::CORBA::Boolean isFull();
  ::CORBA::Double getAvailableSurface();

};

//
// Example implementational code for IDL interface drawMeASheep::generated::manager::DrawingManager
//
drawMeASheep_generated_manager_DrawingManager_i::drawMeASheep_generated_manager_DrawingManager_i(){
  // add extra constructor code here
}
drawMeASheep_generated_manager_DrawingManager_i::~drawMeASheep_generated_manager_DrawingManager_i(){
  // add extra destructor code here
}
//   Methods corresponding to IDL attributes and operations
drawMeASheep::generated::drawingEntity::DrawingMap* drawMeASheep_generated_manager_DrawingManager_i::map(){
  // insert code here and remove the warning
  #warning "Code missing in function <drawMeASheep::generated::drawingEntity::DrawingMap* drawMeASheep_generated_manager_DrawingManager_i::map()>"
}

::CORBA::Any* drawMeASheep_generated_manager_DrawingManager_i::createDrawing(const char* name, const drawMeASheep::generated::drawingEntity::PointSet& points, ::CORBA::Double rayon){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Any* drawMeASheep_generated_manager_DrawingManager_i::createDrawing(const char* name, const drawMeASheep::generated::drawingEntity::PointSet& points, ::CORBA::Double rayon)>"
}

::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::add(const ::CORBA::Any& a){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::add(const ::CORBA::Any& a)>"
}

::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::isFull(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Boolean drawMeASheep_generated_manager_DrawingManager_i::isFull()>"
}

::CORBA::Double drawMeASheep_generated_manager_DrawingManager_i::getAvailableSurface(){
  // insert code here and remove the warning
  #warning "Code missing in function <::CORBA::Double drawMeASheep_generated_manager_DrawingManager_i::getAvailableSurface()>"
}



// End of example implementational code



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
    drawMeASheep_generated_drawingEntity_Drawing_i* mydrawMeASheep_generated_drawingEntity_Drawing_i = new drawMeASheep_generated_drawingEntity_Drawing_i();
    drawMeASheep_generated_drawingEntity_Polygone_i* mydrawMeASheep_generated_drawingEntity_Polygone_i = new drawMeASheep_generated_drawingEntity_Polygone_i();
    drawMeASheep_generated_drawingEntity_Line_i* mydrawMeASheep_generated_drawingEntity_Line_i = new drawMeASheep_generated_drawingEntity_Line_i();
    drawMeASheep_generated_drawingEntity_Cercle_i* mydrawMeASheep_generated_drawingEntity_Cercle_i = new drawMeASheep_generated_drawingEntity_Cercle_i();
    drawMeASheep_generated_drawingEntity_Ellipse_i* mydrawMeASheep_generated_drawingEntity_Ellipse_i = new drawMeASheep_generated_drawingEntity_Ellipse_i();
    drawMeASheep_generated_drawingEntity_DrawingGroup_i* mydrawMeASheep_generated_drawingEntity_DrawingGroup_i = new drawMeASheep_generated_drawingEntity_DrawingGroup_i();
    drawMeASheep_generated_manager_DrawingManager_i* mydrawMeASheep_generated_manager_DrawingManager_i = new drawMeASheep_generated_manager_DrawingManager_i();


    // Activate the objects.  This tells the POA that the objects are
    // ready to accept requests.
    PortableServer::ObjectId_var mydrawMeASheep_generated_drawingEntity_Drawing_iid = poa->activate_object(mydrawMeASheep_generated_drawingEntity_Drawing_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_drawingEntity_Polygone_iid = poa->activate_object(mydrawMeASheep_generated_drawingEntity_Polygone_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_drawingEntity_Line_iid = poa->activate_object(mydrawMeASheep_generated_drawingEntity_Line_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_drawingEntity_Cercle_iid = poa->activate_object(mydrawMeASheep_generated_drawingEntity_Cercle_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_drawingEntity_Ellipse_iid = poa->activate_object(mydrawMeASheep_generated_drawingEntity_Ellipse_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_drawingEntity_DrawingGroup_iid = poa->activate_object(mydrawMeASheep_generated_drawingEntity_DrawingGroup_i);
    PortableServer::ObjectId_var mydrawMeASheep_generated_manager_DrawingManager_iid = poa->activate_object(mydrawMeASheep_generated_manager_DrawingManager_i);


    // Obtain a reference to each object and output the stringified
    // IOR to stdout
    {
      // IDL interface: drawMeASheep::generated::drawingEntity::Drawing
      CORBA::Object_var ref = mydrawMeASheep_generated_drawingEntity_Drawing_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::drawingEntity::Drawing IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::drawingEntity::Polygone
      CORBA::Object_var ref = mydrawMeASheep_generated_drawingEntity_Polygone_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::drawingEntity::Polygone IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::drawingEntity::Line
      CORBA::Object_var ref = mydrawMeASheep_generated_drawingEntity_Line_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::drawingEntity::Line IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::drawingEntity::Cercle
      CORBA::Object_var ref = mydrawMeASheep_generated_drawingEntity_Cercle_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::drawingEntity::Cercle IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::drawingEntity::Ellipse
      CORBA::Object_var ref = mydrawMeASheep_generated_drawingEntity_Ellipse_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::drawingEntity::Ellipse IOR = '" << (char*)sior << "'" << std::endl;
    }

    {
      // IDL interface: drawMeASheep::generated::drawingEntity::DrawingGroup
      CORBA::Object_var ref = mydrawMeASheep_generated_drawingEntity_DrawingGroup_i->_this();
      CORBA::String_var sior(orb->object_to_string(ref));
      std::cout << "IDL object drawMeASheep::generated::drawingEntity::DrawingGroup IOR = '" << (char*)sior << "'" << std::endl;
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
    cerr << "Caught system exception TRANSIENT -- unable to contact the "
         << "server." << endl;
  }
  catch(CORBA::SystemException& ex) {
    cerr << "Caught a CORBA::" << ex._name() << endl;
  }
  catch(CORBA::Exception& ex) {
    cerr << "Caught CORBA::Exception: " << ex._name() << endl;
  }
  catch(omniORB::fatalException& fe) {
    cerr << "Caught omniORB::fatalException:" << endl;
    cerr << "  file: " << fe.file() << endl;
    cerr << "  line: " << fe.line() << endl;
    cerr << "  mesg: " << fe.errmsg() << endl;
  }
  return 0;
}

