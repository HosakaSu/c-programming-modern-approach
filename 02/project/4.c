#include <stdio.h>

#define TAX_RATE 0.05

int main(void){
    float dollar = 0;
    printf("enter the dollar count you want to figure out:\n");
    scanf("%f", &dollar);
    printf("your input number is %.0f\n", dollar);
    printf("th enumber with 5\% rate added is %.2f\n", dollar*(1+0.05));
    return 0;
}