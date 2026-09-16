package trianglearea;

import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Area area = new Area();

        System.out.println("\n***PROGRAM TO FIND THE AREA OF A TRIANGLE***");
        System.out.print("\nEnter the base length in cm: ");
        int base = scanner.nextInt();
        System.out.print("Enter the height length in cm: ");
        int height = scanner.nextInt();

        double result = area.area(base, height);
        System.out.println("\nArea = " +result+ " cm²");
        scanner.close();
    }
}
