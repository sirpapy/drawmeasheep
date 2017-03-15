package drawMeASheep.Impl;


import drawMeASheep.generated.manager.DrawingManager;

public class MainTest {

	public static void main(String[] args) {
		 DrawingManager serverProxy = null;

		Drawer drawer = new Drawer(serverProxy);
		drawer.run();
		
	}
	
	
}
