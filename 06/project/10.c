#include <stdio.h>

int main(void){
    int month1, month2, day1, day2, year1, year2;

    do{
        year2 = year1;
        month2 = month1;
        day2 = day1;
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month1, &day1, &year1);
        if(year1 < year2){
            year2 = year1;
            month2 = month1;
            day2 = day1;
        }
        else if(year1 > year2){

        }
        else if(year1 == year2){
            if(month1 < month2){
                year2 = year1;
                month2 = month1;
                day2 = day1;
            }
            else if (month1 > month2){

            }
            else if(month1 == month2){
                if(day1 < day2){
                    year2 = year1;
                    month2 = month1;
                    day2 = day1;
                }
                else if(day1 > day2){

                }
                else if(day1 == day2){
                }
            }
        }
    }
    while((year1 == 0)&&(month1 == 0)&&(day1 == 0));

    printf("%d/%d/%d/ is the earlist date\n", month2, day2, year2);

    return 0;
}