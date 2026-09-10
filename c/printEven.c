#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\nEnter the limit: ");
    int limit;
    if(scanf("%d", &limit) != 1){
        printf("\nEnter a valid integer.\n\n");
        return EXIT_FAILURE;
    }

    int i, even;
    for(i=0; i<=limit; i++){
        if( i%2 == 0){
            even = i;
            printf("%d\n", even);
        }
    }

    return EXIT_SUCCESS;
}
