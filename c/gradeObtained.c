#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n*** Program that outputs grade obtained from mark percentage ***\n");
    printf("Please enter your mark percentage: ");
    float percentage;
    if(scanf("%f", &percentage) != 1){
        printf("Please enter a valid percentage\n\n");
        return EXIT_FAILURE;
    }

    if(percentage < 0 || percentage > 100){
        printf("Please enter a valid mark percentage\n\n");
    }
    else if(percentage >= 90){
        printf("Your grade is: A\n\n");
    }
    else if(percentage >= 80){
        printf("Your grade is: B\n\n");
    }
    else if(percentage >= 70){
        printf("Your grade is: C\n\n");
    }
    else if(percentage >= 60){
        printf("Your grade is: D\n\n");
    }
    else if(percentage >= 50){
        printf("Your grade is: E\n\n");
    }
    else{
        printf("Failed\n\n");
    }

    return EXIT_SUCCESS;
}
