#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\nEnter the number: ");
    int number;
    if(scanf("%d", &number) != 1){
        printf("Please enter an integer\n\n");
        return EXIT_FAILURE;
    }

    for(int i=1; i<11; i++){
        int result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }

    return EXIT_SUCCESS;
}
