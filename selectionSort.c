#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[5] = {20, 90, 40, 5, 10};
    for (int i=0; i<5; i++){
        for (int j=i+1; j<5; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%d ", array[i]);
    }

    return EXIT_SUCCESS;
}
