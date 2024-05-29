import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class Paint extends Applet implements ActionListener {
    Button b1, b2, b3;
    public void paint(Graphics g){
        g.drawString("Hello, Using JAVA Applet",150,150);
        g.drawRect(120,100,200,100);
    }
    public void init() {
        setBackground(Color.red);
        b1 = new Button("Red");
        b2 = new Button("Green");
        b3 = new Button("White");
        b1.addActionListener(this); 
        b2.addActionListener(this); 
        b3.addActionListener(this);
        //Dimension of the Button
        b1.setPreferredSize(new Dimension(150, 50));
        b2.setPreferredSize(new Dimension(150, 50));
        b3.setPreferredSize(new Dimension(150, 50));
        add(b1);
        add(b2);
        add(b3);
    }
    public void actionPerformed(ActionEvent e) {
        String s = e.getActionCommand();
        if(s.equals("Red")){
            setBackground(Color.red);
            setForeground(Color.yellow);
        }
        else if(s.equals("Green")){
            setBackground(Color.green);
            setForeground(Color.red);
        }
        else{
            setBackground(Color.white);
            setForeground(Color.black);
        }
    }
}