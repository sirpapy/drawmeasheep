package drawMeASheep.Impl;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

import org.omg.CORBA.Any;

import drawMeASheep.generated.entity.Drawing;
import drawMeASheep.generated.manager.DrawingManager;

public class Drawer {
	
	private final DrawingManager serverProxy;
	private Any sender;
	private final Map<String, Drawing> myDrawings ;
	
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
							
						}else{
							
						}
						break;

					case "transform":
						System.out.println("My drawings :");
						System.out.println(getAllMyDrawing());
						System.out.println(getTransformCommand());
						readed = scanner.nextLine();
						if(processTransform(readed)){
							
						}else{
							
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
		
		String[] readedTab = readed.split(" ");
		switch(readedTab[0].toLowerCase()){
		case "ligne":
			break;
		case "cercle":
			break;
		case "polygone":
			break;
		case "ellipse":
			break;
		default :
			System.out.println("Unknown command ");
			break;
		}
		return false;
	}
	private boolean processTransform(String readed) {
			String[] readedTab = readed.split(" ");
			switch(readedTab[0].toLowerCase()){
			case "transform":
				break;
			case "rotate":
				break;
			case "symmetryC":
				break;
			case "symmetryA":
				break;
			case "homothety":
				break;
			default :
				System.out.println("Unknown command ");
				break;
			}
			return false;
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
		return "	ligne x1 y1 x2 y2 "
				+ "\n	cercle x1 y1 r "
				+ "\n	ellipse x1 y1 r width"
				+ "\n	polygone ";
	}
		
	
	
	private String getTransformCommand(){
		return "	translate id  x y "
				+ "\n	homothety id alpha "
				+ "\n	rotate id angle "
				+ "\n	symmetryC id x y "
				+ "\n	symmetryA id x1 y1 x2 y2";
	
	}

}
