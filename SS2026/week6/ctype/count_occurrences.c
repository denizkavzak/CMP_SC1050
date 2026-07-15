#include <stdio.h>
/*
This program counts occurrences of a character
*/
int countCharacter(const char text[], char target)
{
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == target)
            count++;
    }

    return count;
}

int main(void)
{
    char message[] = "Mississippi";

    printf("Number of s characters: %d\n",
           countCharacter(message, 's'));

    return 0;
}