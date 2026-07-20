#include<stdio.h>s

enum FileResult
{
    FILE_SUCCESS,
    FILE_NOT_FOUND,
    FILE_PERMISSION_DENIED,
    FILE_INVALID_FORMAT
};

enum FileResult validateFile(int fileExists, int hasPermission);

int main(){
    
    enum FileResult result = validateFile(1, 0);

    if (result == FILE_PERMISSION_DENIED)
    {
    printf("You do not have permission to access the file.\n");
    }

    return 0;
}

enum FileResult validateFile(int fileExists, int hasPermission)
{
    if (!fileExists)
    {
        return FILE_NOT_FOUND;
    }

    if (!hasPermission)
    {
        return FILE_PERMISSION_DENIED;
    }

    return FILE_SUCCESS;
}