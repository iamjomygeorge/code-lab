#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit = 5;
    for(int i=1; i<=limit; i++){
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
