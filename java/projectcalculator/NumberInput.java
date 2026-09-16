package projectcalculator;

import java.util.Scanner;

public class NumberInput{
    double[] getNumber(){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number 1: ");
        double number1 = scanner.nextDouble();
        System.out.print("Enter number 2: ");
        double number2 = scanner.nextDouble();
        scanner.close();

        return new double[] {number1, number2};
    }
}
