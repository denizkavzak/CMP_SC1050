#include <stdio.h>

int main(void)
{
    float num1, num2;
    char operation;

    printf("Enter an expression such as 10 + 5: ");
    scanf("%f %c %f", &num1, &operation, &num2);

    switch (operation)
    {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
            {
                printf("Result: %.2f\n", num1 / num2);
            }
            else
            {
                printf("Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Unsupported operation.\n");
    }

    return 0;
}