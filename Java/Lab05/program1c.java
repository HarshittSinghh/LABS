import java.util.Scanner;
interface ABC {
    void Prime();
}
class BBC implements ABC {
    public void Prime() {
            int num = 29;
            boolean flag = false;
            for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = true;
                break;
                }
            }

            if (!flag)
            System.out.println(num + " is a prime number.");
            else
            System.out.println(num + " is not a prime number.");
    }
}
class CCB {
    public static void main(String[] args) {
        int a = Integer.parseInt(args[0]);
        ABC ob = new BBC();
        ob.Prime();
    }
}
