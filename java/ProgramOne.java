import java.util.Scanner;

public class ProgramOne{
    public static void main(String args[]){
        System.out.println("Enter a number: ");
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        scanner.close();

        System.out.println(number);
    }
}