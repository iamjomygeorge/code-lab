package projectcalculator;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        double result;

        Scanner scanner = new Scanner(System.in);
        NumberInput numberInput = new NumberInput();
        Operations operations = new Operations();

        System.out.println("\n***DO BASIC MATHEMATICAL OPERATIONS***");
        System.out.println("\nEnter which operation you want to perform:\n'+' for addition, '-' for subtraction, '*' for multiplication, '/' for division");
        System.out.print("Enter your choice: ");
        char choice = scanner.next().charAt(0);

        double[] numbers = numberInput.getNumber();

        switch (choice){
            case '+':
                result = operations.addition(numbers[0], numbers[1]);
                System.out.println("\nResult = " +result);
                break;
            case '-':
                result = operations.addition(numbers[0], numbers[1]);
                System.out.println("\nResult = " +result);
                break;
            case '*':
                result = operations.multiplication(numbers[0], numbers[1]);
                System.out.println("\nResult = " +result);
                break;
            case '/':
                result = operations.division(numbers[0], numbers[1]);
                System.out.println("\nResult = "+result);
                break;
            default:
                System.out.println("\nInvalid entry. Please enter a valid choice.");
        }
        scanner.close();
    }
}
