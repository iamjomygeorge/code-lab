package projectprime;

import java.util.Scanner;

public class GetNumber{
    int getNumber(){
        System.out.println("\n***PRIME NUMBER CHECKER***");
        System.out.print("\nInput number: ");
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        return number;
    }
}
