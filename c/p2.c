#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit = 5;
    for(int i=0; i<limit; i++){
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
