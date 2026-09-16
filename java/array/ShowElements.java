package array;

public class ShowElements{
    void showElements(int[] array){
        int size = array.length;

        System.out.println("\nThe array elements are:");
        for(int i=0; i<size; i++){
            System.out.print(array[i] + " ");
        }
    }
}
