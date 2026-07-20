#include <stdio.h>

struct Date
{
    int month;
    int day;
    int year;
};

struct Event
{
    char name[40];
    struct Date date;
};

int main(void)
{
    struct Event exam = {
        "Final Exam",
        {7, 30, 2026}
    };

    printf("%s: %02d/%02d/%d\n",
           exam.name,
           exam.date.month,
           exam.date.day,
           exam.date.year);

    return 0;
}