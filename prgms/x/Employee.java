package labprgms;
// Prgms [Employee, Run -->EmployeeClient]
public class Employee {
	private int id; 
	private String name;
	private String designation;
	private double salary; 
	public Employee(){
		// default constructor
		name = "";
		id = 0;
		designation = "";
		salary = 0.0;
	}
	public Employee(int id, String n,String desig, double salary) {
		// Parameterized constructor
		this.id = id;
		name = n;
		designation = desig;
		this.salary = salary;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	public String getDesignation() {
		return designation;
	}
	public void setDesignation(String designation) {
		this.designation = designation;
	}
	public double getSalary() {
		return salary;
	}
	public void setSalary(double salary) {
		this.salary = salary;
	}
	public String toString() {
		return "Employee [id=" + id + ", name=" + name 
				+ ", designation=" + designation + ", salary=" + salary + "]";
	}
}
