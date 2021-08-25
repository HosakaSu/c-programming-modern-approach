#include <stdio.h>

int main(void){
	int number_1, number_2, number_3, number_4,  largest, smallest;

	printf("Enter 4 integers: ");
	scanf("%d %d %d %d", &number_1, &number_2, &number_3, &number_4);
	
	largest = (number_1 > number_2) ? number_1 : number_2;
	largest = (largest > number_3) ? largest : number_3;
	largest = (largest > number_4) ? largest : number_4;
	
	smallest = (number_1 > number_2) ? number_2 : number_1;
	smallest = (smallest > number_3) ? number_3 : smallest;
	smallest = (smallest > number_4) ? number_4 : smallest;

	printf("Largest: %d\nSmallest: %d\n", largest, smallest);







	return 0;
}
