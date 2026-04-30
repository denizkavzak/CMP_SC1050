#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

int main(void) {
    Student students[3] = {{"Maya", 90},
                           {"Liam", 82},
                           {"Nora", 95}};
    Student *top = &students[0];

    for (size_t i = 1; i < 3; i++) {
        // if (students[i].score > top.score) { // bug
        if (students[i].score > top->score) { // fix OR (*top).score
            top = &students[i];
        }
    }

    printf("%s: %d\n", top->name, top->score);
    return 0;
}