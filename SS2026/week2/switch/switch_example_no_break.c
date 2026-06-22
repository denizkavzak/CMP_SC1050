#include <stdio.h>

int main(void)
{
    char grade;

    printf("Enter a letter grade: ");
    scanf(" %c", &grade); //The leading space consumes leftover whitespace such as a newline.

    switch (grade)
    {
        case 'A':
        case 'B':
        case 'C':
            printf("Passing grade\n");
            break;

        case 'D':
        case 'F':
            printf("Needs improvement\n");
            break;

        default:
            printf("Invalid grade\n");
    }

    return 0;
}