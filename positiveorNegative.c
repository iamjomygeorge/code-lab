#include <stdio.h>
#include <stdlib.h>

int main(void){
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    if(number > 0){
        printf("The entered number is a positive number\n");
    } else if(number == 0){
        printf("The entered number is zero.\n");
    } else{
        printf("The number is negative\n");
    }

    return EXIT_SUCCESS;
}
