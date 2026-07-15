#include <stdio.h>
/*
Exampel of passing array of strings to function
*/
// void printStrings(const char **strings, int size)
void printStrings(const char *strings[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d. %s\n", i + 1, strings[i]);
    }
}

int main(void)
{
    const char *menu[] = {
        "Open file",
        "Save file",
        "Print file",
        "Exit"
    };

    printStrings(menu, 4);

    return 0;
}