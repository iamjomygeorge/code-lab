#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n*** Program to check if the number is prime or not ***\n");
    printf("Enter a number: ");
    int number;
    if(scanf("%d", &number) != 1){
        printf("Please enter an integer instead\n\n");
        return EXIT_FAILURE;
    }

    if(number <= 1){
        printf("Not a prime.\n\n");
        exit(0);
    }

    int flag = 0;
    for(int i=2; i<=number/2; i++){
        if(number % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("not a prime.\n\n");
    }
    else{
        printf("It is a prime number!\n\n");
    }

    return EXIT_SUCCESS;
}
