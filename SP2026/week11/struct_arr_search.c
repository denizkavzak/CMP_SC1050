#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

int findStudent(Student students[], int size, const char target[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, target) == 0) {
            return i;
        }
    }

    return -1;
}

int main(void) {
    Student students[4] = {
        {"Maya", 90},
        {"Liam", 82},
        {"Nora", 95},
        {"Omar", 88}
    };

    int pos = findStudent(students, 4, "Nora");

    if (pos != -1) {
        printf("Found %s with score %d\n",
               students[pos].name,
               students[pos].score);
    } else {
        printf("Student not found\n");
    }

    return 0;
}