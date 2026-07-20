#include<stdio.h>

struct Person
{
    char name[20];
    int age;
    double height;
};

int main(){

    struct Person person = {0};
    /*
    person.name[0] = '\0';  // the array contains an empty string
    person.age = 0;
    person.height = 0.0;
    */

    printf("%c\n",person.name[0]);
    printf("%d\n",person.name[0]);

    return 0;
}