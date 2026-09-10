#include <stdio.h>
#include <stdlib.h>

void twodArraySummer(int arraySize, int arrayOne[arraySize][arraySize], int arrayTwo[arraySize][arraySize], int resultArray[arraySize][arraySize]);

int main(void){
    printf("\n***Program to add two diamentional Arrays***");
    printf("\nEnter the size of the arrays: ");
    int arraySize;
    scanf("%d", &arraySize);

    printf("\nEnter the values into the first array:\n");
    int arrayOne[arraySize][arraySize];
    for(int i=0; i<arraySize; i++){
        for(int j=0; j<arraySize; j++){
            scanf("%d", &arrayOne[i][j]);
        }
    }

    printf("\nEnter the values into the second array:\n");
    int arrayTwo[arraySize][arraySize];
    for(int i=0; i<arraySize; i++){
        for(int j=0; j<arraySize; j++){
            scanf("%d", &arrayTwo[i][j]);
        }
    }

    int resultArray[arraySize][arraySize];
    twodArraySummer(arraySize, arrayOne, arrayTwo, resultArray);
    printf("\nThe sum is as follows:\n");
    for(int i=0; i<arraySize; i++){
        for(int j=0; j<arraySize; j++){
            printf("%d\t", resultArray[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}

void twodArraySummer(int arraySize, int arrayOne[arraySize][arraySize], int arrayTwo[arraySize][arraySize], int resultArray[arraySize][arraySize]){
    for(int i=0; i<arraySize; i++){
        for(int j=0; j<arraySize; j++){
            resultArray[i][j] = arrayOne[i][j] + arrayTwo[i][j];
        }
    }
}
