#include <stdio.h>

static int count = 0;      // static global variable

static void increment()   // static function
{
    count++;
    printf("Count = %d\n", count);
}

int main()
{
    increment();
    increment();
    increment();
}

