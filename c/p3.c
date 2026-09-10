#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit = 5;
    for(int i=0; i<limit; i++){
        for(int j=0; j<limit-i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
