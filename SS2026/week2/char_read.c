#include <stdio.h>
/*
scanf("%c", &ch) stores the character through a 
pointer and returns the number of successfully read items
*/
int main(void)
{
    int number;
    char grade;//, grade2, grade3, grade4;


    printf("Enter a number and a letter grade: ");
    scanf("%d", &number);
    scanf(" %c", &grade); // space vs no space before %c
    // scanf("%c", &grade2);
    // scanf("%c", &grade3);
    // scanf("%c", &grade4);

    printf("num: %d and grade: %c\n", number, grade);
    //printf("grade2: %c and grade3: %c and grade4: %c\n", grade2, grade3, grade4);
    //printf("num: %d and grade: %c grade2: %c\n", number, grade, grade2);

    return 0;
}

