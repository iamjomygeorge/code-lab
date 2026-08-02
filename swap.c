#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1, num2;
    printf("*** Program that swaps the value of two variables ***\nEnter number 1: \n");
    scanf("%f", &num1);
    printf("Enter number 2: \n");
    scanf("%f", &num2);

    printf("You have entered %g and %g\n", num1, num2);
    float swapVariable = num1;
    num1 = num2;
    num2 = swapVariable;

    printf("After swapping, number 1 = %g and number 2 = %g", num1, num2);

    return EXIT_SUCCESS;
}
