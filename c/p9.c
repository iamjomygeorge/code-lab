#include <stdio.h>

int main(void){
    int limit = 5;
    
    for(int i=1; i<=limit; i++){
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }
        for(int k=1; k<=2*(limit-i)+1; k++){
            printf("*");
        }
        printf("\n");
    }
}
