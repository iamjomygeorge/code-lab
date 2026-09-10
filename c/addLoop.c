#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\nPlease enter the limit upto addition should occur: ");
    int input;
    if(scanf("%d", &input) != 1){
        printf("Please enter an integer\n\n");
        return EXIT_FAILURE;
    }

    int i, sum=0;
    for(i=1; i<=input; i++){
        sum = sum+i;
    }
    printf("Sum = %d", sum);

    return EXIT_SUCCESS;
}
