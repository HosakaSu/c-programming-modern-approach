## Section 1
the output will be like
```
    86,1000
 3.02530e+01
 83.1620
1e-06
```
## Section 2
``` c
#include <stdio.h>

int main(void){
    float x  = 1.2334546456547;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-10.3f\n", x);
    printf("%6.0f\n", x);
    
    return 0;
}
```
## Section 3
