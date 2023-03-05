#include <stdio.h>

int main() {
    int action, amount, balance = 5000;
    printf("Welcome to ATM!\n");
    printf("Please choose a transaction:\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw\n");
    printf("3. Deposit\n");
    printf("4. Quit\n");
    printf("Enter action(1-4):");
    scanf("%d", &action);

    switch(action) {
        case 1:
            printf("Your balance is: %d\n", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if(amount > balance) {
                printf("Insufficient balance!\n");
            }
            else {
                balance -= amount;
                printf("Amount withdrawn: %d\n", amount);
                printf("Remaining balance: %d\n", balance);
            }
            break;
        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance += amount;
            printf("Amount deposited: %d\n", amount);
            printf("Updated balance: %d\n", balance);
            break;
        case 4:
            printf("Thank you for using our ATM!\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}