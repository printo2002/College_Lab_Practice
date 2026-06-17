package printopkg;
import java.net.*;
import java.io.*;
public class Client {
	private Socket socket = null;
	private DataInputStream input = null;
	private DataOutputStream out = null;
	public Client( String address, int port) {
	try {
		socket = new Socket(address, port);// connect to server using  ip address of server & port nos
		System.out.println("Connected");
		
		// take input from the client socket
		input = new DataInputStream(System.in);
		out = new DataOutputStream(socket.getOutputStream());
		String line = "";
		line = input.readLine(); // to get the input from keyboard
		out.writeUTF(line); // send the data to the server
		input.close();
		out.close();
		
	}
	catch(Exception e){
		System.out.println(e);
		}
	}
}

