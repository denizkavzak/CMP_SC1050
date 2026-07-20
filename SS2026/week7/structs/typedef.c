#include <stdio.h>

typedef struct time
{
    int hours;
    int minutes;
}Time;

struct date{
    char month[15];
    int day;
}date1, date2;

void printTime(Time time1)
{
    printf("%02d:%02d\n", time1.hours, time1.minutes);
}

int main(void)
{
    Time start = {9, 5};
    struct time end;

    printTime(start);

    return 0;
}