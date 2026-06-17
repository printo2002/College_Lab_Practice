package labprgms;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class LayoutManagersDemo {
	JFrame f;
	public LayoutManagersDemo() {
		f =new JFrame("Layout Demo");
		f.setSize(600,400);
		JTabbedPane tab = new JTabbedPane();
		
		JPanel panel1 = createFlowLayout();
		tab.addTab("FlowLayout", panel1);
		
		JPanel panel2 = createGridLayout();
		tab.addTab("GridLayout", panel2);
		
		JPanel panel3 = createBoxLayout();
		tab.addTab("BoxLayout", panel3);
		
		JPanel panel4 = createBorderLayout();
		tab.addTab("Border Layout", panel4);
		f.add(tab);		
		f.setVisible(true);
	}
	private JPanel createBorderLayout() {
		JPanel myPanel = new JPanel();
		myPanel.setLayout(new BorderLayout());
		myPanel.add(new JButton("Button1"), BorderLayout.NORTH);
		myPanel.add(new JButton("Button2"), BorderLayout.SOUTH);
		myPanel.add(new JButton("Button3"), BorderLayout.EAST);
		myPanel.add(new JButton("Button4"), BorderLayout.WEST);
		myPanel.add(new JButton("Button5"), BorderLayout.CENTER);
		return myPanel;
	}
	private JPanel createBoxLayout() {
		JPanel myPanel = new JPanel();
		myPanel.setLayout(new BoxLayout(myPanel, BoxLayout.Y_AXIS));
		myPanel.add(new JButton("Button1"));
		myPanel.add(new JButton("Button2"));
		myPanel.add(new JButton("Button3"));
		myPanel.add(new JButton("Button4"));
		myPanel.add(new JButton("Button5"));
		myPanel.add(new JButton("Button6"));
		return myPanel;
	}
	private JPanel createGridLayout() {
		JPanel myPanel = new JPanel();
		myPanel.setLayout(new GridLayout(3,2));
		myPanel.add(new JButton("Button1"));
		myPanel.add(new JButton("Button2"));
		myPanel.add(new JButton("Button3"));
		myPanel.add(new JButton("Button4"));
		myPanel.add(new JButton("Button5"));
		myPanel.add(new JButton("Button6"));
		return myPanel;
	}
	private JPanel createFlowLayout() {
		JPanel myPanel = new JPanel();
		myPanel.setLayout(new FlowLayout());
		myPanel.add(new JButton("Button1"));
		myPanel.add(new JButton("Button2"));
		myPanel.add(new JButton("Button3"));
		myPanel.add(new JButton("Button4"));
		myPanel.add(new JButton("Button5"));
		myPanel.add(new JButton("Button6"));
		return myPanel;
	}
	public static void main(String[] args) {
		new LayoutManagersDemo();

	}

}

