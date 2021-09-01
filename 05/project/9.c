#include <stdio.h>

int main(void){
    int month1, month2, day1,day2, year1, year2;

    int result = 0;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if(year1 < year2){
        result = 0;
    }
    else if(year1 > year2){
        result = 1;
    }
    else if(year1 == year2){
        if(month1 < month2){
            result = 0;
        }
        else if (month1 > month2){
            result = 1;
        }
        else if(month1 == month2){
            if(day1 < day2){
                result = 0;
            }
            else if(day1 > day2){
                result = 1;
            }
            else if(day1 == day2){
                result = 2;
            }
        }
    }

    if(result == 0){
        printf("%d/%d/%d/ is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    }
    if(result == 1){
        printf("%d/%d/%d/ is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
    if(result == 2){
        printf("two dates are the same day.\n");
    }

    return 0;
}
