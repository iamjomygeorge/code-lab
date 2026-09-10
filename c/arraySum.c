#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5], sum=0;
    for( int i=0; i<5; i++ ){
        array[i] = i;
    }

    for( int i=0; i<5; i++){
        sum += array[i];
    }
    printf("%d", sum);

    return EXIT_SUCCESS;
}
