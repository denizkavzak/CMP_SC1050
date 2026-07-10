#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    /* fgets() usually keeps the newline character 
    \n at the end if there is space in the array.
    We can remove it: */
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("You entered: %s\n", sentence);

    return 0;
}