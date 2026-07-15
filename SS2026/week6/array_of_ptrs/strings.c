#include <stdio.h>
/*
Array of strings
Each element of days is a pointer 
to the first character of a string literal.
*/
int main(void)
{
    // string literals should not be modified
    const char *days[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday"
    };

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", days[i]);
    }

    return 0;
}