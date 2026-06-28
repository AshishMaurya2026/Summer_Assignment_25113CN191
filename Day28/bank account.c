#include <stdio.h>

int main()
{
    char name[50];
    int accountNo;
    float balance, deposit, withdraw;

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\nFinal Balance = %.2f", balance);

    return 0;
}