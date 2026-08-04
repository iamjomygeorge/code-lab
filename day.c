#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\nPlease enter an input from 1-7: ");
    int input;
    if(scanf("%d", &input) != 1){
        printf("Please enter an integer.\n\n");
        return EXIT_FAILURE;
    }

    switch(input){
        case 1:
        printf("Sunday\n\n");
        break;
        case 2:
        printf("Monday\n\n");
        break;
        case 3:
        printf("Tuesday\n\n");
        break;
        case 4:
        printf("Wednesday\n\n");
        break;
        case 5:
        printf("Thursday\n\n");
        break;
        case 6:
        printf("Friday\n\n");
        break;
        case 7:
        printf("Saturday\n\n");
        break;
        default:
        printf("Invalid Entry\n\n");
        break;
    }

    return EXIT_SUCCESS;
}
