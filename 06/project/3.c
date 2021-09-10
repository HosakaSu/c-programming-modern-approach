#include <stdio.h>

int gcd(int number1, int number2);

int main(void){
    int number1, number2, number3;
    printf("Enter a fraction:");
    scanf("%d/%d", &number1, &number2);
    number3 = gcd(number1, number2);
    printf("In lowest term: %d/%d\n", number1/number3, number2/number3);




    return 0;
}

int gcd(int number1, int number2){
    int number3;
    if(number1 < number2){
        number3 = number2;
        number2 = number1;
        number1 = number3;
    }
    if(number2 == 0){
        number3 = number1;
        return number3;
    }
    else {
        while(number2 != 0){
            number3 = number1 % number2;
            number1 = number2;
            number2 = number3;
        }
        return number1;
    }
}