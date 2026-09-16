package twodiamention;

import java.util.Scanner;

public class Array{
    int arraySize(Scanner scanner){
        System.out.println("\nEnter the size of the arrays: ");
        int size = scanner.nextInt();
        return size;
    }

    int[][] getElements(int size, Scanner scanner){
        int[][] array = new int[size][size];
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                array[i][j] = scanner.nextInt();
            }
        }
        return array;
    }

    void showElements(int size, int[][] array){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                System.out.print(array[i][j] +" ");
            }
            System.out.print("\n");
        }
    }
}
