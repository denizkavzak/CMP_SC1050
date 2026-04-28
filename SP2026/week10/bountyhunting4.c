#include <stdio.h>

void setToHundred(int *x) {
    *x = 100; // fix
}

int main() {
    int value = 25;

    setToHundred(&value);

    printf("Value: %d\n", value);

    return 0;
}

