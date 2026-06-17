package labprgms;
//Prgms [ Shape, Rectangle, Circle,Run -->  ShapeClient]
public class ShapeClient {
	public static void main(String[] args) {
		Rectangle r1 = new Rectangle("Blue", 25.5, 2.2);
		System.out.println(r1);
		Circle c1 = new Circle("Red", 2.5);
		System.out.println(c1);
	}

}
