#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main() {
    int a[SIZE];
    printf("Enter %d numbers: \n", SIZE);
    for(int i=0; i<SIZE; i++){
        if ( scanf("%d", &a[i]) !=1 ){
            printf("Please enter a valid integer\n");
            return EXIT_FAILURE;
        }
    }

    printf("The elements entered into the array are: \n");
    for(int i=0; i<SIZE; i++){
        printf("%d\n", a[i]);
    }

    return EXIT_SUCCESS;
}
