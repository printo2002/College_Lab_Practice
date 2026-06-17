package labprgms;
import java.util.Scanner;

public class Array_user_input {

	public static void main(String[] args) {
		int [] numbers = new int[5];
		Scanner input = new Scanner(System.in);
		System.out.println("Enter 5 values");
		for(int i = 0;i<numbers.length;i++) {
			numbers[i] = input.nextInt();
		}
		System.out.println("Array Contents");
		for(int value:numbers) {
			System.out.print(value+"\t");
		}


	}

}
