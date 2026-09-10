#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n***SORT AN ARRAY IN DECENDING ORDER***");
    printf("\nEnter the size of array: ");
    int arraysize;
    if(scanf("%d", &arraysize) != 1 || arraysize <= 0){
        printf("Enter a valid positive integer");
        return EXIT_FAILURE;
    }

    printf("\nEnter elements into the array: ");
    int array[arraysize];
    for(int i=0; i<arraysize; i++){
        scanf("%d", &array[i]);
    }

    printf("\nCurrent array: ");
    for(int i=0; i<arraysize; i++){
        printf("%d ", array[i]);
    }

    for(int i=0; i<arraysize; i++){
        for(int j=i+1; j<arraysize; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nArray after sorting in decending order: ");
    for(int i=0; i<arraysize; i++){
        printf("%d ", array[i]);
    }
    return EXIT_SUCCESS;
}