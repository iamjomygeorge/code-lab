#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n***Array Interchange***\n");
    printf("Enter the size of arrays: ");
    int lenarray;
    if(scanf("%d", &lenarray) != 1){
        printf("\nPlease enter a valid integer\n");
        return EXIT_FAILURE;
    }
    printf("\nEnter the values into the array 1: ");
    int array1[lenarray];
    for(int i=0; i<lenarray; i++){
        scanf("%d", &array1[i]);
    }
    printf("Ented values of array 1 are: ");
    for(int i=0; i<lenarray; i++){
        printf("%d " , array1[i]);
    }
    printf("\n\nEnter the values into the array 2: ");
    int array2[lenarray];
    for(int i=0; i<lenarray; i++){
        scanf("%d", &array2[i]);
    }
    printf("Entered values of array 2 are: ");
    for(int i=0; i<lenarray; i++){
        printf("%d ", array2[i]);
    }

    for(int i=0; i<lenarray; i++){
        int temp = array2[i];
        array2[i] = array1[i];
        array1[i] = temp;
    }

    printf("\n\n***Results after interchaning***");
    printf("\nValues of array 1: ");
    for(int i=0; i<lenarray; i++){
        printf("%d ", array1[i]);
    }
    printf("\nValues of array 2: ");
    for(int i=0; i<lenarray; i++){
        printf("%d ", array2[i]);
    }
    return EXIT_SUCCESS;
}
