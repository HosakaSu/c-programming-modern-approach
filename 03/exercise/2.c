#include <stdio.h>

int main(void){
    float x  = 1.2334546456547;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-10.3f\n", x);
    printf("%6.0f\n", x);
    
    return 0;
}