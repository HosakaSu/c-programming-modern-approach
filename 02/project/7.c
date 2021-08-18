#include <stdio.h>

int main(void){
    int dollar_amount = 0;
    int twenty_dollar_amount, ten_dollar_amount, five_dollar_amount, one_dollar_amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);
    twenty_dollar_amount = dollar_amount / 20;
    dollar_amount = dollar_amount - twenty_dollar_amount * 20;
    ten_dollar_amount = dollar_amount / 10;
    dollar_amount = dollar_amount - ten_dollar_amount * 10;
    five_dollar_amount = dollar_amount / 5;
    dollar_amount = dollar_amount - five_dollar_amount * 5;
    one_dollar_amount = dollar_amount;
    printf("$20 bills: %d\n", twenty_dollar_amount);
    printf("$10 bills: %d\n", ten_dollar_amount);
    printf("$5 bills:  %d\n", five_dollar_amount);
    printf("$1 bills: %d\n", one_dollar_amount);
    return 0;
}