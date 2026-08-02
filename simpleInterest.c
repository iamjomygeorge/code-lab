#include <stdio.h>
#include <stdlib.h>

int main(void){
    int p; float r; float n; float si;

    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Interest Rate: ");
    scanf("%f", &r);
    printf("Enter Number of Years: ");
    scanf("%f", &n);

    si = (p*r*n)/100;
    printf("Simple Interest: %g", si);

    return EXIT_SUCCESS;
}
