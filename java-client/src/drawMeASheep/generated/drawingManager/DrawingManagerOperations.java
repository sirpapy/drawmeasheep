package drawMeASheep.generated.drawingManager;


/**
* drawMeASheep/generated/drawingManager/DrawingManagerOperations.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from drawMeASheep.idl
* lundi 20 f�vrier 2017 17 h 06 CET
*/

public interface DrawingManagerOperations 
{
  drawMeASheep.generated.drawingEntity.Drawing[] map ();
  org.omg.CORBA.Any createDrawing (String name, drawMeASheep.generated.drawingEntity.Point[] points, double rayon);
  boolean add (org.omg.CORBA.Any a);
  boolean isFull ();
  double getAvailableSurface ();
} // interface DrawingManagerOperations