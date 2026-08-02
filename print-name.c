#include <stdio.h>
#include <stdlib.h>

int main (void){


    int a;
    printf("Please enter a number: \n");
    scanf("%d", &a);
    printf("you have entered %d \n", a);

    float b;
    printf("Please enter a floating point number: \n");
    scanf("%f", &b);
    printf("you have entered %g \n", b);

    char c;
    printf("Please enter a character: \n");
    scanf(" %c", &c);
    printf("you have entered %c \n", c);
    
    return EXIT_SUCCESS;
}
