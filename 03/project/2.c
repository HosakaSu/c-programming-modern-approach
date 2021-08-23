#include <stdio.h>

int main(void){
    int number, day, month, year;
    float price = 0;
    printf("Enter item number: ");
    scanf("%d", &number);
    printf("\nEnter unit price: ");
    scanf("%f", &price);
    if(price > 9999.99){
        return -1;
    }
    printf("\nEnter purchase data (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%-.2f\t\t%d/%d/%d\n", number, price, month, day, year);
    return 0;
}