#include<stdio.h>

void doubleFirst(int *arr) {
    *arr = *arr * 2;

    // *(arr+0) = *(arr+0) * 2;
    // arr[0] = arr[0] * 2; 
}

int main() {
    int numbers[3] = {5, 10, 15};

    doubleFirst(numbers); // fix

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);

    return 0;
}

