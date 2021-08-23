#include <stdio.h>

int main(void){
    float loan_amount = 0;
    float interest_rate = 0;
    float monthly_payment = 0;
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("\nEnter interest of rate: ");
    scanf("%f", &interest_rate);
    printf("\nEnter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Balance remaining after first payment: %.2f\n", loan_amount + loan_amount*(interest_rate/100.0)/12.0 - monthly_payment);
    loan_amount = loan_amount + (interest_rate/100.0)/12.0*loan_amount - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", loan_amount + loan_amount*(interest_rate/100.0)/12.0 - monthly_payment);
    loan_amount = loan_amount + loan_amount*(interest_rate/100.0)/12.0 - monthly_payment;
    printf("Balance remaing after third payment: %.2f\n", loan_amount + (interest_rate/100.0)/12.0*loan_amount - monthly_payment);
    return 0;
}