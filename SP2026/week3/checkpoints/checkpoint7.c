#include <stdio.h>

int main(void)
{
    int temperature;

    /* Ask the user for the temperature */
    printf("Enter the temperature in degrees: ");
    scanf("%d", &temperature);

    /* Check if water is boiling using an if statement */
    if (temperature >= 100) {
        printf("Water is boiling\n");
        printf("Temperature: %d: %s\n", temperature, "Water is boiling");
    } else {
        printf("Water is not boiling\n");
        printf("Temperature: %d: %s\n", temperature, "Water is not boiling");
    }

    /* Print the result using the conditional operator */
    printf("%s\n", temperature >= 100 ? "Water is boiling" : "Water is not boiling");

    /* Print the result again using the conditional operator */
    temperature < 100 ? printf("Temperature: %d: %s\n", temperature, "Water is not boiling") : 
    printf("Temperature: %d: %s\n", temperature, "Water is boiling");

    return 0;
}


