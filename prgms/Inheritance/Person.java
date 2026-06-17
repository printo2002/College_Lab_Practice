package labprgms;
//	Prgms  [ Person, Faculty , Run --> ClientClass  ]
public class Person {
	// attributes
	private String name;
	private int age;
	private String address;
	// constructor - special method
	// same name as the class, no return type 
	public Person(){
		// default constructor
		name = "UNK";
		age = 0;
		address = "UNK";
	}
	// constuctor overloading
	// parameterized constructor
	public Person(String n,int a, String add) {
		name = n;
		age = a;
		address = add;
	}
	//setter methods or mutator methods
	public void setName(String n) {
		name = n;
	}	
	public void setAge(int a) {
		age = a;
	}
	public void setAddress(String a) {
		address = a;
	}	
   // getter methods or accessor methods
	public String getName() {
		return name;
	}
	public int getAge() {
		return age;
	}
	public String getAdd() {
		return address;
	}
	// toString() to print object as String
	public String toString() {
		return "Name : "+name + " Age : " +age + " Address : " +address;
	}
}
