#include <stdio.h>

// static variable = created once, reused again
// static function = hidden and can be used only in the same file

void counter();

int main()
{
    counter();
    counter();
    counter();
}

void counter()
{
    static int x = 0;   // static local variable
    x++;
    printf("%d\n", x);
}