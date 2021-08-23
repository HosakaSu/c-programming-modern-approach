#include <stdio.h>

int main(void){
    int  mounth, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mounth, &day, & year);
    printf("you entered the date %4d%2d%2d\n", year, mounth, day);
    return 0;
}