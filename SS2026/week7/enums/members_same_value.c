#include<stdio.h>

enum Status
{
    SUCCESS = 0,
    WARNING = 1,
    RETRY_NEEDED = 1,
    FAILURE = 2
};

int main(){

    enum Status status = WARNING;

    printf("%d\n", status == WARNING);       // 1, true
    printf("%d\n", status == RETRY_NEEDED);  // 1, true
}