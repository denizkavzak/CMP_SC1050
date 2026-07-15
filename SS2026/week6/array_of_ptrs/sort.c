#include <stdio.h>
#include <string.h>
/*
This program sorts strings by rearranging pointers
*/
void sortStrings(const char *strings[], int size)
{
    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int i = 0; i < size - 1 - pass; i++)
        {
            if (strcmp(strings[i], strings[i + 1]) > 0)
            {
                const char *temp = strings[i];
                strings[i] = strings[i + 1];
                strings[i + 1] = temp;
            }
        }
    }
}

int main(void)
{
    const char *animals[] = {
        "zebra",
        "cat",
        "elephant",
        "dog"
    };

    sortStrings(animals, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", animals[i]);
    }

    return 0;
}