#include"grades.h"

float average(int studentGrades[], int grades)
{
    float sum = 0;
    for (int i = 0; i < grades; i++)
    {
        sum += (float)studentGrades[i];
    }
    return sum/grades;
}

int max(int studentGrades[], int grades)
{
    int max = studentGrades[0];
    for (int i = 1; i < grades; i++)
    {
        if(studentGrades[i] > max){
            max = studentGrades[i];
        }
    }
    return max;
}

int min(int studentGrades[], int grades)
{
    int min = studentGrades[0];
    for (int i = 1; i < grades; i++)
    {
        if(studentGrades[i] < min){
            min = studentGrades[i];
        }
    }
    return min;
}

int changeGrade(int gradebook[][GRADES], int studentID, int examID, int newGrade)
{
    gradebook[studentID][examID] = newGrade;
    return 1;
}

int printGradeBook(int gradebook[][GRADES], int students, int grades)
{
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < grades; j++)
        {
            printf("%d ", gradebook[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
