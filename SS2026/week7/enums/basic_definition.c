#include<stdio.h>

/*
set of named integer constants for days
by default, first member has value 0, rest are increments of 1
*/ 
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};


int main(){

    enum Day today = WEDNESDAY;

    if(today == WEDNESDAY){
        printf("Today is Wednesday! (%d)\n", WEDNESDAY);
    }

    return 0;
}