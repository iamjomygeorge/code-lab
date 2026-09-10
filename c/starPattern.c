#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\nEnter the limit: ");
    int limit;
    if(scanf("%d", &limit) != 1){
        printf("Please enter an integer\n\n");
        return EXIT_FAILURE;
    }

    for(int i=1; i<=limit; i++){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
