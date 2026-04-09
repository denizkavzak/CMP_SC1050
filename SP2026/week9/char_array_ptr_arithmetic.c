#include<stdio.h>
#include<ctype.h>

//void convertToUpperCaseArr(char arr[]);
void convertToUpperCase(char *sPtr);
void printCharacters(const char *sPtr);
void printCharactersFor(const char *sPtr);

int main(){

    char string[] = "This is a string to be processed";

    printf("The string before conversion is: %s\n", string);
    printCharacters(string);
    printCharactersFor(string);
    convertToUpperCase(string);
    printf("The string after conversion is: %s\n", string);
    printCharacters(string);
    printCharactersFor(string);

    return 0;
}

void convertToUpperCase(char *sPtr)
{
    while (*sPtr!= '\0') // sPtr[i] sPtr[0]
    {
        if(islower(*sPtr)){
            *sPtr = toupper(*sPtr);
        }
        sPtr++; // sPtr = sPtr + 1 // *(a + i)
    }
}

void printCharacters(const char *sPtr)
{
    while (*sPtr!= '\0')
    {
        printf("%c", *sPtr);
        sPtr++;
    }
    printf("\n");

}

void printCharactersFor(const char *sPtr)
{
    for (; *sPtr!= '\0'; sPtr++)
    {
        printf("%c", *sPtr);
    }
    printf("\n");
}
