#include <stdio.h>
#define HEIGHT      8
#define LENGTH      12
#define WIDTH       10

int main(void){
    int volume, weight;
    volume = HEIGHT * LENGTH * WIDTH;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d\n", HEIGHT, LENGTH, WIDTH);
    printf("Volume(Cubic inches): %d\n", volume);
    printf("Dimensional weight(pounds): %d\n", weight);
    return 0;
}
