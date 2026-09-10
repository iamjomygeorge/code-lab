#include <stdio.h>

int main(void){
    int limit = 5, j;
    for(int i=1; i<=limit; i++){
        for(j=1; j<=limit-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
}
