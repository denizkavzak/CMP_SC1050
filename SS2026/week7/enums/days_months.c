#include<stdio.h>

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int isWeekend(enum Day day)
{
    return day == SATURDAY || day == SUNDAY;
}  

int main(){

    enum Day today = SATURDAY;

    if (isWeekend(today))
    {
        printf("It is the weekend.\n");
    }

    return 0;
}