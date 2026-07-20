#include <stdio.h>

struct Student
{
    int id;
    char grade;
    double examAverage;
};

int main(void)
{
    struct Student student1 = {12345};

    printf("ID: %d\n", student1.id);
    printf("Grade as char: %c\n", student1.grade); // '\0'
    printf("Grade as int: %d\n", student1.grade); // 0
    printf("Average: %.1f\n", student1.examAverage); // 0.0

    return 0;
}