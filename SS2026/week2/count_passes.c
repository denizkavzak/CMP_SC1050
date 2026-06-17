#include<stdio.h>
/*
This program takes grade inputs from the
user until the sentinel value -1 is entered.
It counts the pass(>=70) and fail(<70) grades.
*/
int main(){

    int grade = 0, passes = 0, fails = 0;

    while(grade != -1){
        printf("Enter a grade (-1 to stop): \n");
        scanf("%d",&grade);

        if(grade == -1){
            printf("You are done with entering grades\n");
        }
        else if(grade < 0){ // input validation
            printf("Enter a grade greater than or equal to 0!\n");
        }
        else if(grade >= 70){
            passes = passes + 1;
        }else{
            fails = fails + 1;
        }
    }

    printf("passes: %d\n", passes);
    printf("fails: %d\n", fails);

    return 0;
}