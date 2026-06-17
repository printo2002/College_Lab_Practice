package labprgms;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class GuiCalculator implements ActionListener {

    JFrame f;
    JTextField tf;

    JButton b0, b1, b2, b3, b4, b5, b6, b7, b8, b9;
    JButton add, sub, mul, div, equal, clear;

    double num1, num2, result;
    String operator;

    public GuiCalculator() {

        f = new JFrame("Calculator 1.0");
        f.setSize(350, 500);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Text Field
        tf = new JTextField();
        tf.setBounds(30, 30, 270, 40);
        tf.setFont(new Font("Arial", Font.BOLD, 20));
        f.add(tf);

        // Number Buttons
        b7 = new JButton("7");
        b7.setBounds(30, 100, 60, 50);

        b8 = new JButton("8");
        b8.setBounds(100, 100, 60, 50);

        b9 = new JButton("9");
        b9.setBounds(170, 100, 60, 50);

        add = new JButton("+");
        add.setBounds(240, 100, 60, 50);

        b4 = new JButton("4");
        b4.setBounds(30, 170, 60, 50);

        b5 = new JButton("5");
        b5.setBounds(100, 170, 60, 50);

        b6 = new JButton("6");
        b6.setBounds(170, 170, 60, 50);

        sub = new JButton("-");
        sub.setBounds(240, 170, 60, 50);

        b1 = new JButton("1");
        b1.setBounds(30, 240, 60, 50);

        b2 = new JButton("2");
        b2.setBounds(100, 240, 60, 50);

        b3 = new JButton("3");
        b3.setBounds(170, 240, 60, 50);

        mul = new JButton("*");
        mul.setBounds(240, 240, 60, 50);

        b0 = new JButton("0");
        b0.setBounds(30, 310, 60, 50);

        equal = new JButton("=");
        equal.setBounds(100, 310, 60, 50);

        clear = new JButton("C");
        clear.setBounds(170, 310, 60, 50);

        div = new JButton("/");
        div.setBounds(240, 310, 60, 50);

        // Add Buttons
        f.add(b0);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.add(b6);
        f.add(b7);
        f.add(b8);
        f.add(b9);

        f.add(add);
        f.add(sub);
        f.add(mul);
        f.add(div);
        f.add(equal);
        f.add(clear);

        // Action Listeners
        b0.addActionListener(this);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
        b8.addActionListener(this);
        b9.addActionListener(this);

        add.addActionListener(this);
        sub.addActionListener(this);
        mul.addActionListener(this);
        div.addActionListener(this);
        equal.addActionListener(this);
        clear.addActionListener(this);

        f.setVisible(true);
    }

    public static void main(String[] args) {
        new GuiCalculator();
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        // Number Buttons
        if (e.getSource() == b0)
            tf.setText(tf.getText() + "0");

        if (e.getSource() == b1)
            tf.setText(tf.getText() + "1");

        if (e.getSource() == b2)
            tf.setText(tf.getText() + "2");

        if (e.getSource() == b3)
            tf.setText(tf.getText() + "3");

        if (e.getSource() == b4)
            tf.setText(tf.getText() + "4");

        if (e.getSource() == b5)
            tf.setText(tf.getText() + "5");

        if (e.getSource() == b6)
            tf.setText(tf.getText() + "6");

        if (e.getSource() == b7)
            tf.setText(tf.getText() + "7");

        if (e.getSource() == b8)
            tf.setText(tf.getText() + "8");

        if (e.getSource() == b9)
            tf.setText(tf.getText() + "9");

        // Operators
        if (e.getSource() == add) {
            num1 = Double.parseDouble(tf.getText());
            operator = "+";
            tf.setText("");
        }

        if (e.getSource() == sub) {
            num1 = Double.parseDouble(tf.getText());
            operator = "-";
            tf.setText("");
        }

        if (e.getSource() == mul) {
            num1 = Double.parseDouble(tf.getText());
            operator = "*";
            tf.setText("");
        }

        if (e.getSource() == div) {
            num1 = Double.parseDouble(tf.getText());
            operator = "/";
            tf.setText("");
        }

        // Equal Button
        if (e.getSource() == equal) {

            num2 = Double.parseDouble(tf.getText());

            if (operator.equals("+"))
                result = num1 + num2;

            if (operator.equals("-"))
                result = num1 - num2;

            if (operator.equals("*"))
                result = num1 * num2;

            if (operator.equals("/"))
                result = num1 / num2;

            tf.setText("" + result);
        }

        // Clear Button
        if (e.getSource() == clear) {
            tf.setText("");
        }
    }
}