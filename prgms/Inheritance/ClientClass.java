package labprgms;
//Prgms  [ Person, Faculty , Run --> ClientClass  ]
public class ClientClass {
	public static void main(String[] args) {
		Faculty f1 = new Faculty();
		Faculty f2 = new Faculty("John",23,"TRVL", 1, "MBA");
		f1.setName("Ryan");
		f1.setAge(25);
		f1.setAddress("KTYM");
		f1.setFacID(2);
		f1.setDept("MCA");
		System.out.println(f1);
		System.out.println(f2);
		
	}
}
