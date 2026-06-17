/*  Addition of 2 matrix   */
package printopkg;
import java.text.BreakIterator;
import java.util.Scanner;
public class matricaddition {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		// Matrix 1
		System.out.println("--------- Matrix 1 ---------");
		System.out.println("Enter size of row:");
		int rows = input.nextInt();
		System.out.println("Enter size of column:");
		int cols = input.nextInt();
		System.out.println("Enter "+ (rows *cols) +" values:");
		int [][] m1 = new int [rows][cols];
		// read
		for(int row=0;row<m1.length;row++)
		{
			for(int col =0;col<m1[row].length;col++)
			{
				m1[row][col] = input.nextInt();
			}
		}
		// print
		for(int []i:m1)
		{
			for(int k: i) {
				System.out.print(k+"\t");
			}
			System.out.println();
		}
		
		//		----------------------------------
		// Matrix 2
		System.out.println("--------- Matrix 2 ---------");
		System.out.println("Enter size of row:");
		int rows2 = input.nextInt();
		System.out.println("Enter size of column:");
		int cols2 = input.nextInt();	
		System.out.println("Enter "+ (rows2 *cols2) +" values:");
		int [][] m2 = new int [rows2][cols2];
		// read
		for(int row2=0;row2<m2.length;row2++)
		{
			for(int col2 =0;col2<m2[row2].length;col2++)
			{
				m2[row2][col2] = input.nextInt();
			}
		}		
		// print
		for(int []i:m2)
		{
			for(int k: i) {
				System.out.print(k+"\t");
			}
			System.out.println();
		}
		//		----------------------------------

		
		
		
		
		int [][] summatrix = new int [rows2][cols2];
		for(int i =0;i< rows;i++)
		{
			for(int j=0;j<cols2;j++) {
				summatrix[i][j] = m1[i][j] + m2[i][j];
			}
		}
        System.out.println("--------- Sum Matrix ---------");

		for(int [] sum:summatrix)
		{
			for(int k: sum) {
				System.out.print(k + "\t");
			}
			System.out.println();
		}
		
		input.close();

//	end
	}
}
