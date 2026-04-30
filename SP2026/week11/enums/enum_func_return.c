#include <stdio.h>

typedef enum {
    FAIL,
    PASS,
    EXCELLENT
} Result;

Result getResult(int score) {
    if (score < 60) {
        return FAIL;
    } else if (score < 90) {
        return PASS;
    } else {
        return EXCELLENT;
    }
}

int main(void) {
    int score = 94;
    Result r = getResult(score);

    if (r == EXCELLENT) {
        printf("Great job!\n");
    } else if (r == PASS) {
        printf("You passed.\n");
    } else {
        printf("Try again.\n");
    }

    return 0;
}