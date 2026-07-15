#include <stdio.h>
#include <ctype.h>
/*
Count character types

This program demonstrates <ctype.h> functions 
and the importance of passing individual characters.
*/
int main(void)
{
    char text[] = "CS 1050: Summer 2026!";
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int punctuation = 0;

    // Why does the loop stop at '\0'?
    for (int i = 0; text[i] != '\0'; i++)
    {
        unsigned char ch = (unsigned char) text[i];
        // Would '\n' also be counted as whitespace?
        if (isalpha(ch))
            letters++;
        else if (isdigit(ch))
            digits++;
        else if (isspace(ch)) // Why is the space counted by isspace?
            spaces++;
        else if (ispunct(ch))
            punctuation++;
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Whitespace: %d\n", spaces);
    printf("Punctuation: %d\n", punctuation);

    return 0;
}