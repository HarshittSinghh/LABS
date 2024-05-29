import java.applet.Applet;
import java.awt.Button;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Q2 extends Applet implements ActionListener {

    TextField t1;
    int prevValue;
    String operator;
    boolean showResult;

    public void init() {
        t1 = new TextField(10);
        add(t1);

        // Buttons for operators
        Button addBtn = new Button("+");
        Button subBtn = new Button("-");
        Button mulBtn = new Button("*");
        Button divBtn = new Button("/");
        Button equalBtn = new Button("=");

        addBtn.addActionListener(this);
        subBtn.addActionListener(this);
        mulBtn.addActionListener(this);
        divBtn.addActionListener(this);
        equalBtn.addActionListener(this);

        add(addBtn);
        add(subBtn);
        add(mulBtn);
        add(divBtn);
        add(equalBtn);
    }

    public void actionPerformed(ActionEvent e) {
        String s = e.getActionCommand();
        int currentValue = Integer.parseInt(t1.getText());

        if (s.equals("+") || s.equals("-") || s.equals("*") || s.equals("/")) {
            prevValue = currentValue;
            operator = s;
            t1.setText("");
            showResult = false;
        } else if (s.equals("=")) {
            int result = performOperation(prevValue, currentValue, operator);
            t1.setText(Integer.toString(result));
            showResult = true;
        } else {
            if (showResult) {
                t1.setText(s);
                showResult = false;
            } else {
                t1.setText(t1.getText() + s);
            }
        }
    }

    private int performOperation(int num1, int num2, String operator) {
        switch (operator) {
            case "+":
                return num1 + num2;
            case "-":
                return num1 - num2;
            case "*":
                return num1 * num2;
            case "/":
                if (num2 != 0) {
                    return num1 / num2;
                } else {
                    return 0; // Handle division by zero
                }
            default:
                return 0;
        }
    }
}
