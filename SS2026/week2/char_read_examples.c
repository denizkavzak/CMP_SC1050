#include <stdio.h>
/*
getchar can read letter, digit, space, \n, \t, etc
returns it as an int, not char
getchar() directly returns the character
*/
int main(void)
{
    int number;
    int ch;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter a character: ");
    ch = getchar(); // this reads the \n left in the input stream buffer

    if(ch == " " || ch == "\n")

    printf("\nCharacter code: %d\n", ch);

    return 0;
}