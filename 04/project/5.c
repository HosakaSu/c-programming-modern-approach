#include <stdio.h>

int main(void){

    int upc_1, upc_2, upc_3, upc_4, upc_5, upc_6, upc_7, upc_8, upc_9, upc_10, upc_11;
    int first_sum, second_sum, total;
    printf("Enter the first 11 digits of a UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &upc_1, &upc_2, &upc_3, &upc_4, &upc_5, &upc_6, &upc_7, &upc_8, &upc_9, &upc_10, &upc_11);

    first_sum = upc_1 + upc_3 + upc_5 + upc_7 + upc_9 + upc_11;
    second_sum = upc_2 + upc_4 + upc_6 + upc_8 + upc_10;
    total = first_sum * 3 + second_sum - 1;
    total = total % 10;
    total = 9 - total;
    printf("Check digit: %d\n", total);


    return 0;

}