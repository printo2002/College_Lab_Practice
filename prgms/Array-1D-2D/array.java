// Array 

package printopkg;

public class array {

	public static void main(String[] args) {
		// datatype [] arrayname = new datatype[size];
		int [] no = new int[5];
		no[0]= 25;
		no[1]= 15;
		no[2]= 35;
		no[3]= 45;
		no[4]= 55;
		int [] no2 = {25,56,45,78,91};
		
		int[] no3 = new int[5];
		System.out.println("---- Array Contents (no) -----");
		for(int i =0;i<no.length;i++)
		{
			System.out.print(no[i]+"\t");
		}
		//Enhanced for loop - only for printing
		System.out.println("---- Array Contents (no2) -----");
		for(int value: no2)
		{
			System.out.print(value+"\t");
		}	
	}
}



