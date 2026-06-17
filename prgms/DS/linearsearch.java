// Linear Search

package printopkg;

import java.util.Scanner;

public class linearsearch {
	public static int linear(int [] values,int search)
	{
		for(int i =0 ;i < values.length;i++) {
			if(values[i] == search)
			{
				return i+1;
			}
			
		}
		return -1;

	}

	public static void main(String[] args) {
		int [] no = new int[5];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter array element:");
		for(int i =0;i<no.length;i++)
		{
			no[i] = sc.nextInt();
		}

		System.out.println("enter the element to search:");
		int s = sc.nextInt();
		sc.close();
		int loc = linear(no,s);
		if(loc == -1)
		{
			System.out.println("Not found");
		}
		else {
			System.out.println(s +" found at "+loc);
		}
	}

}
