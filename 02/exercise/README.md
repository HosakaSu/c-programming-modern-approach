## Section 2.1
### 1
compiled in the standard of c99, it won't return any error or warning

compiled in the standard of c89, this program will get a warning message 
```
warning: control reaches end of non-void function [-Wreturn-type]
```
To solve this warning, this main function should be ended with a return value, e.g. 
``` C
return 0;
```
## Section 2.2
### 2
Directives:
```
printf
```
Statements:
```
```

```
The Program produce Parkinson's law:

Work expands so as to fill the time

available for its completion.
```
## Section 2.3
### 3
``` C
#include <stdio.h>
#define HEIGHT      8
#define LENGTH      12
#define WIDTH       10

int main(void){
    int volume, weight;
    voulme = HEIGHT * LENGTH * WIDTH;
    weight = (VOLUME + 165) / 166;
    printf("Dimensions: %dx%dx%dx\n", HEIGHT, LENGTH, WIDTH);
    printf("Volume(Cubic inches): %dx\n", volume);
    printf(Dimensional weight(pounds): %dx\n", weight);
    return 0;
}
```
### 4
Write a program that declares several int and float variables -- without initializing them -- and then prints their values.
``` C
#include <stdio.h>
int main(void){
    int val_a, val_b, val_c;
    float val_d, val_e, val_f;
    printf("%d\t%d\t%d\n", val_a, val_b, val_c);
    printf("%f\t%f\t%f\n", val_d, val_e, val_f);
    return 0;
}
```
As shown, uninitialized int variables will be shown as random values, 

while unintialized float variables will all be 0.