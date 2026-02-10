#include<stdio.h>

// write a program using switch case
// prints the 
int main(){

    int number;
    printf("Enter the value from 1 to 5 in given survey question.\n");
    scanf("%d", &number);

    switch(number){            
        case 1:
            printf("Strongly Disagree\n");
            break;
        case 2:
            printf("Disagree\n");
            break;
        case 3:
            printf("Somewhat Agree\n");
            break;
        case 4: 
            printf("Agree\n");
            break;
        case 5:
            printf("Strongly Agree\n");
            break;
        default: 
            printf("Enter a valid value 1-5!\n");
            break;
    } 

    return 0;
}