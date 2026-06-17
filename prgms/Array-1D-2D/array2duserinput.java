// 2D array - user input

package printopkg;
import java.util.*;
public class array2duserinput {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int [][] matrix = new int [2][3];
		System.out.println("Enter 6 values:");
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

	}

}
