import java.util.Scanner;

public class salary {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a name: ");
        String name = input.nextLine();

        System.out.print("Enter how many hours were worked: ");
        int hours = input.nextInt();

        System.out.print("Enter your hourly rate: ");
        double hourlyRate = input.nextDouble();

        double grossIncome = hours * hourlyRate;

        System.out.print("Hello, " + name + "! ");
        System.out.print("The gross income is $" + grossIncome);
        input.close();
    }
}