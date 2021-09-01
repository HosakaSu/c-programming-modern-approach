#include <stdio.h>


int main(void){
  int grade_number, grade_number_1;
  printf("Enter a numerical number: ");
  scanf("%d", &grade_number);
  if(grade_number <= 100){
    grade_number_1 = grade_number / 10;
    switch(grade_number_1){
      case 10:
      case  9:
        printf("Letter grade: A\n");
        break;
      case 8:
        printf("Letter grade: B\n");
        break;
      case 7:
        printf("Letter grade: C\n");
        break;
      case 6:
        printf("Letter grade: D\n");
        break;
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
      case 0:
          printf("Letter grade: F\n");
          break;
    }
  }
  else{
    printf("invalid grade number.\n");
  }
  return 0;
}
