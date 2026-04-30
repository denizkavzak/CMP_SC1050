#include <stdio.h>

typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
} Day;

int main(void) {
    Day today = WEDNESDAY;

    if (today == WEDNESDAY) {
        printf("It is the middle of the week.\n");
    }

    return 0;
}