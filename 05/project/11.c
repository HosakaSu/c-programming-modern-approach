#include <stdio.h>

int main(void){
    int number, number_1, number_2;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    if((number >=100)&&(number <= 9)){
        printf("Invalid number\n");
        return -1;
    }
    else{
        number_1 = number / 10;
        number_2 = number - number_1 * 10;
        printf("You entered the number of ");
        if(number_1 == 1){
            switch(number_2){
                case 1:
                    printf("eleven\n");
                    break;
                case 2:
                    printf("twelve\n");
                    break;
                case 3:
                    printf("thirteen\n");
                    break;
                case 4:
                    printf("fourteen\n");
                    break;
                case 5:
                    printf("fifteen\n");
                    break;
                case 6:
                    printf("sixteen\n");
                    break;
                case 7:
                    printf("seventeen\n");
                    break;
                case 8:
                    printf("eighteen\n");
                    break;
                case 9:
                    printf("nineteen\n");
                    break;
            }
        }
        else{
            switch(number_1){
                case 2:
                    printf("twenty");
                    break;
                case 3:
                    printf("thirty");
                    break;
                case 4:
                    printf("forty");
                    break;
                case 5:
                    printf("fifty");
                    break;
                case 6:
                    printf("sixty");
                    break;
                case 7:
                    printf("seventy");
                    break;
                case 8:
                    printf("eighty");
                    break;
                case 9:
                    printf("ninety");
                    break;
              }
              switch(number_2){
                case 0:
                    break;
                case 1:
                    printf("-one\n");
                    break;
                case 2:
                    printf("-two\n");
                    break;
                case 3:
                    printf("-three\n");
                    break;
                case 4:
                    printf("-four\n");
                    break;
                case 5:
                    printf("-five\n");
                    break;
                case 6:
                    printf("-six\n");
                    break;
                case 7:
                    printf("-seven\n");
                    break;
                case 8:
                    printf("-eight\n");
                    break;
                case 9:
                    printf("-nine\n");
                    break;
              }
            }
        }
    return 0;
}
