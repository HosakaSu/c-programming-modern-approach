#include <stdio.h>


int main(void){
    	
    int number, number_reverse;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);

    printf("The reverse number is: ");
    do{
        printf("%d",number % 10);
        number = number /10;
    }
    while(number != 0);
    printf("\n");

	// number_reverse = (number % 10) * 10 + number / 10;
	// printf("The reverse number is: %d\n", number_reverse);






    return 0;
}