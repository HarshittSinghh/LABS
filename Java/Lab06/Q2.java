import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        countFrequency(arr, n);
    }

static void countFrequency(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = Integer.MIN_VALUE;
                }
            }
            if (arr[i] != Integer.MIN_VALUE) {
                System.out.println(arr[i] + " occurs " + count + " times.");
            }
        }   
    }
}