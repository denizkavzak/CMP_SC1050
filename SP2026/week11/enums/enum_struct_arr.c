#include <stdio.h>

typedef enum {
    FRESHMAN,
    SOPHOMORE,
    JUNIOR,
    SENIOR
} ClassLevel;

typedef struct {
    char name[20];
    int score;
    ClassLevel level;
} Student;

void printLevel(ClassLevel level) {
    switch (level) {
        case FRESHMAN:
            printf("Freshman");
            break;
        case SOPHOMORE:
            printf("Sophomore");
            break;
        case JUNIOR:
            printf("Junior");
            break;
        case SENIOR:
            printf("Senior");
            break;
    }
}

int main(void) {
    Student students[3] = {
        {"Maya", 90, JUNIOR},
        {"Liam", 82, FRESHMAN},
        {"Nora", 95, SENIOR}
    };

    for (int i = 0; i < 3; i++) {
        printf("%s: %d, ", students[i].name, students[i].score);
        printLevel(students[i].level);
        printf("\n");
    }

    return 0;
}