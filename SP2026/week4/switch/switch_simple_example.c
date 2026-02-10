#include<stdio.h>

// write a program using switch case
// prints de letter grade
int main(){

    char grade;
    printf("Enter the letter grade.\n");

    grade = getchar();

    switch(grade){            
        case 'A':
            printf("A\n");
            break;
        case 'B':
            printf("B\n");
            break;
        case 'C':
            printf("C\n");
            break;
        case 'D': 
            printf("D\n");
            break;
        case 'F':
            printf("F\n");
            break;
        case '\n':
        case '\t':
        case ' ':
            break;
        default: 
            printf("Enter a valid letter grade A,B,C,D,F!\n");
            break;
    } 

    return 0;
}