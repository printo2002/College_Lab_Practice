package labprgms;
//Binary Search
import java.util.Scanner;
import java.util.Arrays;
public class BinarySearch {
	public static int search(int [] num, int search)
	{
		int low=0;
		int high=num.length - 1;
		while(low < high)
		{
			int mid = (low + high )/2; 
	
			if(num[mid] == search)
			{
				return mid + 1;
			}
			else if( num[mid] < search)
			{
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		return -1;
		
	}
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter 5 elements:");
		int [] nos = new int[5];
		for(int i = 0;i<nos.length;i++)
		{
			nos[i] = input.nextInt();
		}
		Arrays.sort(nos);
		System.out.println("sorted :");
		for(int value:nos)
		{
			System.out.print(value+"\t");
		}
		System.out.println();
		System.out.println("enter the element to search:");
		int s = input.nextInt();
		input.close();
		int loc = search(nos,s);
		if(loc == -1)
		{
			System.out.println("Not found");
		}
		else {
			System.out.println(s +" found at "+loc);
		}
		
}
}

		
	
