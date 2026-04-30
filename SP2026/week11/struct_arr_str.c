#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

void printAll(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s: %d\n", students[i].name, students[i].score);
    }
}

int findStudent(Student students[], int size, const char target[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, target) == 0) {
            return i;
        }
    }
    return -1;
}

void updateScore(Student students[], int size,
                 const char target[], int newScore) {
    int pos = findStudent(students, size, target);

    if (pos != -1) {
        students[pos].score = newScore;
    }
}

int main(void) {
    Student students[4] = {
        {"Maya", 90},
        {"Liam", 82},
        {"Nora", 95},
        {"Omar", 88}
    };

    updateScore(students, 4, "Liam", 89);
    printAll(students, 4);

    return 0;
}