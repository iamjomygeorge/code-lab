import java.util.Scanner;

public class NegativeOrPositive {
    public static void main(String[] args){
        System.out.print("Enter any number: ");
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        scanner.close();

        if(number > 0){
            System.out.print("\nEntered number is a positive number.");
        }
        else if(number < 0){
            System.out.println("\nEntered number is a negative number.");
        }
        else{
            System.out.print("Entered number is zero");
        }
    }
}
