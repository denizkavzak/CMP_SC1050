#include <stdio.h>

#define SIZE 4

struct Student
{
    int id;
    char name[30];
    double examScore;
};

int main(void)
{
    struct Student students[SIZE] = {
        {101, "Ava", 85.5},
        {102, "Noah", 92.0},
        {103, "Mia", 78.5},
        {104, "Leo", 88.0}
    };

    int highestIndex = 0;

    for (int i = 1; i < SIZE; i++)
    {
        if (students[i].examScore >
            students[highestIndex].examScore)
        {
            highestIndex = i;
        }
    }

    printf("Highest score: %s with %.1f\n",
           students[highestIndex].name,
           students[highestIndex].examScore);

    return 0;
}