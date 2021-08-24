#include <stdio.h>

int main(void){
    int number, number_1, number_2, number_3, number_4, number_5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    number_1 = number % 8;
    number = number / 8;
    number_2 = number % 8;
    number = number / 8;
    number_3 = number % 8;
    number = number / 8;
    number_4 = number % 8;
    number = number / 8;
    number_5 = number % 8;
    printf("In octal, your number is: %d%d%d%d%d\n", number_5, number_4, number_3, number_2, number_1);



    return 0;
}