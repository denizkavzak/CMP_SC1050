#include <stdio.h>

int main()
{
    int score;
    int count = 0;

    do
    {
        printf("Enter score (-1 to stop): ");
        scanf("%d", &score);
        if(score != -1){
            count++;
        }
    }
    while(score != -1);

    printf("Scores entered: %d\n", count);

    return 0;
}

