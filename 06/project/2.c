#include <stdio.h>

int main(void){
    int number1, number2, number3;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    if(number1 < number2){
        number3 = number2;
        number2 = number1;
        number1 = number3;
    }
    if(number2 == 0){
        number3 = number1;
        printf("Greatest common divisor: %d", number3);
        return -1;
    }
    else {
        while(number2 != 0){
            number3 = number1 % number2;
            number1 = number2;
            number2 = number3;
        }
        printf("Greatest common divisor: %d\n", number1);
    }




    return 0;
}