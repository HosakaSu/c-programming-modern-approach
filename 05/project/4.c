#include <stdio.h>

int main(void){
	float wind_speed;
	printf("Enter wind speed: ");
	scanf("%f", &wind_speed);
	if(wind_speed < 1.00f)
		printf("wind speed is %.2f mile/h\tCalm\n", wind_speed);
	else if(wind_speed < 3.00f)
		printf("wind speed is %.2f mile/h\tLight air\n", wind_speed);
	else if(wind_speed < 27)
		printf("wind speed is %.2f mile/h\tBreese\n", wind_speed);
	else if(wind_speed < 47)
		printf("wind speed is %.2f mile/h\tGale\n", wind_speed);
	else if(wind_speed < 63)
		printf("wind speed is %.2f mile/h\tStorm\n", wind_speed);
	else
		printf("wind speed is %.2f mile/h\tHurricane\n", wind_speed);


	return 0;
}
