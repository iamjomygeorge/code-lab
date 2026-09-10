#include <stdio.h>
#include <stdlib.h>

void getArray(int arrayLength, int array[arrayLength]);
void displayArray(int arrayLength, int array[arrayLength]);

int main(void){
    int arrayLength;
    printf("\nEnter the length of the array: ");
    if(scanf("%d", &arrayLength) != 1 || arrayLength <= 0){
        printf("\nPlease enter a valid array length.");
        return EXIT_FAILURE;
    }

    int array[arrayLength];
    getArray(arrayLength, array);
    displayArray(arrayLength, array);

    return EXIT_SUCCESS;
}

void getArray(int arrayLength, int array[arrayLength]){
    printf("\nEnter elements into the array:\n");
    for(int i=0; i<arrayLength; i++){
        scanf("%d", &array[i]);
    }
}

void displayArray(int arrayLength, int array[arrayLength]){
    printf("\nElements in the array are:\n");
    for(int i=0; i<arrayLength; i++){
        printf("%d ", array[i]);
    }
}
