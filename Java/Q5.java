import java.util.Scanner;

class WrongMarkException extends Exception {
    public WrongMarkException(String message) {
        super(message);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] marks = new int[10];

        for (int i = 0; i < 10; i++) {
            System.out.print("Enter mark " + (i + 1) + ": ");
            int mark = scanner.nextInt();

            try {
                if (mark < 0 || mark > 100) {
                    throw new WrongMarkException("Mark must be between 0 and 100");
                }
                marks[i] = mark;
            } catch (WrongMarkException e) {
                System.out.println(e.getMessage());
                i--;
            }
        }

        System.out.println("Marks: ");
        for (int mark : marks) {
            System.out.println(mark);
        }
    }
}