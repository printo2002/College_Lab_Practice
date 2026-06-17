package printopkg;
import java.net.*;
import java.io.*;
public class Server {
	private Socket socket = null;
	private ServerSocket server = null;
	private DataInputStream in = null;
	
	public Server(int port) {
		try {
			server = new ServerSocket(port);//Create a server on the given port 
			System.out.println("Server Started");
			System.out.println("Waiting for client .........");
			socket = server.accept();
			System.out.println("Client accepted");
			
			// take input from the client socket
			in = new DataInputStream(new BufferedInputStream(socket.getInputStream()));
			String line = "";
			line = in.readUTF();
			System.out.println(line);
			//close connection
			socket.close();
			in.close();
			
			
			
		}catch(Exception e) {
			System.out.println(e);
		}

	}
}