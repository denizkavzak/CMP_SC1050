#include <stdio.h>

void counter();

int main()
{
    counter();
    counter();
    counter();
    
    return 0;
}

void counter()
{
    static int x = 0;
    x++;
    printf("%d\n", x);
}
