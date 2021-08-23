#include <stdio.h>

int main(void){
    int number[16] = {0};
    int row_sum[4], colum_sum[4], diagonal_sum[2];
    printf("Enter the numbers from 1 to 16 in any order:\n");
    
    for(int i = 0; i < 16; i ++){
        scanf("%d", &number[i]);
    }
    for(int i = 0; i < 16; i ++){
        printf("%d ", number[i]);
        if((i + 1)%4 == 0){
            printf("\n");
        }
    }
    for(int i = 0; i < 4; i ++){
        row_sum[i] = number[4 * i] + number[4 * i + 1] + number[4 * i + 2] + number[4 * i + 3];
        colum_sum[i] = number[i] + number[i + 4] + number[i + 8] + number[i + 12];
    }
    diagonal_sum[0] = number[0]+ number[5] + number[10] + number[15];
    diagonal_sum[1] = number[3]+ number[6] + number[9] + number[12];
    printf("\n\n");
    printf("Row sums: %d %d %d %d\n",row_sum[0], row_sum[1], row_sum[2], row_sum[3]);
    printf("Colum sums: %d %d %d %d\n", colum_sum[0], colum_sum[1], colum_sum[2], colum_sum[3]);
    printf("Diagonal sums: %d %d\n", diagonal_sum[0], diagonal_sum[1]);

    return 0;
}