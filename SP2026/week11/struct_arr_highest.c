#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

Student findTopStudent(Student students[], int size) {
    Student top = students[0];

    for (int i = 1; i < size; i++) {
        if (students[i].score > top.score) {
            top = students[i];
        }
    }

    return top;
}

int main(void) {
    Student students[4] = {
        {"Maya", 90},
        {"Liam", 82},
        {"Nora", 95},
        {"Omar", 88}
    };

    Student top = findTopStudent(students, 4);

    printf("Top student: %s with %d\n", top.name, top.score);

    return 0;
}