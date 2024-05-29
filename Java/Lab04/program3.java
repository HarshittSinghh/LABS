import java.math.*;
class ABC{
 int a,b;
    void pow(){
        a=5;
        b=a*a;
        System.out.println("Power:" + b);
    }
}

class BBC extends ABC{
    void sqr(float c){
    double d=Math.sqrt(c);
    System.out.println("Square root: " + d);
    }
}
class MAIN{
    public static void main(String ar[]){
        BBC ob = new BBC();
        ob.pow();
        ob.sqr(25);
    }
}