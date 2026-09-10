#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit = 5;
    for(int i=1; i<=limit; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int k=1; k<=limit-i+1; k++){
            printf("*");
        }
        printf("\n");
    }
}
