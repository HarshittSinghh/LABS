import java.util.Scanner;

public class perfect_number {
    public static void main(String[] args) {
        int n,sum=0;
        Scanner sc=new Scanner(System.in);
        n= sc.nextInt();
        System.out.println("Enter a number:");
        int i=1;
        while (i<=n%2) {
            if (n%i==0) {
                sum = sum + i;
            }
            i++;
        }
        if (sum==n) {
            System.out.println(n+"is a Perfect Number");
        }
        else{
            System.out.println(n+"is not a perfect number");
        }
    }
}
