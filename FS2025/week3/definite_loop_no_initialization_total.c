#include<stdio.h>

int main(){

    int counter, grade, total, average;

    // total = 0; we are not initializing the total
    // for you to see that weird value coming from the memory
    counter = 1;

    while(counter <= 10){
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }

    average = total/10;

    printf("Average grade is: %d\n", average);

    return 0;
}