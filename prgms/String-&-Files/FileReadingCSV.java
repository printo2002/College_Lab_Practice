package printopkg;
import java.io.*;
import java.util.Scanner;
public class FileReadingCSV {

	public static void main(String[] args) {
		// File Reading
//		File myFile = new File("C:\Users\print\eclipse-workspace\PrintoJavaLab\titanic.csv");
		File myFile = new File("titanic.csv");
		int Survived = 0;
		try {
			Scanner sc = new Scanner(myFile);
			sc.nextLine();
			while(sc.hasNextLine())
			{
//				System.out.println(sc.nextLine());  // or
				String line = sc.nextLine();
				System.out.println(line);
				String[] data = line.split(","); //split line using comma
				if(Integer.parseInt(data[1]) == 0)
				{
					Survived++;
				}
						
			}
			System.out.println(Survived+" passenger survived");
		}
		catch (FileNotFoundException e){
			e.printStackTrace();
			
		}
	}

}
