#include <stdio.h>

int get_uppercase_value_int(char c);
char get_uppercase_value_char(char c);

int main()
{
    char c = 'd';

    printf("Uppercase as int: %d\n", get_uppercase_value_int(c));
    printf("Uppercase as char: %c\n", get_uppercase_value_char(c));

    return 0;
}

int get_uppercase_value_int(char c){
    //printf("Before: %c=%d, After: %c=%d\n", c, c, (c - 32), (c - 32));
    return (c - 32);
}

char get_uppercase_value_char(char c){
    //printf("Before: %c=%d, After: %c=%d\n", c, c, (c - 32), (c - 32));
    return (c - 32);
}