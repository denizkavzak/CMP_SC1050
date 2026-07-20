#include <stdio.h>

typedef struct student
{
    int id;
    char grade;
    double examAverage;
}Student;

int main(void)
{
    Student student1;

    // assign values to members
    student1.id = 12345; 
    student1.grade = 'A';
    student1.examAverage = 92.5;

    printf("size of id=%zu\n", sizeof(student1.id));
    printf("size of grade=%zu\n", sizeof(student1.grade));
    printf("size of examAverage=%zu\n", sizeof(student1.examAverage));
    
    printf("ID: %d\n", student1.id);
    printf("Grade: %c\n", student1.grade);
    printf("Average: %.1f\n", student1.examAverage);

    printf("%zu\n", sizeof(student1));
    printf("%zu\n", sizeof(struct student));

    return 0;
}