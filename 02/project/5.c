#include <stdio.h>

#define poly5(x)    x*x*x*x*x
#define poly4(x)    x*x*x*x
#define poly3(x)    x*x*x
#define poly2(x)    x*x

int main(void){
    int x;
    printf("input x\n");
    scanf("%d", &x);
    printf("the result of the required polynominal 3*x^5+2*x^4-5*x^3-x^2+7x-6 is %d\n", 3*poly5(x) + 2*poly4(x) - 5*poly3(x) - poly2(x) + x -6);
    return 0;
}