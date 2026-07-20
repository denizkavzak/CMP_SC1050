#include <stdio.h>

struct Student
{
    int id;
    char grade;
    double examAverage;
};

int main(void)
{
    struct Student student1;

    // assign values to members
    student1.id = 12345; 
    student1.grade = 'A';
    student1.examAverage = 92.5;

    printf("ID: %d\n", student1.id);
    printf("Grade: %c\n", student1.grade);
    printf("Average: %.1f\n", student1.examAverage);

    return 0;
}