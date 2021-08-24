#include <stdio.h>

int main(void){
    int number, number_100, number_10, number_1;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    number_100 = number / 100;
    number = number - number_100 * 100;
    number_10 = number / 10;
    number_1 = number % 10;
    printf("The reverse is %d%d%d\n", number_1, number_10, number_100);



    return 0;
}