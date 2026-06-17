package labprgms;
import java.util.InputMismatchException;
import java.util.Scanner;
public class ExceptionExample1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Division");
		try{
			System.out.println("Enter the first number");
			int num1 = sc.nextInt();
			System.out.println("Enter the second number");
			int num2 = sc.nextInt(); 
			int qt = num1/num2;
			System.out.println("Quotient : "+qt);
		}
		catch(InputMismatchException e) {
			System.out.println("Wrong input");
		}
		catch(ArithmeticException e) {
			System.out.println("Cant divide by 0");
		}
		catch(Exception e) {
			System.out.println("Some error occured : "+e.getMessage());
		}
		finally {
			System.out.println("Program completed");
		}
	}
}
