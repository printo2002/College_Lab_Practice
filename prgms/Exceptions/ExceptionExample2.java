package labprgms;
import java.util.InputMismatchException;
import java.util.Scanner;
public class ExceptionExample2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			int [] marks = {25,26,58};
			System.out.println("Enter the index (0,1 or 2) to print the corresponding value");
			int index = sc.nextInt();
			System.out.println("Value : "+marks[index]);
		}
		catch(InputMismatchException e) {
			System.out.println("Wrong input");
		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("Index out of range (0 to 2)");
		}
		catch(Exception e) {
			System.out.println("Some error occured : "+e.getMessage());
		}
		finally {
			System.out.println("Program completed");
		}
	}

}
