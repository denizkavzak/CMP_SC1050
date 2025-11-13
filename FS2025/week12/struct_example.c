#include<stdio.h>
#include<string.h>

struct student{
    char *name;
    char *department;
    char class[10];
    double gpa;
}student5;

int main(){

    struct student s1 = {.gpa=3.5, .department="EECS", .name = "Deniz"};
    struct student s2 = {"Deniz Kavzak", "EECS", "junior", 3.5};
    struct student s3;
    s3.name = "Robin Ufuktepe";
    s3.department = "EECS";
    s3.gpa = 3.0;    
    strncpy(s3.class, "sophomore", 10);

    printf("s1: Name: %s, Dept: %s, Class: %s, GPA: %f\n", s1.name, s1.department, s1.class, s1.gpa);
    printf("s2: Name: %s, Dept: %s, Class: %s, GPA: %f\n", s2.name, s2.department, s2.class, s2.gpa);
    printf("s3: Name: %s, Dept: %s, Class: %s, GPA: %f\n", s3.name, s3.department, s3.class, s3.gpa);

    struct student * sPtr = &s1;
    sPtr->gpa = 4.0;
    sPtr->department = "Mathematics";
    strncpy(sPtr->class,"senior",6);
    sPtr->name = "Deniz";

    printf("sPtr: Name: %s, Dept: %s, Class: %s, GPA: %f\n", sPtr->name, sPtr->department, sPtr->class, sPtr->gpa);
    
    student5.department = "Math";

    printf("s5: Name: %s, Dept: %s, Class: %s, GPA: %f\n", student5.name, student5.department, student5.class, student5.gpa);

    struct student studentArr[5];
    struct student studentArr2[] = {s1, s2, s3, student5, *sPtr};

    studentArr[0] = s1;

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]: Name: %s, Dept: %s, Class: %s, GPA: %f\n", i, (*(studentArr2 + i)).name, (*(studentArr2 + i)).department, (*(studentArr2 + i)).class, (*(studentArr2 + i)).gpa);
    }
    
    return 0;
}