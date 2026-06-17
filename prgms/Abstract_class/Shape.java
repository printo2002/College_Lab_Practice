package labprgms;
// Prgms [ Shape, Rectangle, Circle,Run--> ShapeClient]
public abstract class Shape {
	private String color;
	public abstract double area();// abstract methods
	public Shape(String color) {
		this.color = color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public String getColor() {
		return color;
	}
	public String toString() {
		return "Color : "+color;
	}
}


