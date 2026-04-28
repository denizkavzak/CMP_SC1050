#include<stdio.h>

typedef struct student Student;

struct student{
    int ID;
    char *name;
    char *lastname;
    float gpa;
};

int main(){

    Student st1;
    
    st1.ID = 1;
    st1.name = "Deniz";
    st1.lastname = "Kavzak";
    st1.gpa = 3.5;

    Student *stPtr = &st1;

    printf("Student ID: %d\n", st1.ID);
    printf("Student name: %s\n", st1.name);
    printf("Student last name: %s\n", st1.lastname);
    printf("Student GPA: %.2f\n\n", st1.gpa);

    printf("Student ID: %d\n", stPtr->ID);
    printf("Student name: %s\n", stPtr->name);
    printf("Student last name: %s\n", stPtr->lastname);
    printf("Student GPA: %.2f\n\n", stPtr->gpa);

    printf("Student ID: %d\n", (*stPtr).ID);
    printf("Student name: %s\n", (*stPtr).name);
    printf("Student last name: %s\n", (*stPtr).lastname);
    printf("Student GPA: %.2f\n\n", (*stPtr).gpa);

    return 0;
}