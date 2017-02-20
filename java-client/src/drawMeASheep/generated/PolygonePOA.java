package drawMeASheep.generated;


/**
* drawMeASheep/generated/PolygonePOA.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from drawMeASheep.idl
* lundi 20 f�vrier 2017 14 h 41 CET
*/

public abstract class PolygonePOA extends org.omg.PortableServer.Servant
 implements drawMeASheep.generated.PolygoneOperations, org.omg.CORBA.portable.InvokeHandler
{

  // Constructors

  private static java.util.Hashtable _methods = new java.util.Hashtable ();
  static
  {
    _methods.put ("_get_points", new java.lang.Integer (0));
    _methods.put ("getSurface", new java.lang.Integer (1));
    _methods.put ("getPerimeter", new java.lang.Integer (2));
    _methods.put ("translate", new java.lang.Integer (3));
    _methods.put ("homothetie", new java.lang.Integer (4));
    _methods.put ("rotate", new java.lang.Integer (5));
    _methods.put ("centralSymetric", new java.lang.Integer (6));
    _methods.put ("axialSymetric", new java.lang.Integer (7));
  }

  public org.omg.CORBA.portable.OutputStream _invoke (String $method,
                                org.omg.CORBA.portable.InputStream in,
                                org.omg.CORBA.portable.ResponseHandler $rh)
  {
    org.omg.CORBA.portable.OutputStream out = null;
    java.lang.Integer __method = (java.lang.Integer)_methods.get ($method);
    if (__method == null)
      throw new org.omg.CORBA.BAD_OPERATION (0, org.omg.CORBA.CompletionStatus.COMPLETED_MAYBE);

    switch (__method.intValue ())
    {
       case 0:  // drawMeASheep/generated/Polygone/_get_points
       {
         drawMeASheep.generated.Point $result[] = null;
         $result = this.points ();
         out = $rh.createReply();
         drawMeASheep.generated.PointSetHelper.write (out, $result);
         break;
       }

       case 1:  // drawMeASheep/generated/Drawing/getSurface
       {
         double $result = (double)0;
         $result = this.getSurface ();
         out = $rh.createReply();
         out.write_double ($result);
         break;
       }

       case 2:  // drawMeASheep/generated/Drawing/getPerimeter
       {
         double $result = (double)0;
         $result = this.getPerimeter ();
         out = $rh.createReply();
         out.write_double ($result);
         break;
       }

       case 3:  // drawMeASheep/generated/Drawing/translate
       {
         double x = in.read_double ();
         this.translate (x);
         out = $rh.createReply();
         break;
       }

       case 4:  // drawMeASheep/generated/Drawing/homothetie
       {
         double x = in.read_double ();
         this.homothetie (x);
         out = $rh.createReply();
         break;
       }

       case 5:  // drawMeASheep/generated/Drawing/rotate
       {
         double angle = in.read_double ();
         this.rotate (angle);
         out = $rh.createReply();
         break;
       }

       case 6:  // drawMeASheep/generated/Drawing/centralSymetric
       {
         drawMeASheep.generated.Point p = drawMeASheep.generated.PointHelper.read (in);
         this.centralSymetric (p);
         out = $rh.createReply();
         break;
       }

       case 7:  // drawMeASheep/generated/Drawing/axialSymetric
       {
         drawMeASheep.generated.Point p1 = drawMeASheep.generated.PointHelper.read (in);
         drawMeASheep.generated.Point p2 = drawMeASheep.generated.PointHelper.read (in);
         this.axialSymetric (p1, p2);
         out = $rh.createReply();
         break;
       }

       default:
         throw new org.omg.CORBA.BAD_OPERATION (0, org.omg.CORBA.CompletionStatus.COMPLETED_MAYBE);
    }

    return out;
  } // _invoke

  // Type-specific CORBA::Object operations
  private static String[] __ids = {
    "IDL:drawMeASheep/generated/Polygone:1.0", 
    "IDL:drawMeASheep/generated/Drawing:1.0"};

  public String[] _all_interfaces (org.omg.PortableServer.POA poa, byte[] objectId)
  {
    return (String[])__ids.clone ();
  }

  public Polygone _this() 
  {
    return PolygoneHelper.narrow(
    super._this_object());
  }

  public Polygone _this(org.omg.CORBA.ORB orb) 
  {
    return PolygoneHelper.narrow(
    super._this_object(orb));
  }


} // class PolygonePOA
