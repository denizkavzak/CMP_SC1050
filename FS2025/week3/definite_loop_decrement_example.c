#include<stdio.h>

int main(){

    int counter, grade, total, average;

    total = 0;
    counter = 10;

    while(counter >= 1){
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter - 1;
    }

    average = total/10;

    printf("Average grade is: %d\n", average);

    return 0;
}