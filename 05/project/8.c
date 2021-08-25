#include <stdio.h>

int main(void){
    int hour, minute, total_minute;
    int offset_1, offset_2, offset_3, offset_4, offset_5, offset_6, offset_7, offset_8;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    total_minute = hour * 60 + minute;
    offset_1 = total_minute - 8 * 60;
    offset_2 = total_minute - 9 * 60 + 43;
    offset_3 = total_minute - 11 * 60 + 19;
    offset_4 = total_minute - 12* 60 + 47;
    offset_5 = total_minute - 14 * 60;
    offset_6 = total_minute - 15 * 60 + 45;
    offset_7 = total_minute - 19 * 60;
    offset_8 = total_minute - 21 * 60 + 45;

    if(offset_1 <= 0){
        printf("Closest departure time is 8:00a.m. arriving time is 10:16 a.m\n");
    }
    else if(offset_8 >= 0){
        printf("Closest departure time is 9:45 p.m arriving time is 11:58 a.m\n");
    }
    else if((offset_1 > 0)&&(offset_2 < 0)){
        if((offset_1 + offset_2) >= 0){
            printf("Closest departure time is 9:43 a.m arriving time is 11:52 a.m\n");
        }
        else{
            printf("CLosest departure time is 8:00a.m arriving time is 10:16a.m\n");
        }
    }
    else if((offset_2 > 0)&&(offset_3 < 0)){
        if((offset_2 + offset_3)>= 0){
            printf("Closest departure time is 11:19a.m arriving time is 1:31p.m \n");
        }
        else{
            printf("Closest departure time is 9:43a.m arriving time is 11:58a.m\n");
        }   
    }

    else if((offset_3 > 0)&&(offset_4 < 0)){
        if((offset_3 + offset_4)>= 0){
            printf("Closest departure time is 12:47p.m arriving time is 3:00p.m\n");
        }
        else{
            printf("Closest departure time is 11:19a.m arriving time is 1:31p.m \n");
        }   
    }

    else if((offset_4 > 0)&&(offset_5 < 0)){
        if((offset_4 + offset_5)>= 0){
            printf("Closest departure time is 2:00p.m arriving time is 4:08p.m\n");
        }
        else{
            printf("Closest departue time is 12:47p.m arriving time is 3:00p.m\n");
        }   
    }

    else if((offset_5 > 0)&&(offset_6 < 0)){
        if((offset_5 + offset_6)>= 0){
            printf("Closest departure time is 3:45p.n arriving time is 5:55p.m\n");
        }
        else{
            printf("Closest departure time is 2:00p.m arriving time is 4:08p.m\n");
        }   
    }

    else if((offset_6 > 0)&&(offset_7 < 0)){
        if((offset_6 + offset_7)>= 0){
            printf("Closest departure time is 7:00p.m arriving time is 9:20p.m\n");
        }
        else{
            printf("Closest departure time is 3:45p.m arriving time is 5:55p.m\n");
        }   
    }

    else if((offset_7 > 0)&&(offset_8 < 0)){
        if((offset_7 + offset_8)>= 0){
            printf("Closest departure time is 9:45p.m arriving time is 11:58p.m\n");
        }
        else{
            printf("Closest departure time is 7:00p.m arriving time is 9:20p.m\n");
        }   
    }








    return 0;
}