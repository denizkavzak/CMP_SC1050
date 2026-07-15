#include <stdio.h>
#include <ctype.h>
/*
This program converts a string to uppercase
toupper returns the converted character. 
It does not automatically modify its argument.
*/
void makeUppercase(char text[])
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        text[i] = (char) toupper((unsigned char) text[i]);
    }
}

int main(void)
{
    char course[] = "Computer Science 1050";

    makeUppercase(course);
    printf("%s\n", course);

    return 0;
}