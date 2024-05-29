import java.applet.Applet;
import java.awt.*;

public class Practice extends Applet {
    public void paint(Graphics g) {
        int diameter = 50;
        setBackground(Color.black);

        g.setColor(Color.red);
        g.fillArc(50, 50, diameter, diameter, 0, 180);
        g.setColor(Color.white);
        g.drawArc(50, 50, diameter, diameter, 0, 180);

        g.setColor(Color.yellow);
        g.fillArc(100, 50, diameter, diameter, 0, -180);
        g.setColor(Color.white);
        g.drawArc(100, 50, diameter, diameter, 0, -180);

        g.setColor(Color.green);
        g.fillArc(150, 50, diameter, diameter, 0, 180);
        g.setColor(Color.white);
        g.drawArc(150, 50, diameter, diameter, 0, 180);

        g.setColor(Color.blue);
        g.fillArc(200, 50, diameter, diameter, 0, -180);
        g.setColor(Color.white);
        g.drawArc(200, 50, diameter, diameter, 0, -180);

        g.setColor(new Color(148, 0, 211));
        g.fillArc(250, 50, diameter, diameter, 0, 180);
        g.setColor(Color.white);
        g.drawArc(250, 50, diameter, diameter, 0, 180);

            // Draw red-to-yellow semi-circle
        g.setColor(Color.cyan);
        g.fillArc(500, 50, diameter, diameter, 0, 30);

        // Draw yellow-to-green semi-circle
        g.setColor(Color.yellow);
        g.fillArc(500, 50, diameter, diameter, 30, 60);

        // Draw green-to-cyan semi-circle
        g.setColor(Color.red);
        g.fillArc(500, 50, diameter, diameter, 60, 90);

        // Draw cyan-to-blue semi-circle
        g.setColor(Color.blue);
        g.fillArc(500, 50, diameter, diameter, 90, 120);

        // Draw blue-to-violet semi-circle
        g.setColor(Color.yellow);
        g.fillArc(500, 50, diameter, diameter, 120, 60);

        // Draw blue-to-violet semi-circle
        g.setColor(Color.pink);
        g.fillArc(500, 50, diameter, diameter, 180, 90);
        
        g.setColor(Color.magenta);
        g.fillArc(500, 50, diameter, diameter, 270, 90);
    }
}
/* <html>
  <body>
    <applet code="Practice.class" height="800" width="800"></applet>
  </body>
</html>
 */
