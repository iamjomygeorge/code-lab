#include <stdio.h>

int main(void){
    float inr = 100;
    float currentvalue = 0.0105;

    float equivalentUSD = inr * currentvalue;
    printf("%g Dollar", equivalentUSD);
}
