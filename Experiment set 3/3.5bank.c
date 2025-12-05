#include <stdio.h>

void deposit(float *balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    *balance += amount;
    printf("Amount deposited successfully.\n");
}

void withdraw(float *balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > *balance) {
        printf("Insufficient balance!\n");
    } else {
        *balance -= amount;
        printf("Amount withdrawn successfully.\n");
    }
}

void checkBalance(float balance) {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    float balance = 0.0;
    int choice;

    do {
        printf("\n*** Banking System Menu ***\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                deposit(&balance);
                break;
            case 2:
                withdraw(&balance);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                printf("Exiting program. Thank you!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}

