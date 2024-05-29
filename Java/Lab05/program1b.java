import java.util.Scanner;

interface ABC {
    void GCD();
}

class BBC implements ABC {
    public void GCD() {
       int n1 = 2, n2 = 4, n3 = 6 , n4 = 8 , n5 = 14;
    int gcd = 1;
    for (int i = 1; i <= n1 && i <= n2 && i <= n3 && i <= n4 && i <= n5; ++i) {

      if (n1 % i == 0 && n2 % i == 0 && n3 % i == 0 && n4 % i == 0 && n5 % i == 0)
        gcd = i;
    }

    System.out.println("GCD of " + n1 +" ," + n2 +"," + n3 +"," + n4+" and " + n5 + " is " + gcd);
  }
}

class CCB {
    public static void main(String[] args) {
        int a = Integer.parseInt(args[0]);
        ABC ob = new BBC();
        ob.GCD();
    }
}
