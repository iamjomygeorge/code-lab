#include <stdio.h>

int main(void){
    int limit = 5;
    int space = limit-1;
    for(int i=1; i<=limit; i++){
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        space --;
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
}
