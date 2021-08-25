#include <stdio.h>

int main(void){
	int hour,hour_12,minute;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	if(((hour >= 0)&&(hour <= 24))&&(minute >= 0)&&(minute < 60)){
		if(hour <= 12){
			hour_12 = hour;
			printf("Equivalent 12-hour time: %d:%d AM\n", hour_12, minute);
		}	
		else{
			hour_12 = hour - 12;
			printf("Equivalent 12-hour time: %d:%d PM\n", hour_12, minute);
		}
	}
	else{
		printf("input format error\nexiting\n");
		return -1;
	
	}

	return 0;
}

