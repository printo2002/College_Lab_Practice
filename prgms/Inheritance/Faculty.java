package labprgms;
//Prgms  [ Person, Faculty ,Run --> ClientClass ]
public class Faculty extends Person{
	// Faculty attributes
	private int facId;
	private String department;
	public Faculty() {
		super();// calls the parent class default constructor
		facId = 0;
		department = "UNK";
	}
	public Faculty(String n,int a, String add,int id, String dept) {
		super(n,a,add);// calls the parent class constructor
		facId = id;
		department = dept;
	}
	//setter or mutator methods
	public void setFacID(int id) {
		facId = id;
	}
	public void setDept(String dept) {
		department = dept;
	}
	// getters or accessor methods
	public int getFacID() {
		return facId;
	}
	public String getDepartment() {
		return department;
	}
	// toString()
	public String toString() {
		return super.toString()+ " ID: " + facId + " Depatment : "+department;
	}
	
	
}

