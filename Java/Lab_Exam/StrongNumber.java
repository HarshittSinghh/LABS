import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class StrongNumber {
    public  void init() {
        TextField t1;
        Label l1;
        Button b1;

        t1 = new TextField();
        l1 = new Label("Enter the Number");
        b1 = new Button("Check");
	
	add(t1);
	add(l1);
	add(b1);
	
	l1.ActionListener(this);
	t1.ActionListener(this);
	b1.ActionListener(this);
     
    }
}
void Factorial(){
	for(int i=0;i<number;i++){
		factorial *=i;
		return factorial;
	}
}
public void Listen(ActionEvent e){
	String str = e.getActionCommand();
	if(e.str.equals("Check")){
		int sum = 0;
		int originalNumer = Number;
		while(number>0){
			int digit = number % 10;
			
			num /= 10;
		}
	}
}
/*
<html>
  <body>
    <applet code="StrongNumber.class" height="500" width="500"></applet>
  </body>
</html>
*/