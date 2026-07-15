#include<stdio.h>

int main(){

    char str1[] = "hello"; // MODIFIABLE
    char *str2 = "goodbye"; // NOT MODIFIABLE

    int i = 0;
    while (str2[i] != '\0')
    {
        printf("%c ", str2[i]);
        i++;
    }
    printf("\n");

    i = 0;
    while (*(str2+i) != '\0')
    {
        printf("%c ", *(str2+i));
        i++;
    }
    printf("\n");


    return 0;
}