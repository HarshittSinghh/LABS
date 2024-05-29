import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Arithmetic extends JFrame implements ActionListener {
    JLabel l1, l2, l3;
    JTextField t1, t2, t3;
    JButton b1, b2;

    public Arithmetic() {
        l1 = new JLabel("Enter the 1st no");
        l2 = new JLabel("Enter the 2nd no");
        t1 = new JTextField(20);
        t2 = new JTextField(20);
        t3 = new JTextField(20);
        b1 = new JButton("+");
        b2 = new JButton("Next");

        setLayout(new GridLayout(4, 2));
        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(b1);
        add(b2);
        add(t3);

        b1.addActionListener(this);
        b2.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        String s = ae.getActionCommand();
        if (s.equals("+")) {
            double a = Double.parseDouble(t1.getText());
            double b = Double.parseDouble(t2.getText());
            double c = a + b;
            t3.setText(Double.toString(c));
        } else if (s.equals("Next")) {
            new DividePage();
        }
    }

    class DividePage extends JPanel implements ActionListener {
        JLabel l1, l2, l3;
        JTextField t4, t5, t6;
        JButton b3, b4, b5;

        public DividePage() {
            l1 = new JLabel("Enter the 1st number");
            l2 = new JLabel("Enter the 2nd number");
            t4 = new JTextField(20);
            t5 = new JTextField(20);
            t6 = new JTextField(20);
            b3 = new JButton("*");
            b4 = new JButton("Prev");
            b5 = new JButton("Next");

            setLayout(new GridLayout(5, 2));
            add(l1);
            add(t4);
            add(l2);
            add(t5);
            add(b3);
            add(b4);
            add(b5);
            add(t6);

            b3.addActionListener(this);
            b4.addActionListener(this);
            b5.addActionListener(this);
        }

        public void actionPerformed(ActionEvent ae) {
            String s = ae.getActionCommand();
            if (s.equals("*")) {
                double a = Double.parseDouble(t4.getText());
                double b = Double.parseDouble(t5.getText());
                double c = a * b;
                t6.setText(Double.toString(c));
            } else if (s.equals("Prev")) {
                new Arithmetic();
            } else if (s.equals("Next")) {
                new ExitPage();
            }
        }
    }

    class ExitPage extends JPanel implements ActionListener {
        JLabel l3;
        JButton b6;

        public ExitPage() {
            l3 = new JLabel("Exit?");
            b6 = new JButton("Exit");

            setLayout(new GridLayout(2, 1));
            add(l3);
            add(b6);

            b6.addActionListener(this);
        }

        public void actionPerformed(ActionEvent ae) {
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        Arithmetic frame = new Arithmetic();
        frame.setSize(400, 200);
        frame.setTitle("Arithmetic Operations");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}