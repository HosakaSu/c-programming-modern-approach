#include <stdio.h>

int main(void){
	int number, number_reverse;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	number_reverse = (number % 10) * 10 + number / 10;
	printf("The reverse number is: %d\n", number_reverse);


	return 0;
}
