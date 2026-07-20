#include<stdio.h>

typedef enum
{
    PENDING,
    IN_PROGRESS,
    COMPLETED
} TaskStatus;

typedef struct
{
    char description[50];
    TaskStatus status;
} Task;

int main(){

    Task task = {
    "Grade lab assignments",
    IN_PROGRESS
    };

    return 0;
}