package projectthree;

import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        SumCalculator sum = new SumCalculator();
        Scanner scanner = new Scanner(System.in);

        System.out.print("\n***SUM OF TWO NUMBERS***\n\nEnter num1: ");
        sum.num1 = scanner.nextInt();
        System.out.print("Enter num2: ");
        sum.num2 = scanner.nextInt();
        scanner.close();

        sum.display();
    }
}
