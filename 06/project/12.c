#include <stdio.h>

float power(int number);
int main(void){
    float number;
    int sum = 1;
    int i = 1;
    printf("Enter a epison number: ");
    scanf("%f", &number);
    do{
        sum = sum + 1/power(i);
        i ++;
    }
    while(power(i)>number);
    printf("the approximate value of e is %.10f", sum);

}

float power(int number){
    long result = 1;
    for(int i = 1; i <= number; i ++){
        result = result * i;
    }


    return result;
}