#include<stdio.h>
#include<string.h>

typedef struct student{
    int ID;
    char name[10];
    char *lastname;
    float gpa;
}Student;

int main(){

    Student st1; // struct student variable

    st1.ID = 1;
    //st1.name = "Deniz"; // this is not allowed when the member is 
    // an already defined array, we have to use strcpy to assign value to it
    strcpy(st1.name, "Deniz");
    st1.lastname = "Kavzak"; // This makes st1.lastname point to a string literal. 
    // You should not modify it. We cannot use strcpy for a char * member without
    // allocating memory

    st1.gpa = 3.5;
    
    printf("Student ID: %d\n", st1.ID);
    printf("Student name: %s\n", st1.name);
    printf("Student last name: %s\n", st1.lastname);
    printf("Student GPA: %.2f\n\n", st1.gpa);

    return 0;
}