#include<stdio.h>

int main(){
    
    int counter, grade, total;

    float average;

    total = 0;
    counter = 0;

    printf("Enter grade, -1 to end:\n");
    scanf("%d", &grade);

    while(grade != -1){
        total = total + grade;
        counter = counter + 1;

        printf("Enter grade, -1 to end:\n");
        scanf("%d", &grade);
    }

    if(counter != 0) {
        average = (float) total/counter;
        printf("Average grade is: %.4f\n",average);
    } 
    else {
        printf("No grades were entered!\n");
    }

    return 0;
}