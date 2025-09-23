#include<stdio.h>

int main(){

    char grade;

    printf("Enter a grade: \n");
    scanf("%c",&grade);

    switch(grade){

      case 'A':
        printf("Grade is A\n");
      case 'B':
        printf("Grade is B\n");
      case 'C':
        printf("Grade is C\n");
        break;
      default:
        printf("Grade is anything else\n");  
    }

    return 0;

}
