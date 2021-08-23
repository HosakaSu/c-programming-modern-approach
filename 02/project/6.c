#include <stdio.h>
 int main(void){
     int x = 0;
     printf("input a number\n");
     scanf("%d", &x);
     printf("the polynominal's result is %d\n", (((3 *x +2)*x -5)*x +7)*x -6);
     return 0;
 }