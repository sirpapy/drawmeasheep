package drawMeASheep.generated.entity;

/**
* drawMeASheep/generated/entity/PolygoneHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from drawMeASheep.idl
* lundi 20 f�vrier 2017 17 h 22 CET
*/

public final class PolygoneHolder implements org.omg.CORBA.portable.Streamable
{
  public drawMeASheep.generated.entity.Polygone value = null;

  public PolygoneHolder ()
  {
  }

  public PolygoneHolder (drawMeASheep.generated.entity.Polygone initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = drawMeASheep.generated.entity.PolygoneHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    drawMeASheep.generated.entity.PolygoneHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return drawMeASheep.generated.entity.PolygoneHelper.type ();
  }

}