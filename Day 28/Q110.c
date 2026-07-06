#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    float deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Name: ");
    scanf("%s", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    a.balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= a.balance)
        a.balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("Final Balance = %.2f\n", a.balance);

    return 0;
}