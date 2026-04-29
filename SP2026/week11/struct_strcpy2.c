#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int score;
} Student;

int main(void)
{
    Student s1 = {"Maya", 90};
    Student s2;

    s2 = s1;

    strcpy(s2.name, "Liam");
    s2.score = 85;

    printf("%s: %d\n", s1.name, s1.score);
    printf("%s: %d\n", s2.name, s2.score);

    return 0;
}