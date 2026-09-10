#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("*** Program that finds which is the greater number ***\n");
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter another number: ");
    scanf("%d", &num2);

    int greater;
    if(num1 > num2){
        greater = num1;
    }else if(num1 == num2){
        printf("Both numbers are same.");
        return 0;
    }else{
        greater = num2;
    }

    printf("Among %d and %d the greater number is %d", num1, num2, greater);

    return EXIT_SUCCESS;
}
