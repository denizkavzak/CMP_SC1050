#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char * str;
    int size;

    printf("Enter the size of string:\n");
    scanf("%d", &size);

    // str = malloc((size + 1) * sizeof(char)); // safer to add + 1 for '\0'
    str = malloc(size * sizeof(char));
    str = "Hello!";
    /*The second line does not copy "Hello!" into the allocated memory. 
    It makes str point to the string literal "Hello!", which means:
    The original malloc memory is leaked because you lost its address.
    free(str); is invalid because str no longer points to memory returned by malloc.
    */

    strcpy(str, "Hello!"); // copy text into the allocated memory
    //strcpy(str, "Hello Hello hello!"); // copy text into the allocated memory

    printf("%s\n", str);

    //free(str);

    printf("Freed memory successfully!\n");

    return 0;
}