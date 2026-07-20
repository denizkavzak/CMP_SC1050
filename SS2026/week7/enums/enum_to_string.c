#include <stdio.h>

enum Priority
{
    LOW,
    MEDIUM,
    HIGH
};

const char *priorityToString(enum Priority priority)
{
    switch (priority)
    {
        case LOW:
            return "Low";

        case MEDIUM:
            return "Medium";

        case HIGH:
            return "High";

        default:
            return "Unknown";
    }
}

int main(void)
{
    enum Priority taskPriority = HIGH;

    printf("Priority: %s\n",
           priorityToString(taskPriority));


    const char *priorityNames[] = {"Low","Medium","High"};

    printf("%s\n", priorityNames[taskPriority]);

    if (taskPriority >= LOW && taskPriority <= HIGH)
    {
        printf("%s\n", priorityNames[taskPriority]);
    }

    return 0;
}