package twodiamention;

public class Operation{
    int[][] twoDiamentionalArrayAddition(int size, int[][] arrayOne, int[][] arrayTwo){
        int[][] resultentArray = new int[size][size];
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                resultentArray[i][j] = arrayOne[i][j] + arrayTwo[i][j];
            }
        }
        return resultentArray;
    }
}
