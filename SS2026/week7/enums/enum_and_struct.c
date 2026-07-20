#include <stdio.h>

enum AccountType
{
    CHECKING,
    SAVINGS,
    CREDIT
};

struct Account
{
    int accountNumber;
    double balance;
    enum AccountType type;
};

void printAccountType(enum AccountType type)
{
    switch (type)
    {
        case CHECKING:
            printf("Checking");
            break;

        case SAVINGS:
            printf("Savings");
            break;

        case CREDIT:
            printf("Credit");
            break;
    }
}

int main(void)
{
    struct Account account = {
        12345,
        1500.75,
        SAVINGS
    };

    printf("Account: %d\n", account.accountNumber);
    printf("Type: ");
    printAccountType(account.type);
    printf("\nBalance: $%.2f\n", account.balance);

    return 0;
}