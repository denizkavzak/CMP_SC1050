#include<stdio.h>

#define SIZE 6

void printCharArray(char stringArray[], int size);
void printCharArray0(char stringArray[]);

int main(){

    char string1[] = "Hello";
    char string2[] = {'H','e','l','l','o','\0'};

    printCharArray(string1, SIZE);
    printCharArray0(string1);
    printCharArray(string2, SIZE);
    printCharArray0(string2);

    char string3[SIZE];
    printf("Enter string3: \n");
    scanf("%s", string3); // will read until WHITESPACE, rest will be in buffer

    printf("String3 is: %s\n", string3);
    printCharArray(string3, SIZE);
    printCharArray0(string3);

    // what happens if we try to enter more than SIZE?
    char string4[SIZE];
    printf("Enter string4: \n");
    //scanf("%s",string4);
    scanf("%5s",string4);
    printf("String4 is: %s\n", string4);
    printCharArray(string4, SIZE);
    printCharArray0(string4);

}

void printCharArray(char stringArray[], int size)
{
    printf("Printing with size: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%c ", stringArray[i]);
    }
    printf("\n");
}

void printCharArray0(char stringArray[])
{
    printf("Printing with \\0: \n");
    for (int i = 0; stringArray[i] != '\0'; i++)
    {
        printf("%c ", stringArray[i]);
    }
    printf("\n");
}