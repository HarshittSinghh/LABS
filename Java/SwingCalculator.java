import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class SwingCalculator
{
   public static void main(String args[])
     {
       Abc obj=new Abc();
     }
}

class Abc extends JFrame implements ActionListener
{
  JLabel l1,l2,l3;
  JTextField t1,t2;
  JButton b1,b2,b3,b4,result;
  
  public Abc()
   {
     setLayout(new FlowLayout());

     l1=new JLabel("First Number:");
     t1=new JTextField(); 
     t1.setColumns(20);

     l2=new JLabel("Second Number:");
     t2=new JTextField();
     t2.setColumns(20);

     b1=new JButton("Add");
     b2=new JButton("Sub");
     b3=new JButton("Mul");
     b4=new JButton("Div");

     //l3=new JLabel("Result");
     result=new JButton("Final");
     
     add(l1);
     add(t1);
     add(l2);
     add(t2);
     add(b1);
     add(b2);
     add(b3);
     add(b4);
     //add(l3);
     add(result);

     b1.addActionListener(this);
     b2.addActionListener(this);
     b3.addActionListener(this);
     b4.addActionListener(this);
          
     setVisible(true);
     setSize(300,400);

     setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }

 public void actionPerformed(ActionEvent ae)
  {
    Double num1=Double.parseDouble(t1.getText());
    Double num2=Double.parseDouble(t2.getText());
    if(ae.getSource()==b1)
     {
       Double value=num1+num2;
       result.setText(""+value);
     }
    if(ae.getSource()==b2)
     {
       Double value=num1-num2;
       result.setText(""+value);
     }
    if(ae.getSource()==b3)
     {
       Double value=num1*num2;
       result.setText(""+value);
     }
    if(ae.getSource()==b4)
     {
       Double value=num1/num2;
      result.setText(""+value);
     }
  }

}