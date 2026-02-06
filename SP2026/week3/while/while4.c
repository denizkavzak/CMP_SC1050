#include<stdio.h>

// 10 students have grades from 0 to 100, get the average
int main(){

    int counter; // loop counter control
    int sum_grades = 0; // store the sum of the grades
    // DEPENDING ON THE SYSTEM AND C VERSION,
    // NOT INITIALIZING SUM_GRADES MAY CAUSE "GARBAGE VALUE"
    int average; // store the grade average
    int grade; // store the user input

    counter = 1; // counter will start from 1 and will be used to loop
    sum_grades; // it will start with 0 and cumulatively store the sum of grades

    printf("sum_grades not initialized %d\n", sum_grades);

    while(counter <= 2){

        printf("Enter the student grade (0 to 100): ");
        scanf("%d", &grade);

        sum_grades = sum_grades + grade; // cumulatively add up the grades

        counter = counter + 1; // increment the loop counter
    }

    average = sum_grades / 2;

    printf("Average grade is: %d\n", average);

    return 0;
}