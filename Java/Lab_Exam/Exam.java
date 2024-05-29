import java.awt.*;
import java.applet.*;
public class Exam extends Applet {
    public void paint(Graphics g){
        g.setColor(Color.black);
        g.fillRect(25, 25, 150, 50);
        g.drawRect(25, 25, 150, 50);
        g.setColor(Color.yellow);
        g.fillRect(45,30, 100,40);
        g.drawRect(45,30, 100, 40);
        g.setColor(Color.red);
        int diameter = 400;
        g.fillOval(60, 35, 60,30);
    }
}
/*
<html>
  <body>
    <applet code="Exam.class" height="500" width="500"></applet>
  </body>
</html>
*/