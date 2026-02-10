#include<stdio.h>

// write a program using switch case
// count the number of passes and fails in a class
int main(){

    char grade;
    int count_passes = 0;
    int count_fails = 0;
    int count_fail_prereq = 0;
    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    while((grade = getchar()) != EOF){
        switch(grade){            
            case 'A':
            case 'B':
            case 'C':
                count_passes++;
                break;
            case 'D': 
                count_fail_prereq++;
                break;
            case 'F':
                count_fails++;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default: 
                printf("Enter a valid letter grade A,B,C,D,F!\n");
                break;
        } 
    }

    printf("Number of passed grades: %d\n", count_passes);
    printf("Number of failed grades: %d\n", count_fails);
    printf("Number of failed prerequisite grades: %d\n", count_fail_prereq);
}