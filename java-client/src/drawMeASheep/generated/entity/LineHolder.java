package drawMeASheep.generated.entity;

/**
* drawMeASheep/generated/entity/LineHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from drawMeASheep.idl
* lundi 20 f�vrier 2017 17 h 22 CET
*/

public final class LineHolder implements org.omg.CORBA.portable.Streamable
{
  public drawMeASheep.generated.entity.Line value = null;

  public LineHolder ()
  {
  }

  public LineHolder (drawMeASheep.generated.entity.Line initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = drawMeASheep.generated.entity.LineHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    drawMeASheep.generated.entity.LineHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return drawMeASheep.generated.entity.LineHelper.type ();
  }

}