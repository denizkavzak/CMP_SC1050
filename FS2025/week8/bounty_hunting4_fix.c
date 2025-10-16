#include <stdio.h>

int main() {
    int scores[5] = {85, 90, 78, 92, 88};
    int reversed[5];
    
    // Copy array elements in reverse order
    for (int i = 0; i < 5; i++) {
        reversed[i] = scores[4 - i];
    }

    printf("Reversed scores: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}



