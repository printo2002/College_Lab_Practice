package labprgms;
//Prgms [ Shape, Rectangle, Circle, Run --> ShapeClient]
public class Circle extends Shape{
	private double radius;
	public Circle(String color, double  radius) {
		super(color);
		this.radius = radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;		
	}
	public double getRadius() {
	 return radius;	
	}
	public double area() {
		// pi*r^2
		return 3.14 * radius*radius;
	}
	public String toString() {
		return "Circle:"+super.toString()+ " Radius "+radius + " Area : "+area();
	}
}

