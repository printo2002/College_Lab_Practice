package labprgms;
import java.io.*;
public class FileWriting {

	public static void main(String[] args) {
		try {
			// write() --> Overwrite the entire file/ write into the file.
			FileWriter writer = new FileWriter("test.txt");
			writer.write("Welcome To Java");
			writer.close();
			System.out.println("Text written Successfully...");
		}
		catch(IOException e){
			e.printStackTrace();
		}
	}

}
