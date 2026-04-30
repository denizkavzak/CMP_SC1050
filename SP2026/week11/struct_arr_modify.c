#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

void addBonus(Student students[], int size, int bonus) {
    for (int i = 0; i < size; i++) {
        students[i].score += bonus;
    }
}

void printAll(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s: %d\n", students[i].name, students[i].score);
    }
}

int main(void) {
    Student students[3] = {
        {"Maya", 90},
        {"Liam", 82},
        {"Nora", 95}
    };

    addBonus(students, 3, 5);
    printAll(students, 3);

    return 0;
}