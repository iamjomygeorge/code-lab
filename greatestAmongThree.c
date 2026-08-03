#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n*** Program to find the greatest among three numbers ***\n");
    printf("Enter the first number: ");
    int num1;
    if(scanf("%d", &num1) !=1 ){
        printf("Invalid input. Please enter an integer\n");
        return EXIT_FAILURE;
    }
    printf("Enter the second number: ");
    int num2;
    if(scanf("%d", &num2) !=1 ){
        printf("Invalid input. Please enter an integer\n");
        return EXIT_FAILURE;
    }
    printf("Enter the third number: ");
    int num3;
    if(scanf("%d", &num3) !=1 ){
        printf("Invalid input. Please enter an integer\n");
        return EXIT_FAILURE;
    }

    printf("\nThe entered numbers are: %d, %d, and %d\n\n", num1, num2, num3);


    if(num1 == 0 && num2 == 0 && num3 == 0){
        printf("All three numbers are zero.\n");
        return EXIT_SUCCESS;
    }

    if(num1 == num2 && num2 == num3){
        printf("All three numbers are the same.\n");
        return EXIT_SUCCESS;
    }

    int greatest = num1;
    if(greatest < num2){
        greatest = num2;
    }if(greatest < num3){
        greatest = num3;
    }

    printf("The greatest number is: %d\n", greatest);

    return EXIT_SUCCESS;
}
