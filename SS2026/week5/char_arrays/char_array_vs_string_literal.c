#include <stdio.h>
#include<string.h>

int main(void)
{
    char word[] = "cat";

    word[0] = 'b';

    printf("%s\n", word);

    char word1[] = "hello"; // it is a modifiable array
    const char *word2 = "hello"; // this is a string literal, shouldn't be modified
    // word2[0] = 'H'; // undefined behavior

    char *word3 = "hello";

    //strcpy(word3, "hi"); // undefined behavior

    return 0;
}