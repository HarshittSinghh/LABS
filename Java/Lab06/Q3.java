import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n[][] = new int[3][3];
        System.out.println("Enter the Elements into the Array");
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3;j++){
                n[i][j]= scan.nextInt();
            }
        }
        System.out.println("The Diagonal elements are:");
        for (int i = 0; i < n.length; i++) {
            for (int j = 0; j < n[i].length; j++) {
                if (i == j || i + j == n.length - 1) {
                    System.out.print(n[i][j] + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}