package package2;
//[ package1 -> ClassA, package2 -> ClassB,Run --> MyClass]
public class ClassB {
	public void method2() {
		System.out.println("From Package2 method2");
	}
	private void method3() {
		System.out.println("From Package2 method3");
	}
	protected void method4() {
		System.out.println("From Package2 method4");
	}
}
