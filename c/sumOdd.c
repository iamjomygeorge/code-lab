#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\nEnter a limit: ");
    int limit;
    if(scanf("%d", &limit) != 1){
        printf("Please enter an integer\n\n");
        return EXIT_FAILURE;
    }

    int sum=0;
    for(int i=1; i<=limit; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("Sum: %d\n\n", sum);

    return EXIT_SUCCESS;
}
