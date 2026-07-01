#include <stdio.h>

int main()
{
    int numbers[5];
    int found = 0, target = 10;

    for (int i = 0; i < 5; i++)
    { 
        printf("Enter score %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == target)
        {
            found = 1;
            break;
        }
    }

    if(found == 1){
        printf("Target %d is found in the array\n!", target);
    }else{
        printf("Target %d is NOT found in the array\n!", target);
    }

    return 0;
}