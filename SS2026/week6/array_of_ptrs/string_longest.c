#include <stdio.h>
#include <string.h>
/*
This program finds the longest string
*/
int main(void)
{
    const char *cities[] = {
        "Columbia",
        "Chicago",
        "Springfield",
        "Denver"
    };

    int longestIndex = 0;

    for (int i = 1; i < 4; i++)
    {
        if (strlen(cities[i]) > strlen(cities[longestIndex]))
        {
            longestIndex = i;
        }
    }

    printf("Longest city name: %s\n", cities[longestIndex]);

    return 0;
}