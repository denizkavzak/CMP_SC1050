#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

void renameStudent(Student students[], int index, const char newName[], int size) {
    if(index < 0 || index >= size ){
        printf("Given index is invalid!\n");
        return;
    }
    strcpy(students[index].name, newName);
}

int main(void) {
    Student students[3] = {
        {"Maya", 90},
        {"Liam", 82},
        {"Nora", 95}
    };

    renameStudent(students, 1, "Eli", 3);

    printf("%s: %d\n", students[1].name, students[1].score);

    return 0;
}