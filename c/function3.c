#include <stdio.h>
#include <stdlib.h>

int sum(int num1, int num2);

int main(void){
    int num1, num2, result;
    printf("\nEnter num1: ");
    scanf("%d", &num1);
    printf("\nEnter num2: ");
    scanf("%d", &num2);

    result = sum(num1, num2);
    printf("\nThe sum of %d and %d is: %d", num1, num2, result);
    return EXIT_SUCCESS;
}

int sum(int num1, int num2){
    return num1 + num2;
}
