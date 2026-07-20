#include <stdio.h>

enum HttpStatus
{
    HTTP_OK = 200,
    HTTP_NOT_FOUND = 404,
    HTTP_SERVER_ERROR = 500
};

int main(void)
{
    enum HttpStatus status = HTTP_NOT_FOUND;

    if (status == HTTP_NOT_FOUND)
    {
        printf("The requested resource was not found.\n");
    }

    printf("Status code: %d\n", status);

    return 0;
}