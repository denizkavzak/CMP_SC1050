#include<stdio.h>

int main(){

    int counter = 0;
    int grade;
    int total_grade = 0;
    float average_grade;

    printf("Enter a grade: (-1 to exit): ");
    scanf("%d", &grade);

    while(grade != -1){
        total_grade = total_grade + grade;
        counter = counter + 1;
                
        printf("Enter a grade: (-1 to exit): ");
        scanf("%d", &grade);
    }

    printf("Counter: %d\n", counter);
    if(counter != 0) {
        average_grade = total_grade / counter;
        printf("Average grade: %.2f\n", average_grade);
    }

    average_grade >= 60 ? printf( "Passed\n" ) :  printf( "Failed\n" );

    return 0;
}

