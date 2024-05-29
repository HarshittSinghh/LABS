import java.util.Scanner;

interface ABC {
    void Args();
}

class BBC implements ABC {
    public void Args() {

       int number = 371, originalNumber, remainder, result = 0;
        originalNumber = number;
        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, 3);
            originalNumber /= 10;
        }
        if(result == number)
            System.out.println(number + " is an Armstrong number.");
        else
            System.out.println(number + " is not an Armstrong number.");
    }
 }

class CCB {
    public static void main(String[] args) {
        int a = Integer.parseInt(args[0]);
        ABC ob = new BBC();
        ob.Args();
    }
}
