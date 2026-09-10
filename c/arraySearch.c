#include <stdio.h>
#include <stdlib.h>

int main() {
    int limit;
    printf("\nEnter the size of array that you want: ");
    if (scanf("%d", &limit) !=1 || limit<=0){
        printf("Invalid array size\n");
        return EXIT_FAILURE;
    }

    int array[limit];
    printf("\nEnter the values into the array:\n");
    for (int i=0; i<limit; i++){
        scanf("%d", &array[i]);
    }

    int searchKey;
    printf("\nEnter the value you want to search in the array: ");
    scanf("%d", &searchKey);

    for(int i=0; i<limit; i++){
        if(array[i] == searchKey){
            printf("\nElement is found at position %d", i);
            return EXIT_SUCCESS;
        }
    }
    printf("\nElement not found in the array.\n");
}
