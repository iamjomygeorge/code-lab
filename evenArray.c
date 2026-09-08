#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n***Find the number of even numbers in the entered Array***");
    printf("\nEnter the size of the array: ");
    int arraysize;
    if(scanf("%d", &arraysize) != 1 || arraysize <=0){
        printf("\nEnter a valid positive integer\n");
        return EXIT_FAILURE;
    }

    int array[arraysize];
    printf("\nEnter elements into the array: ");
    for(int i=0; i<arraysize; i++){
        scanf("%d", &array[i]);
    }

    printf("\nCurrent array: ");
    for(int i=0; i<arraysize; i++){
        printf("%d ", array[i]);
    }

    int flag=0;
    for(int i=0; i<arraysize; i++){
        if(array[i] % 2 == 0){
            flag++;
        }
    }

    printf("\nNumber of even numbers in the given array is %d", flag);
    return EXIT_SUCCESS;
}