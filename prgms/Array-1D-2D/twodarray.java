// 2D array
package printopkg;
public class twodarray {

	public static void main(String[] args) {
		// datatype [] [] arrayname = new datatype[size][size];
		int [][] matrix1 = new int[2][3];
		matrix1[0][0] = 12;
		matrix1[0][1] = 25;
		matrix1[0][2] = 86;
		
		matrix1[1][0] = 91;
		matrix1[1][1] = 21;
		matrix1[1][2] = 19;
		
		int [][] matrix2 = {{12,1,8},{89,10,11}};
		System.out.println("-------- Matrix 1 --------");
		for(int row=0;row<matrix1.length;row++)
		{
			for(int col =0;col<matrix1[row].length;col++) {
				System.out.print(matrix1[row][col]+"\t");
			}
			System.out.println();
		}

		System.out.println("-------- Matrix 2 --------");
		for(int [] row: matrix2)
		{
			for(int value: row)
			{
				System.out.print(value+"\t");

			}
			System.out.println();

		}


	}

}
