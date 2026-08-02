#include <stdio.h>
#include <stdlib.h>

int main(void){
    float number1;
    printf("*** Program that finds the SUM of two numbers ***\nEnter a number: \n");
    scanf("%f", &number1);

    float number2;
    printf("Enter the other number: \n");
    scanf("%f", &number2);

    float sum = number1 + number2;
    printf("You have entered %g and %g \nThe sum is: %g", number1, number2, sum);

    return EXIT_SUCCESS;
}
