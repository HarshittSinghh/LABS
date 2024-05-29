import java.util.*;

class ABC { 
    int a, b, c;

    ABC() {
        a = 10;
        b = 15;
        c = a + b;
        System.out.println("Sum:" + c);  
    }
}

class BBC extends ABC {
    int d, e, f;

    BBC() {
	super();
        d = 10;
        e = 4;
        f = d - e;
        System.out.println("Sub:" +f); 
}
}
class Main {
    public static void main(String[] args) {
        int a = Integer.parseInt(args[1]);
        BBC ob = new BBC();
    }
}
