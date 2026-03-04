#include <stdio.h>

static int count = 0;      // static global variable, can only be used in this file
//int count = 0;      // standard global variable: can be used from other files using extern keyword

static void increment()   // static function, hidden from other files
{
    count++;
}

int main()
{
    printf("Count = %d\n", count);
    increment();
    printf("Count = %d\n", count);
    increment();
    printf("Count = %d\n", count);
    increment();
    printf("Count = %d\n", count);
}

