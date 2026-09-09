#include <stdio.h>
#include <stdlib.h>

void sum(int num1, int num2){
    int result;
    result = num1 + num2;
    printf("\nThe sum of %d and %d is: %d", num1, num2, result);
}

int main(void){
    int num1, num2;
    printf("\nEnter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    sum(num1, num2);
    return EXIT_SUCCESS;
}
