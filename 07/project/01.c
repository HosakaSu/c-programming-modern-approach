#include <stdio.h>

//i in int type when n = 46341 i * i will fail
//i in short type when n = 32767 i * i will fail
// i in long type when n =  i * i will fail
int main(void){
    int i, n;
    short ii;
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);
    for(ii = 0; ii <= n; ii ++){
        printf("%10d %10d\n", ii, ii * ii);
    }




    return 0;
}