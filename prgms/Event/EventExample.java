package labprgms;
import java.awt.*;
import java.awt.event.*;

class EventExample extends Frame implements ActionListener
{
    TextField tf;

    EventExample()
    {
        // Create TextField
        tf = new TextField();
        tf.setBounds(60, 50, 170, 20);

        // Create Button
        Button b = new Button("Click Me");
        b.setBounds(100, 120, 80, 30);

        // Register ActionListener
        b.addActionListener(this);

        // Add components
        add(b);
        add(tf);

        // Frame settings
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }

    // Event Handling Method
    public void actionPerformed(ActionEvent e)
    {
        tf.setText("Welcome");
    }

    // Main Method
    public static void main(String args[])
    {
        new EventExample();
    }
}