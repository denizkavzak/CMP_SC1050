#include<stdio.h>

struct student{
    int ID;
    char *name;
    char *lastname;
    float gpa;
};

int main(){

    struct student st1;

    st1.ID = 1;
    st1.name = "Deniz";
    st1.lastname = "Kavzak";
    st1.gpa = 3.5;

    printf("Student ID: %d\n", st1.ID);
    printf("Student name: %s\n", st1.name);
    printf("Student last name: %s\n", st1.lastname);
    printf("Student GPA: %.2f\n", st1.gpa);

    return 0;
}