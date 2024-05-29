import java.util.Scanner;

class ABC {
    int a = 10, b = 20, c = 30, d = 40, e = 50;

    ABC() {
        int gcd = 1;
        for (int i = 1; i <= a && i <= b && i <= c && i <= d && i <= e; i++) {
            if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0 && e % i == 0) {
                gcd = i;
            }
        }
        System.out.println("The GCD for the five numbers is: " + gcd);
    }

    public static void main(String[] args) {
        ABC ob = new ABC();
    }
}
