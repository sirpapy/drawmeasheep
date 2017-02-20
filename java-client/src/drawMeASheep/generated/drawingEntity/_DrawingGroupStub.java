package drawMeASheep.generated.drawingEntity;


/**
* drawMeASheep/generated/drawingEntity/_DrawingGroupStub.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from drawMeASheep.idl
* lundi 20 f�vrier 2017 17 h 06 CET
*/

public class _DrawingGroupStub extends org.omg.CORBA.portable.ObjectImpl implements drawMeASheep.generated.drawingEntity.DrawingGroup
{

  public drawMeASheep.generated.drawingEntity.Drawing[] Drawings ()
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("_get_Drawings", true);
                $in = _invoke ($out);
                drawMeASheep.generated.drawingEntity.Drawing $result[] = drawMeASheep.generated.drawingEntity.DrawingSetHelper.read ($in);
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return Drawings (        );
            } finally {
                _releaseReply ($in);
            }
  } // Drawings

  public double getSurface ()
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("getSurface", true);
                $in = _invoke ($out);
                double $result = $in.read_double ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return getSurface (        );
            } finally {
                _releaseReply ($in);
            }
  } // getSurface

  public double getPerimeter ()
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("getPerimeter", true);
                $in = _invoke ($out);
                double $result = $in.read_double ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return getPerimeter (        );
            } finally {
                _releaseReply ($in);
            }
  } // getPerimeter

  public void translate (double x)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("translate", true);
                $out.write_double (x);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                translate (x        );
            } finally {
                _releaseReply ($in);
            }
  } // translate

  public void homothetie (double x)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("homothetie", true);
                $out.write_double (x);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                homothetie (x        );
            } finally {
                _releaseReply ($in);
            }
  } // homothetie

  public void rotate (double angle)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("rotate", true);
                $out.write_double (angle);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                rotate (angle        );
            } finally {
                _releaseReply ($in);
            }
  } // rotate

  public void centralSymetric (drawMeASheep.generated.drawingEntity.Point p)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("centralSymetric", true);
                drawMeASheep.generated.drawingEntity.PointHelper.write ($out, p);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                centralSymetric (p        );
            } finally {
                _releaseReply ($in);
            }
  } // centralSymetric

  public void axialSymetric (drawMeASheep.generated.drawingEntity.Point p1, drawMeASheep.generated.drawingEntity.Point p2)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("axialSymetric", true);
                drawMeASheep.generated.drawingEntity.PointHelper.write ($out, p1);
                drawMeASheep.generated.drawingEntity.PointHelper.write ($out, p2);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                axialSymetric (p1, p2        );
            } finally {
                _releaseReply ($in);
            }
  } // axialSymetric

  // Type-specific CORBA::Object operations
  private static String[] __ids = {
    "IDL:drawMeASheep/generated/drawingEntity/DrawingGroup:1.0", 
    "IDL:drawMeASheep/generated/drawingEntity/Drawing:1.0"};

  public String[] _ids ()
  {
    return (String[])__ids.clone ();
  }

  private void readObject (java.io.ObjectInputStream s) throws java.io.IOException
  {
     String str = s.readUTF ();
     String[] args = null;
     java.util.Properties props = null;
     org.omg.CORBA.ORB orb = org.omg.CORBA.ORB.init (args, props);
   try {
     org.omg.CORBA.Object obj = orb.string_to_object (str);
     org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl) obj)._get_delegate ();
     _set_delegate (delegate);
   } finally {
     orb.destroy() ;
   }
  }

  private void writeObject (java.io.ObjectOutputStream s) throws java.io.IOException
  {
     String[] args = null;
     java.util.Properties props = null;
     org.omg.CORBA.ORB orb = org.omg.CORBA.ORB.init (args, props);
   try {
     String str = orb.object_to_string (this);
     s.writeUTF (str);
   } finally {
     orb.destroy() ;
   }
  }
} // class _DrawingGroupStub
