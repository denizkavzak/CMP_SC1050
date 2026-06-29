#include <stdio.h>

static int x = 10; // this is a static global variable. We cannot access it from anywhere else

void show()
{
    printf("%d\n", x);
}