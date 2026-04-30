#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct {
    char name[20];
    int score;
} Student;

void addStudent(Student students[], int *size,
                const char name[], int score, int capacity) {
    if(*size >= capacity){
        printf("Array capacity full!\n");
        return;
    }                
    int currentSize = *size;
    strcpy(students[currentSize].name, name);
    students[currentSize].score = score;
    (*size)++;
}

void removeLastStudent(Student students[], int *size) {
    
    if(*size == 0){
        printf("There are no students in the array!\n");
        return;
    }
    int currentSize = *size;
    strcpy(students[currentSize].name, "");
    students[currentSize].score = 0;
    *size = (*size) - 1;
}

void printAll(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s: %d\n", students[i].name, students[i].score);
    }
}

int main(void) {
    Student students[SIZE] = {
        {"Maya", 90},
        {"Liam", 82}
    };

    int size = 2;

    addStudent(students, &size, "Nora", 95, SIZE);
    addStudent(students, &size, "Omar", 88, SIZE);

    printAll(students, size);

    removeLastStudent(students, &size);

    printAll(students, size);

    return 0;
}