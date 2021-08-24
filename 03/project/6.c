#include <stdio.h>
 
int main(void){
	int num1, demon1, num2, demon2, result_num, result_demon;
	printf("Enter two fractions separted by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &demon1, &num2, &demon2);
	result_num = num1 * demon2 + num2 * demon1;
	result_demon = demon1 * demon2;
	printf("The sum is %d/%d\n", result_num, result_demon);



	return 0;
}
