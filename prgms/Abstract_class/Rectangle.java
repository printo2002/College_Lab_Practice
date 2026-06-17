
package labprgms;
//Prgms [ Shape, Rectangle, Circle, Run --> ShapeClient]
public class Rectangle extends Shape{
	private double length;
	private double width;
	public Rectangle(String color, double length, double width) {
		super(color);
		this.length = length;
		this.width = width;
	}
	public double getLength() {
		return length;
	}
	public void setLength(double length) {
		this.length = length;
	}
	public double getWidth() {
		return width;
	}
	public void setWidth(double width) {
		this.width = width;
	}
	// implemented abstract method area() from the parent class Shape
	public double area() {
		return length * width;
	}
	public String toString() {
		return "Rectangle :"+super.toString()+ " Length :"
	    +length+" Width : "+width + " Area : "+area();
	}
}


