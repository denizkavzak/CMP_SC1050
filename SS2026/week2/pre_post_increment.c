#include <stdio.h>

int main() {
    int recordNumber = 1;
    int score;

    while (recordNumber <= 3) {
        printf("Enter score for student #%d: ", recordNumber++);
        scanf("%d", &score);
    }

    return 0;
}

