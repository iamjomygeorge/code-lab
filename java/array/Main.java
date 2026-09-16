package array;

import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        GetElements getElements = new GetElements();
        ShowElements showElements = new ShowElements();

        System.out.println("\n***PROGRAM TO MAKE AN ARRAY AND RETURN THE ENTERED ARRAY***");
        int[] array = getElements.getElements(scanner);

        if(array.length == 0){
            System.out.println("\nInvalid array size. Exiting the program...");
            scanner.close();
            System.exit(1);
        }

        showElements.showElements(array);
        scanner.close();
    }
}
