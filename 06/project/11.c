#include <stdio.h>

float power(int number);

int main(void){
    int n;
    float sum = 1.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++){
        sum = sum + 1/power(i);
    }
    printf("the approximate value of e is %.10f", sum);


    return 0;
}

float power(int number){
    long result = 1;
    for(int i = 1; i <= number; i ++){
        result = result * i;
    }


    return result;
}