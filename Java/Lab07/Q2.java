import java.util.Scanner;
class ABC {
    public static int binarySearch(int[] arr, int x) {
        int low = 0;
        int high = arr.length - 1;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            try {
                if (arr[mid] < x)
                    low = mid + 1;
                else if (arr[mid] > x)
                    high = mid - 1;
                else
                    return mid;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e.getMessage());
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {2, 3, 4, 10, 40};
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the Element");
        int x= scanner.nextInt();
        int result = binarySearch(arr, x);
        if (result != -1)
            System.out.println("Element " + x + " is present at index " + result);
        else
            System.out.println("Element is not present in array");
    }
}
