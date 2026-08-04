#include <stdio.h>
#include <stdlib.h>

int main(void){
    int choice;
    printf("\nPlease enter your choice:\n1. For Egg\n2. For Banana\n3. For Milk\n4. For Carrot\n\n");
    if( scanf("%d", &choice) != 1){
        printf("\nInvalid input. Please enter a valid choice");
        return EXIT_FAILURE;
    }

    switch(choice){
        case 1:
        printf("\nYou have selected 'Egg'\n\n");
        break;
        case 2:
        printf("\nYou have selected 'Banana'\n\n");
        break;
        case 3:
        printf("\nYou have selected 'Milk'\n\n");
        break;
        case 4:
        printf("You have selected 'Carrot'\n\n");
        break;
        default:
        printf("\nInvalid input\n\n");
        break;
    }

    return EXIT_SUCCESS;
}
