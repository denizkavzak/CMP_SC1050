#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    struct person * partner;
};

int main(){

    struct person person1;
    struct person person2;

    strcpy(person1.name, "Deniz");
    strcpy(person2.name, "Ekin");

    person1.partner = &person2;
    person2.partner = &person1;

}