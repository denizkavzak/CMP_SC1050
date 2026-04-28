#include<stdio.h>

// indexes start from 0 by default, incremented by 1 for each enum member
enum months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

// // indexes start from 1, incremented by 1 for each enum member
// enum months2 {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

// // indexes start from 1 until JUN, JUN gets index 1 again, rest will be incremented by 1
// enum months3 {JAN = 1, FEB, MAR, APR, MAY, JUN = 1, JUL, AUG, SEP, OCT, NOV, DEC};

int main(){

    enum months month;

    const char* month_names[] = {"January", "February", "March", "April", "May", "June", 
    "July", "August", "September", "October", "November", "December"};

    for (month = JAN; month < DEC; month++)
    {
        printf("%s ", month_names[month]);
    }

    printf("\n");

    return 0;
}