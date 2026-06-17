package labprgms;
import java.awt.*;

class RegistrationExample
{
    public static void main(String args[])
    {
        Frame f = new Frame();

        f.setSize(600, 800);
        f.setLayout(null);
        f.setVisible(true);
        f.setTitle("Registration Page");

        Label l1, l2, l3, l4, l5, l6;
        TextField t1, t2;
        Choice ch;
        List ls;
        Checkbox cb1, cb2, cb3;
        TextArea ta;
        Button b;

        // Name
        l1 = new Label("Name :");
        l1.setBounds(50, 60, 100, 30);

        t1 = new TextField();
        t1.setBounds(150, 60, 200, 25);

        // Registration Number
        l2 = new Label("Regd No :");
        l2.setBounds(50, 120, 100, 30);

        t2 = new TextField();
        t2.setBounds(150, 120, 200, 25);

        // Year
        l3 = new Label("Year :");
        l3.setBounds(50, 180, 100, 30);

        ch = new Choice();
        ch.setBounds(150, 180, 200, 30);

        ch.add("I-YEAR");
        ch.add("II-YEAR");
        ch.add("III-YEAR");
        ch.add("IV-YEAR");

        // Branch
        l4 = new Label("Branch :");
        l4.setBounds(50, 240, 100, 30);

        ls = new List(4);
        ls.setBounds(150, 240, 200, 80);

        ls.add("CSE");
        ls.add("CSIT");
        ls.add("ECE");
        ls.add("EEE");
        ls.add("CIVIL");
        ls.add("MECH");

        // Subjects
        l5 = new Label("Subjects :");
        l5.setBounds(50, 330, 100, 30);

        cb1 = new Checkbox("C");
        cb1.setBounds(150, 330, 50, 30);

        cb2 = new Checkbox("JAVA");
        cb2.setBounds(210, 330, 70, 30);

        cb3 = new Checkbox("DBMS");
        cb3.setBounds(290, 330, 80, 30);

        // Address
        l6 = new Label("Address :");
        l6.setBounds(50, 380, 100, 30);

        ta = new TextArea();
        ta.setBounds(150, 380, 230, 120);

        // Submit Button
        b = new Button("Submit");
        b.setBounds(150, 530, 100, 30);

        // Adding components to frame
        f.add(l1);
        f.add(l2);
        f.add(l3);
        f.add(l4);
        f.add(l5);
        f.add(l6);

        f.add(t1);
        f.add(t2);
        f.add(ch);
        f.add(ls);

        f.add(cb1);
        f.add(cb2);
        f.add(cb3);

        f.add(ta);
        f.add(b);
    }
}