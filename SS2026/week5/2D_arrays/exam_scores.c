#include <stdio.h>

#define STUDENTS 3
#define EXAMS 4

/*
each row represents one student
each column represents one exam
the program calculates a row average
*/
int main(void)
{
    int scores[STUDENTS][EXAMS] =
    {
        {85, 90, 78, 92},
        {70, 75, 80, 85},
        {95, 88, 91, 94}
    };

    for (int student = 0; student < STUDENTS; student++)
    {
        int total = 0;

        for (int exam = 0; exam < EXAMS; exam++)
        {
            total += scores[student][exam];
        }

        double average = (double) total / EXAMS;

        printf("Student %d average: %.2f\n",
               student + 1, average);
    }

    return 0;
}