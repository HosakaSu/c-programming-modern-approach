#include <stdio.h>

int main(void){
	int number, number_digit;
	printf("Enter a number blow 4 digits: ");
	scanf("%d", &number);
	if(number > 9999){
		printf("the number you entered is beyond 4 digits\nexiting...\n");
		return -1;
	}
	if((number >=0)&&(number <= 9))
	{
		number_digit = 1;
	}
	if((number >= 10)&&(number <= 99))
	{
		number_digit = 2;
	}
	if ((number >= 100)&&(number <= 999)){

		number_digit = 3;
	}
	else{
		number_digit = 4;
	}
	printf("The number %d has %d digits\n", number, number_digit); 
	return 0;
}
