#include<stdio.h>

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
        case 3:
            printf("Somewhat Agree\n");
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

