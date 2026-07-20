#include <stdio.h>

struct Student
{
    int id;
    double gpa;
    char grade;
    int *scores;
};

int main(void)
{
    struct Student student1 = {12345, 3.75};

    struct Student student2 = {0}; // init everything to 0

    printf("ID: %d\n", student1.id);
    printf("GPA: %f\n", student1.gpa); // 0.0
    printf("Grade as char: %c\n", student1.grade); // '\0'
    printf("Grade as int: %d\n", student1.grade); // 0
    printf("Scores: %p\n", student1.scores); // NULL

    return 0;
}