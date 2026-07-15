#include <stdio.h>
/*
array of void* example
data[0]             // a void pointer
(int *)data[0]      // convert it to an int pointer
*(int *)data[0]     // dereference the int pointer
Parentheses are important! *(int *)data[0]
*/
int main(void)
{
    int age = 25;
    double temperature = 72.5;
    char grade = 'A';

    void *data[3];

    data[0] = &age;
    data[1] = &temperature; 
    data[2] = &grade;

    printf("Age: %d\n", *(int *)data[0]);
    printf("Temperature: %.1f\n", *(double *)data[1]);
    printf("Grade: %c\n", *(char *)data[2]);

    return 0;
}