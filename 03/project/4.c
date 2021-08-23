#include <stdio.h>
int main(void){
    int number_1, number_2, number_3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &number_1, &number_2, &number_3);
    printf("\nYou entered %.3d.%.3d.%.4d\n", number_1, number_2, number_3);






    return 0;
}