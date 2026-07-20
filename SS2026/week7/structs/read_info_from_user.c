#include <stdio.h>

struct Course
{
    char code[10];
    int enrollment;
    double average;
};

int main(void)
{
    struct Course course;

    printf("Enter course code: ");
    scanf("%9s", course.code); // array name is already an address

    printf("Enter enrollment: ");
    scanf("%d", &course.enrollment); // use & for an int member

    printf("Enter class average: ");
    scanf("%lf", &course.average);

    printf("\n%s has %d students.\n",
           course.code, course.enrollment);

    printf("Class average: %.1f\n", course.average);

    return 0;
}