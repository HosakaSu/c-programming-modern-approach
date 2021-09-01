#include <stdio.h>


int main(void){
    float number, max_number;

    do {
        printf("\nEnter a number: ");
        scanf("%f", &number);
        if(number >= max_number){
            max_number = number;
        }
    }
    while(number > 0);

    printf("The largest number entered was %f\n", max_number);

    return 0;
}