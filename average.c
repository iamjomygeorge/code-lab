#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a, b, c;
    printf("*** Program that finds the AVERAGE of three numbers ***\nEnter any 3 numbers: \n");
    scanf("%f%f%f", &a, &b, &c);

    float avg = (a+b+c)/3;
    printf("The average of %g, %g, and %g is %g", a, b, c, avg);

    return EXIT_SUCCESS;
}
