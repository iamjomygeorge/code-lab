#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n*** Program that finds whether you passed or failed the subject ***\n");
    printf("Please enter your mark: ");
    float mark;
    if(scanf("%f", &mark) != 1){
        printf("Invalid entry. Please enter a valid number.\n");
        return EXIT_FAILURE;
    }
    
    if(mark < 0){
        printf("Please enter a valid mark\n");
    }
    else if(mark < 50){
        printf("Oops you failed the subject. Score better next time!\n");
    }
    else if(mark > 100){
        printf("Max mark you can obtain is 100. Please enter a valid mark\n");
    }
    else if(mark == 100){
        printf("You have passed the subject. Congratulations on getting full mark!\n");
    }
    else{
        printf("You have passed the subject. Congratulations!\n");
    }

    return EXIT_SUCCESS;
}
