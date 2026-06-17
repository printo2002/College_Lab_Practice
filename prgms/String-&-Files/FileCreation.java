package labprgms;
import java.io.*;
public class FileCreation {

	public static void main(String[] args) {
		// File Creation
//		File myFile = new File("C:\\Users\\print\\eclipse-workspace\\Labprgms\\src\\printopkg\\test.txt");
		File myFile = new File("test.txt");

		try {
			if(myFile.createNewFile() == true)
			{
				System.out.println("	File Created at "+myFile.getAbsolutePath());
			}
			else {
				System.out.println("Not able to create");
			}
		}
		catch(IOException e){
			e.printStackTrace();
		}
	}

}
