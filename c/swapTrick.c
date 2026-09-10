#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1, num2;
    printf("*** Program to SWAP two numbers without temp variable ***\nEnter any two numbers:\n");
    scanf("%f%f", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping, num1 = %g and num2 = %g", num1, num2);

    return EXIT_SUCCESS;
}
