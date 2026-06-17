package appletsv8;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class FindSqrNum extends Applet implements ActionListener {
	TextField num;
	Label out;
	public void init()
	{
		Label label = new Label("Enter the number:");
		this.add(label);
		num = new TextField();
		this.add(num);
		Button calc = new Button("Calculate");
		calc.addActionListener(this);
		this.add(calc);
		out = new Label();
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		double n = Double.valueOf(num.getText());
		double square = n * n;
		out.setText("Square of "+n+" is "+square);
		this.add(out);
		revalidate();
	}
	
}
