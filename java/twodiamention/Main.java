package twodiamention;

import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Array array = new Array();
        Operation operation = new Operation();

        System.out.println("\n*** ADDITION OF TWO DIAMENTIONAL ARRAY ***");
        int size = array.arraySize(scanner);

        System.out.println("\nEnter elements into the first array:");
        int[][] arrayOne = array.getElements(size, scanner);
        System.out.println("\nEnter elements into the second array:");
        int[][] arrayTwo = array.getElements(size, scanner);
        scanner.close();

        int[][] resultentArray = operation.twoDiamentionalArrayAddition(size, arrayOne, arrayTwo);
        System.out.println("\nResult:");
        array.showElements(size, resultentArray);
    }
}
