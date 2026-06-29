#include <stdio.h>

void increase();
int getCount();

int main()
{
    increase();
    increase();

    printf("Count = %d\n", getCount());

    return 0;
}