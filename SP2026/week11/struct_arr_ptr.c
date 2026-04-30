#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

void updateStudent(Student *s, const char name[], int score) {
    strcpy(s->name, name);
    s->score = score; // (*s).score
}

int main(void) {
    Student s = {"Maya", 90};

    updateStudent(&s, "Liam", 85);

    printf("%s: %d\n", s.name, s.score);

    return 0;
}