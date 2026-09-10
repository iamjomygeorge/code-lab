#include <stdio.h>
#include <stdlib.h>

void sum(void){
    int num1, num2, sum;

    printf("\nEnter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum of %d and %d is: %d", num1, num2, sum);
}

int main(void){
    sum();
    return EXIT_SUCCESS;
}
