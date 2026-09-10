#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit = 5;
    for(int i=1; i<=limit; i++){
        for(int j=1; j<=limit-i; j++){
            printf(" ");
        }
        for (int k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
}
