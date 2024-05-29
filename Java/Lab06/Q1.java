import java.util.*;
import java.util.Scanner;
class Array {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Number the Size of the Array:");
        int n = scan.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the Elements " + n + " numbers:");
        for(int i = 0; i < n; i++){
            System.out.println("Enter the Element " + (i+1)+ ":");
            arr[i] = scan.nextInt();
        }
        System.out.println("Entered Array");
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        Arrays.sort(arr); 
        System.out.println("Sorted Array");
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}