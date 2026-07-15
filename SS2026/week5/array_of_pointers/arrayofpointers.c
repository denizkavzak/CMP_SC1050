#include<stdio.h>

void printName(const char *name);

int main(){

    // each element of array names is a char pointer
    char *names[] = {"Deniz", "Ekin", "Emma", "Britton"};

    int size = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < size; i++)
    {
        printName(names[i]);
    }

    return 0;
}

void printName(const char *name)
{
    while(*name!='\0'){
        printf("%c", *name);
        name++;
    }    
    printf("\n");
}
