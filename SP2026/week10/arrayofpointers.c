#include<stdio.h>

void printName(const char *name);

int main(){

    // each element of array names is a char pointer
    const char *names[4] = {"Deniz", "Ekin", "Emma", "Britton"};

    for (int i = 0; i < 4; i++)
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
