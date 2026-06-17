package labprgms;
import java.io.*;
public class FileAppend {
	public static void main(String[] args) {
		try {
			// append() --> add text to  the end of the file
			FileWriter writer = new FileWriter("test.txt",true);
			writer.append("\n This another line (x1).");
			writer.close();
			System.out.println("Appended Successfully...");
		}
		catch(IOException e){
			e.printStackTrace();
		}
	}

}
