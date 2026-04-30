#include <stdio.h>

typedef enum {
    FRESHMAN,
    SOPHOMORE,
    JUNIOR,
    SENIOR
} ClassLevel;

int main(void) {
    ClassLevel level = JUNIOR;

    switch (level) {
        case FRESHMAN:
            printf("First year student\n");
            break;
        case SOPHOMORE:
            printf("Second year student\n");
            break;
        case JUNIOR:
            printf("Third year student\n");
            break;
        case SENIOR:
            printf("Fourth year student\n");
            break;
    }

    return 0;
}