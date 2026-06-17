// Array - input and display
package printopkg;
import java.util.Scanner;
public class array2 {

	public static void main(String[] args) {
		// create a program to  declare an array of size 5 and accept the value from user
		int [] no = new int[5];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter array element:");
		for(int i =0;i<no.length;i++)
		{
			no[i] = sc.nextInt();
		}
		sc.close();
		System.out.println("------- Array element -------");

		for(int value: no) {
			System.out.print(value+"\t");

		}
	}

}
