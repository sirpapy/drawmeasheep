//NDOYE Amadou Lamine
package drawMeASheep.Impl;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

import org.omg.CORBA.Any;

import drawMeASheep.generated.entity.Cercle;
import drawMeASheep.generated.entity.CercleHelper;
import drawMeASheep.generated.entity.Drawing;
import drawMeASheep.generated.entity.Ellipse;
import drawMeASheep.generated.entity.EllipseHelper;
import drawMeASheep.generated.entity.Line;
import drawMeASheep.generated.entity.LineHelper;
import drawMeASheep.generated.entity.Point;
import drawMeASheep.generated.entity.Polygone;
import drawMeASheep.generated.entity.PolygoneHelper;
import drawMeASheep.generated.manager.DrawingManager;

public class Drawer {
	
	private final DrawingManager serverProxy;
	private Any sender;
	private final Map<Integer, Drawing> myDrawings ;
	private double[] params;
	
	public Drawer(DrawingManager serverProxy) {
		this.serverProxy = serverProxy;
		myDrawings = new HashMap<>();
		sender = null ;
	}
	

	public void run(){
		try(Scanner scanner  = new Scanner(System.in);){
			while(true){
				System.out.println("What do you want to do ? ");
				System.out.println(getCommand());
				String readed = scanner.nextLine(); 
				if(readed!=null && !readed.isEmpty() ){
					switch(readed.toLowerCase()){
					case "draw":
						System.out.println(getShapeCommand());
						readed = scanner.nextLine();
						if(processDraw(readed)){
							System.out.println("Shapped added to the board");
						}else{
							System.out.println("Shapped not added to the board, retry with smaller size");

						}
						break;

					case "transform":
						System.out.println("My drawings :");
						System.out.println(getAllMyDrawing());
						System.out.println(getTransformCommand());
						readed = scanner.nextLine();
						if(processTransform(readed)){
							System.out.println("Transformation added to the board");

						}else{
							System.out.println("Transformation not added to the board, retry with smaller size");
						}
						break;
					case "viewall":
						System.out.println(processViewAll());
						break;
					default :
						System.out.println("Unknown command ");
						break;
					}
					
				}
				
			}
		}
		
	}
	
	private  String processViewAll() {
		
		return "path or execute open image" ;
	}


	private boolean processDraw(String readed) {
		boolean result = false;
		String[] readedTab = readed.split(" ");
		switch(readedTab[0].toLowerCase()){
		case "ligne":
			if(readedTab.length != 2){
				System.out.println("Wrong number of arguments");
				break;
			}
			params = new double[1]; 
			params[0]=Double.parseDouble(readedTab[1]);
			
			sender = serverProxy.createDrawing("Line", params);
			Line line = LineHelper.extract(sender);
			if(!serverProxy.isFull()){
				LineHelper.insert(sender, line);
				int id = serverProxy.add(sender);
				if(id!= -1){
					myDrawings.put(id, line);
					result = true;
				}else{
					System.out.println("could not add the drawing change");
				}
			}
			break;
		case "cercle":
		if(readedTab.length != 2){
				System.out.println("Wrong number of arguments");
				break;
			}
			params = new double[2]; 
			params[0]=Double.parseDouble(readedTab[1]);
			sender = serverProxy.createDrawing("Cercle", params);
			Cercle cercle = CercleHelper.extract(sender);
			if(!serverProxy.isFull()){
				CercleHelper.insert(sender, cercle);
				int id = serverProxy.add(sender);
				if(id!= -1){
					myDrawings.put(id, cercle);
					result = true;
				}else{
					System.out.println("could not add the drawing change");
				}
			}
				
			break;
		case "polygone":
			if(readedTab.length != 3){
				System.out.println("Wrong number of arguments");
				break;
			}
			params = new double[2]; 
			params[0]=Double.parseDouble(readedTab[1]);
			params[1]=Double.parseDouble(readedTab[2]);
			sender = serverProxy.createDrawing("Cercle", params);
			Polygone polygone = PolygoneHelper.extract(sender);
			if(!serverProxy.isFull()){
				PolygoneHelper.insert(sender, polygone);
				int id = serverProxy.add(sender);
				if(id!= -1){
					myDrawings.put(id, polygone);
					result = true;
				}else{
					System.out.println("could not add the drawing change");
				}
			}
			break;
		case "ellipse":
			if(readedTab.length != 3){
				System.out.println("Wrong number of arguments");
				break;
			}
			params = new double[2]; 
			params[0]=Double.parseDouble(readedTab[1]);
			params[1]=Double.parseDouble(readedTab[2]);
			sender = serverProxy.createDrawing("Cercle", params);
			Ellipse ellipse = EllipseHelper.extract(sender);
			if(!serverProxy.isFull()){
				CercleHelper.insert(sender, ellipse);
				int id = serverProxy.add(sender);
				if(id!= -1){
					myDrawings.put(id, ellipse);
					result = true;
				}else{
					System.out.println("could not add the drawing change");
				}
			}
			break;
		default :
			System.out.println("Unknown command ");
			break;
		}
		params =null;
		sender = null;
		return result;
	}
	private boolean processTransform(String readed) {
			String[] readedTab = readed.split(" ");
			int id = -1;
			if(readedTab.length <= 2 ){
				System.out.println("Wrong number of arguments");
				return false;
			}
			id = Integer.parseInt(readedTab[1]);

			if(!myDrawings.containsKey(id)){
				System.out.println("Unknown shape ID");
				return false;
			}
			switch(readedTab[0].toLowerCase()){
			case "translate":
				if(readedTab.length != 4){
					System.out.println("Wrong number of arguments");
					break;
				}
				params = new double[2]; 
				params[0]=Double.parseDouble(readedTab[2]);
				params[1]=Double.parseDouble(readedTab[3]);
				break;
			case "rotate":
				if(readedTab.length != 3){
					System.out.println("Wrong number of arguments");
					break;
				}
				params = new double[1]; 
				params[0]=Double.parseDouble(readedTab[2]);
				break;
			case "homothety":
				if(readedTab.length != 3){
					System.out.println("Wrong number of arguments");
					break;
				}
				params = new double[1]; 
				params[0]=Double.parseDouble(readedTab[2]);
				break;
			case "symmetryC":
				if(readedTab.length != 4){
					System.out.println("Wrong number of arguments");
					break;
				}
				params = new double[2]; 
				params[0]=Double.parseDouble(readedTab[2]);
				params[1]=Double.parseDouble(readedTab[3]);
				break;
			case "symmetryA":
				if(readedTab.length != 6){
					System.out.println("Wrong number of arguments");
					break;
				}
				params = new double[4]; 
				params[0]=Double.parseDouble(readedTab[2]);
				params[1]=Double.parseDouble(readedTab[3]);
				params[2]=Double.parseDouble(readedTab[4]);
				params[3]=Double.parseDouble(readedTab[5]);
				break;
			
			default :
				System.out.println("Unknown command ");
				break;
			}

			return 	serverProxy.transformDrawing(id, params);
		}
	
	private String getAllMyDrawing(){
		StringBuilder builder = new StringBuilder();
		myDrawings.forEach((id,type) -> builder.append("id = ").append(id).append("type").append(type.getClass().getSimpleName()).append("\n"));
		return builder.toString();
	}

	private String getCommand(){
		return " draw "
				+ "\n transform "
				+ "\n viewAll";
	}

	private String getShapeCommand(){
		return "	ligne size "
				+ "\n	cercle rayon "
				+ "\n	ellipse rayon width"
				+ "\n	polygone side_size number_ofSide";
	}
		
	
	
	private String getTransformCommand(){
		return "	translate id  x y "
				+ "\n	homothety id alpha "
				+ "\n	rotate id angle "
				+ "\n	symmetryC id x y "
				+ "\n	symmetryA id x1 y1 x2 y2";
	
	}

}
