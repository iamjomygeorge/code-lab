#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n*** Calculator Program ***\n\n");
    printf("Enter your choice:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n\n Your choice: ");
    int choice;
    if( scanf("%d", &choice) != 1){
        printf("Invalid entry. Please enter an integer.\n");
        return EXIT_FAILURE;
    }

    if( choice <= 0 || choice > 4){
        printf("Please enter a valid choice from the option.\n");
        return 0;
    }

    printf("\nEnter the num1: ");
    float num1;
    if( scanf("%f", &num1) != 1){
        printf("Invalid entry. Please enter a valid number.\n");
        return EXIT_FAILURE;
    }
    printf("\nEnter num2: ");
    float num2;
    if( scanf("%f", &num2) != 1){
        printf("Invalid entry. Please enter a valid number.\n");
        return EXIT_FAILURE;
    }

    if( choice == 4 && num2 == 0){
        printf("Cannot divide by zero\n");
        return EXIT_FAILURE;
    }

    float result;
    if( choice == 1 ){
        result = num1 + num2;
        printf("Result of addition: %g\n", result);
    }
    else if( choice == 2 ){
        result = num1 - num2;
        printf("Result of subtraction: %g\n", result);
    }
    else if( choice == 3 ){
        result = num1 * num2;
        printf("Result of multiplication: %g\n", result);
    }
    else if( choice == 4){
        result = num1 / num2;
        printf("Result of division: %g\n", result);
    }

    return EXIT_SUCCESS;
}
