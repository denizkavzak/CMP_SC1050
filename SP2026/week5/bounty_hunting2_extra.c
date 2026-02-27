#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {

        if (i == 3) {
            continue; // causes infinite loop
        }

        printf("%d\n", i);
        i++;
    }

    return 0;
}

//FIX
// while (i < 5) {

//     if (i == 3) {
//         i++;
//         continue;
//     }

//     printf("%d\n", i);
//     i++;
// }