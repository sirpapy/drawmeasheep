package drawMeASheep.generated.entity;


/**
* drawMeASheep/generated/entity/DrawingGroupHelper.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from drawMeASheep.idl
* lundi 20 f�vrier 2017 17 h 22 CET
*/

abstract public class DrawingGroupHelper
{
  private static String  _id = "IDL:drawMeASheep/generated/entity/DrawingGroup:1.0";

  public static void insert (org.omg.CORBA.Any a, drawMeASheep.generated.entity.DrawingGroup that)
  {
    org.omg.CORBA.portable.OutputStream out = a.create_output_stream ();
    a.type (type ());
    write (out, that);
    a.read_value (out.create_input_stream (), type ());
  }

  public static drawMeASheep.generated.entity.DrawingGroup extract (org.omg.CORBA.Any a)
  {
    return read (a.create_input_stream ());
  }

  private static org.omg.CORBA.TypeCode __typeCode = null;
  synchronized public static org.omg.CORBA.TypeCode type ()
  {
    if (__typeCode == null)
    {
      __typeCode = org.omg.CORBA.ORB.init ().create_interface_tc (drawMeASheep.generated.entity.DrawingGroupHelper.id (), "DrawingGroup");
    }
    return __typeCode;
  }

  public static String id ()
  {
    return _id;
  }

  public static drawMeASheep.generated.entity.DrawingGroup read (org.omg.CORBA.portable.InputStream istream)
  {
    return narrow (istream.read_Object (_DrawingGroupStub.class));
  }

  public static void write (org.omg.CORBA.portable.OutputStream ostream, drawMeASheep.generated.entity.DrawingGroup value)
  {
    ostream.write_Object ((org.omg.CORBA.Object) value);
  }

  public static drawMeASheep.generated.entity.DrawingGroup narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof drawMeASheep.generated.entity.DrawingGroup)
      return (drawMeASheep.generated.entity.DrawingGroup)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      drawMeASheep.generated.entity._DrawingGroupStub stub = new drawMeASheep.generated.entity._DrawingGroupStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

  public static drawMeASheep.generated.entity.DrawingGroup unchecked_narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof drawMeASheep.generated.entity.DrawingGroup)
      return (drawMeASheep.generated.entity.DrawingGroup)obj;
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      drawMeASheep.generated.entity._DrawingGroupStub stub = new drawMeASheep.generated.entity._DrawingGroupStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

}