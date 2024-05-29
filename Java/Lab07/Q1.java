//Q1) Wap to find out ao using exception handling
import java.util.Scanner;
class ABC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = 10;
        System.out.println("Enter the Value of b:");
        int b = scanner.nextInt();

        try {
            int c = a + b;
            System.out.println("Addition:" + c );
            c = a - b;
            System.out.println("Substraction:" + c);
            c = a * b;
            System.out.println("Multiplication:" +c );
            c = a / b;
            System.out.println("Division:" +c );
            

        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }
    }
}