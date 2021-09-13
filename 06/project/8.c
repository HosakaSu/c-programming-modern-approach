#include <stdio.h>


int main(void){
    int month_days, start_of_month;
    printf("Enter number of days in month: ");
    scanf("%d", &month_days);
    if((month_days<28)||(month_days>31)){
        printf("error input\n");
        return -1;
    }
    printf("Enter starting days of the week (1=Sum, 7=Sat): ");
    scanf("%d", &start_of_month); 
    if((start_of_month>7)||(start_of_month < 1)){
        printf("error input\n");
        return -1;
    }
    for(int i = 0; i < start_of_month; i ++){
        printf("   ");
    }
    for(int i = 1; i <= month_days; i++){
        printf("%4d", i);
        if((i + start_of_month - 1) % 7 == 0){
            printf("\n");
        }
    }


    return 0;
}