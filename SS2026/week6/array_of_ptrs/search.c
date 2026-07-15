#include <stdio.h>
#include <string.h>
/*
This program searches for a string
strcmp example
if (strings[i] == target)          // compares addresses
if (strcmp(strings[i], target) == 0) // compares string contents
*/
int findString(const char *strings[], int size, const char *target)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(strings[i], target) == 0)
        {
            return i;
        }
    }

    return -1;
}

int main(void)
{
    const char *courses[] = {
        "CS1050",
        "CS2050",
        "CS2250",
        "CS3050"
    };

    int index = findString(courses, 4, "CS2250");

    if (index != -1)
    {
        printf("Course found at index %d\n", index);
    }
    else
    {
        printf("Course not found\n");
    }

    return 0;
}