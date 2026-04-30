#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

void printStudent(Student s) {
    printf("%s: %d\n", s.name, s.score);
}

void printAll(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printStudent(students[i]);
    }
}

int main(void) {
    Student students[3] = {
        {"Maya", 90},
        {"Liam", 82},
        {"Nora", 95}
    };

    printAll(students, 3);

    return 0;
}