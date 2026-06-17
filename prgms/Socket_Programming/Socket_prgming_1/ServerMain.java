package printopkg;
import java.io.*;
import java.net.*;
public class ServerMain {
	public static void main(String[] args) {
		try{
			ServerSocket ss = new ServerSocket(5000);// 1024 above
			System.out.println("Waiting for client");
			Socket s = ss.accept(); // to establish connection
			System.out.println("Connection Established");
			DataInputStream dis = new DataInputStream(s.getInputStream());
			String str = (String)dis.readUTF();
			System.out.println("message= "+str);
			ss.close();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		
	}

}





// run in cmd 
// first run servermain
// javac ServerMain.java
// java servermain
