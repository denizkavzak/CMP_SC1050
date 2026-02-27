#include <stdio.h>

int main() {
    int stop = 0; // flag to decide when to break

    for (int i = 0; i < 3 && !stop; i++) {

        for (int j = 0; j < 3; j++) {

            if (j == 1) {
                stop = 1;
                break;
            }

            printf("i=%d j=%d\n", i, j);
        }
    }
    return 0;
}

