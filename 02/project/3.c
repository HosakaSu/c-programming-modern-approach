#include <stdio.h>

#define PI 3.1415926
int main(void){
    float radius = 0;
    printf("input the radius of the cube:\n");
    scanf("%f", &radius);
    printf("you entered %.1f as the radius\n", radius);
    printf("the volume of the cube is %.3f\n", 4/3.0 * PI * radius * radius * radius);
    return 0;
}