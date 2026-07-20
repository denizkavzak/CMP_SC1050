#include <stdio.h>

struct BankAccount
{
    int accountNumber;
    double balance;
};

void deposit(struct BankAccount *account, double amount)
{
    account->balance += amount;
    // (*account).balance += amount; // same thing
}

int main(void)
{
    struct BankAccount account = {1234, 500.00};

    deposit(&account, 75.50);

    printf("Balance: $%.2f\n", account.balance);

    return 0;
}