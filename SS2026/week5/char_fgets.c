#include <stdio.h>

int main(void) {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    /*
    We can use scanf(" %[^\n]", sentence);
    but fgets is usually safer
    */ 

    printf("You entered: %s", sentence);

    return 0;
}