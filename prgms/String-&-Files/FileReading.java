package labprgms;
import java.io.*;
import java.util.Scanner;
public class FileReading {
	public static void main(String[] args) {
		// File Reading
		File myFile = new File("test.txt");
		try {
			Scanner sc = new Scanner(myFile);
			while(sc.hasNextLine())
			{
				System.out.println(sc.nextLine());
			}
		}
		catch (FileNotFoundException e){
			e.printStackTrace();	
		}
	}

}
