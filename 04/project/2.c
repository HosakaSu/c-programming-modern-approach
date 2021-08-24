#include <stdio.h>

int main(void){
	int  number_100, number_10, number_1;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &number_100, &number_10, &number_1);
	printf("The reverse number is: %d%d%d\n", number_1, number_10, number_100);


	return 0;
}
