package array;

import java.util.Scanner;

public class GetElements{
    int[] getElements(Scanner scanner){
        System.out.print("\nEnter the size of the array: ");
        int size = scanner.nextInt();

        if(size <= 0){
            return new int[0];
        }

        int[] array = new int[size];
        System.out.print("\nEnter elements into the array: ");
        for(int i=0; i<size; i++){
            array[i] = scanner.nextInt();
        }

        return array;
    }
}
