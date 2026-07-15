#include<stdio.h>
#include<ctype.h>

void makeUppercase(char text[])
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        text[i] = (char) toupper((unsigned char) text[i]);
    }
}

int main(){

    char c;
    printf("enter a character: ");
    scanf("%s ", &c);

    c = toupper(c);

    char str[] = "Hello world BYE bye";
    char * strlowercase = str;

    makeUppercase(strlowercase);

    int i = 0;
    int countEs = 0;
    while (str[i] != '\0')
    {
        if(str[i] == 'e' || str[i] == 'E'){
            countEs++;
        }
    }
    
    switch (c)
    {
    case 'A':
        break;
    case 'B':
        break;    

    default:
        break;
    }



    return 0;
}