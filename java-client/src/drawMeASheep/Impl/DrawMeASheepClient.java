/** Author : NDOYE Amadou Lamine
   * Review : Pape NDIAYE
*/
package drawMeASheep.Impl;


import org.omg.CORBA.Any;
import org.omg.CORBA.ORB;
import org.omg.CosNaming.Binding;
import org.omg.CosNaming.BindingHolder;
import org.omg.CosNaming.BindingIterator;
import org.omg.CosNaming.BindingIteratorHelper;
import org.omg.CosNaming.BindingIteratorHolder;
import org.omg.CosNaming.BindingListHolder;
import org.omg.CosNaming.NameComponent;
import org.omg.CosNaming.NamingContextExt;
import org.omg.CosNaming.NamingContextExtHelper;
import org.omg.CosNaming.NamingContextPackage.CannotProceed;
import org.omg.CosNaming.NamingContextPackage.InvalidName;
import org.omg.CosNaming.NamingContextPackage.NotFound;

import drawMeASheep.generated.entity.Cercle;
import drawMeASheep.generated.entity.CercleHelper;
import drawMeASheep.generated.manager.DrawingManager;
import drawMeASheep.generated.manager.DrawingManagerHelper;



public class DrawMeASheepClient {
	
	public static void main(String[] args) {
		try {
			//Properties props = new Properties(); 
		//	props.put("org.omg.PortableInterceptor.ORBInitializerClass.teacher.MyInterceptorInitializer","teacher.MyInterceptorInitializer"); 
			ORB orb = ORB.init(args, null);
			
			NamingContextExt namingContext = NamingContextExtHelper.narrow(orb.resolve_initial_references("NameService"));
			explore(args,namingContext);

			normalClient(args,namingContext, orb);
			
			
		} catch (org.omg.CORBA.ORBPackage.InvalidName e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
	}
	
	public static void normalClient(String[] args,NamingContextExt namingContext,ORB orb){
		try{
			System.out.println("NormalClient");
			Any any = orb.create_any();
			System.out.println("create Any");

			NameComponent[] name = namingContext.to_name("Serveur");
			System.out.println("name  id= " + name[0].id + " kind = " +name[0].kind);

			DrawingManager serverProxy = DrawingManagerHelper.narrow(namingContext.resolve(name));
			System.out.println("serverProxy narrowed ");
			
			if(serverProxy!=null){
				Drawer drawer = new Drawer(serverProxy);
				drawer.run();
			}else{
				System.out.println("Could not connect to the Serveur");
			}
			

			/*
			System.out.println("isFull " +serverProxy.isFull());
			
			double[] params = {1,10} ;
			
			//Any any2 = serverProxy.createDrawing("Cercle", listOfPoint, 10);
			Any any2 = serverProxy.createDrawing("Cercle",params);

			Cercle cercle = CercleHelper.extract(any2);
			if(!serverProxy.isFull()){
				CercleHelper.insert(any, cercle);
				serverProxy.add(any);
			}
			
			System.out.println("Available surface = " +serverProxy.getAvailableSurface());
			
			
			/*
			for(Drawing draw :serverProxy.map()){
				System.out.println("interface = "+draw._get_interface_def()+ " value = "+draw.getSurface());
				
			}
			*/
			
				
		} catch (InvalidName e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (NotFound e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (CannotProceed e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	
	}
	
	public static boolean explore(String[] args,NamingContextExt namingContext){
		try {
			
			BindingListHolder list = new BindingListHolder();
			BindingIteratorHolder it = new BindingIteratorHolder();
			namingContext.list(10, list, it);
	
			for(Binding holder : list.value){
				System.out.println("type = "+holder.binding_type.value());
				System.out.println("value: " +namingContext.to_string(holder.binding_name));
				if(namingContext.to_string(holder.binding_name).equals("Serveur")){
					return true;
				}
			}
			
			if(it != null){
				BindingIterator bIt = BindingIteratorHelper.narrow(it.value);
				if(bIt !=null) {
					 recIt(bIt,namingContext);
					 return true;

				}else{
					System.out.println("null it.value = " + it.value);
				}
					
			}
			
		} catch (InvalidName e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		return false;

	}
	
	private static BindingHolder recIt( BindingIterator bIt,NamingContextExt namingContext) throws InvalidName{
		BindingHolder holder = new BindingHolder();
		if(bIt.next_one(holder)){
			System.out.println("type = "+holder.value.binding_type.value());
			System.out.println("value: " +namingContext.to_string(holder.value.binding_name));
			return recIt(bIt,namingContext);
		}else{
			return null;
		}
	}
}
