#include<stdio.h>

#define STUDENTS 2
#define GRADES 3

int main(){

    int gradebook[STUDENTS][GRADES];
    int grade;

    for (int i = 0; i < STUDENTS; i++)
    {
        //printf("Enter grades for the student number %d: \n", i);
        for (int j = 0; j < GRADES; j++)
        {
            printf("Enter grade %d for the student number %d: \n", j, i);
            scanf("%d", &grade);
            gradebook[i][j] = grade;
        }
    }
    
    printf("\n");
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Printing grades for the student number %d: \n", i);
        for (int j = 0; j < GRADES; j++)
        {
            printf("%d ", gradebook[i][j]);
        }
        printf("\n");
    }

    return 0;
}