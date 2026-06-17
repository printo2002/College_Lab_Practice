package labprgms;
// Create 2 packages: package1,package2
//[ package1 -> ClassA, package2 -> ClassB,Run--> MyClass]

import package1.ClassA;
import package2.ClassB;
import java.util.Scanner;
public class MyClass {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ClassA cla = new ClassA();
		cla.method1();
		ClassB clb = new ClassB();
		clb.method2();
	}
}

