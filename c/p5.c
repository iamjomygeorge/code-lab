#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit = 5;
    for(int i=1; i<=limit; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int k=1; k<=limit-1; k++){
        for(int l=1; l<=limit-k; l++){
            printf("*");
        }
        printf("\n");
    }
}
