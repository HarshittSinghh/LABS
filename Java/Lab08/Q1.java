import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class Q1 extends Applet implements ActionListener {
    Label l1, l2, l3;
    TextField t1, t2;
    Button b1, b2;

    public void init() {
        setLayout(new FlowLayout());

        l1 = new Label("Enter the Temp in *C:");
        l2 = new Label("Enter the Temp in *F:");
        l3 = new Label("Answer");
        t1 = new TextField(20);
        t2 = new TextField(20);
        b1 = new Button("*C to *F");
        b2 = new Button("*F to *C");

        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(b1);
        add(b2);
        add(l3);

        b1.addActionListener(this);
        b2.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b1) {
            // Convert temperature from Celsius to Fahrenheit
            try {
                double celsius = Double.parseDouble(t1.getText());
                double fahrenheit = (celsius * 9 / 5) + 32;
                t2.setText(String.valueOf(fahrenheit));
                l3.setText("Answer: " + fahrenheit + " °F");
            } catch (NumberFormatException ex) {
                t2.setText("Invalid Input");
                l3.setText("Answer");
            }
        } else if (e.getSource() == b2) {
            // Convert temperature from Fahrenheit to Celsius
            try {
                double fahrenheit = Double.parseDouble(t1.getText());
                double celsius = (fahrenheit - 32) * 5 / 9;
                t2.setText(String.valueOf(celsius));
                l3.setText("Answer: " + celsius + " °C");
            } catch (NumberFormatException ex) {
                t1.setText("Invalid Input");
                l3.setText("Answer");
            }
        }
    }
}
