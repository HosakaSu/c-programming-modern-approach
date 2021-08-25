#include <stdio.h>

int main(void){
	
	float commision, value, number, price, commision_competitor;

	printf("Enter number of trade: ");
	scanf("%f", &number);
	printf("\nEnter price of each stock: ");
	scanf("%f", &price);
	value = number * price;
	if(number < 2000)
		commision_competitor = 33.00f + 0.03f * number;
	else
		commision_competitor = 33.00f + 0.02f * number;
	if(value < 2500.00f)
		commision = 30.00f + 0.017f * value;
	else if(value < 6250.00f)
		commision = 56.00f + 0.0066f * value;
	else if(value < 20000.00f)
		commision = 76.00f + 0.0034f * value;
	else if(value < 50000.00f)
		commision = 100.00f + 0.0022f * value;
	else if(value < 500000.00f)
		commision = 155.00f + 0.0011f * value;
	else
		commision = 255.00f + 0.0009f * value;
	if(commision < 39.00f)
		commision = 39.00f;
	
	printf("commision\tcommision_competitor\n");
	printf("%.2f\t\t\t%.2f\n", commision, commision_competitor);

	return 0;
}
