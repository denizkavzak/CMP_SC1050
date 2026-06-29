#include <stdio.h>

static void greet() // a static function will be hidden from other files
{
    printf("Hello\n");
}

int main()
{
    greet();
    return 0;
}