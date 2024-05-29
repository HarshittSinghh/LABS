import java.util.Scanner;
class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int first = scanner.nextInt();
        System.out.print("Enter difference number: ");
        int diff = scanner.nextInt();

        int[] seq = new int[10];
        seq[0] = first;
        for (int i = 1; i < 10; i++) {
            seq[i] = seq[i - 1] + diff;
        }

        System.out.print("The arithmetic sequence is: ");
        for (int i = 0; i < 10; i++) {
            System.out.print(seq[i] + " ");
        }
        System.out.println();
    }
}