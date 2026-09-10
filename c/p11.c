#include <stdio.h>

int main(void){
    int limit = 5, counter=limit;
    for(int i=1; i<=limit; i++){
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }
        for(int j=1; j<=counter; j++){
            printf("* ");
        }
        counter --;
        printf("\n");
    }
}
