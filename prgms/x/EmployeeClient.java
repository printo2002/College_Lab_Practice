package labprgms;
import java.util.Scanner;
public class EmployeeClient {
	public static void main(String[] args) {
		Employee e1 = new Employee();
		e1.setId(1);
		e1.setName("John");
		e1.setDesignation("CEO");
		e1.setSalary(250000);
		Employee e2 = new Employee(2,"Joe", "CTO", 200000);
		System.out.println(e1);
		System.out.println(e2);
	
		
	}
}
