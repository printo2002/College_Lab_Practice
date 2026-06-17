// create program to accept the nos of rows & cols from the user
// Create an 2d array from given size
// Accept values from the user store and print , search an element

package printopkg;
import java.util.Scanner;
public class arrayexe2 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter row size:");
		int rows = input.nextInt();
		System.out.println("Enter column size:");
		int cols = input.nextInt();
		int [][] matrix = new int [rows][cols];

		System.out.println("Enter "+(rows * cols)+" values:");
		for(int row =0;row<matrix.length;row++)
		{
			for(int col =0;col<matrix[row].length;col++)
			{
				matrix[row][col]= input.nextInt();
			}
			System.out.println();
		}
		
		System.out.println("------ Matrix --------");
		for(int [] row: matrix) {
			for(int value:row) {
				System.out.print(value+"\t");
			}
			System.out.println();
		}
		
		System.out.println("Search element:");
		int search = input.nextInt();
		boolean found = false;
		for(int row =0;row<matrix.length;row++)
		{
			for(int col =0;col<matrix[row].length;col++)
			{
				if(search == matrix[row][col])
				{
					System.out.println("Element "+search +" found at row: "+(row+1)+" and cols: "+(col+1));
					found = true;
				}
			}

		}
		if(!found)
		{
			System.out.println("Element not found");
		}


	}

}
