import java.util.Scanner;
abstract class Conversion {
    double amount;
    Conversion(double amount) {
        this.amount = amount;
    }
    abstract double MoneyConversion();
}
class RupeetoDoller extends Conversion {
    RupeetoDoller(double amount) {
        super(amount);
    }
    double MoneyConversion() {
        return amount * 0.014;
    }
}
class RupeetoEuro extends Conversion {
    RupeetoEuro(double amount) {
        super(amount);
    }
    double MoneyConversion() {
        return amount * 0.012;
    }
}
class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the amount in Rupees: ");
        double amount = scanner.nextDouble();

        Conversion rupeeToDoller = new RupeetoDoller(amount);
        Conversion rupeeToEuro = new RupeetoEuro(amount);

        System.out.println(amount + " Rupees in USD: " + rupeeToDoller.MoneyConversion());
        System.out.println(amount + " Rupees in Euro: " + rupeeToEuro.MoneyConversion());
   }
}