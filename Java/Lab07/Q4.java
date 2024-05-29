import java.util.Scanner;
class ABC{
    public static void main(String[] args) {
        
    double a =3.14;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the Number");
    double x = sc.nextDouble();

    try{
            if (x == 3.14) {
            System.out.println("No Execption");
        }
    }
    catch(Exception e){
         System.out.println(e.getMessage() + "Exception");
    }
    }
    }
