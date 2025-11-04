#include <stdio.h>

int main() {
    int choice, transactionCount = 0;
    float balance = 10000.0, amount;

    printf("========= Mini ATM Simulator =========\n");
    printf("Initial Balance: ₹%.2f\n\n", balance);
    
    while (transactionCount < 5) {
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Your Current Balance: ₹%.2f\n\n", balance);
            transactionCount++;
        } 
        else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Amount Deposited Successfully!\n\n");
                transactionCount++;
            } else {
                printf("Invalid deposit amount!\n\n");
            }
        } 
        else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid withdrawal amount!\n\n");
            } 
            else if (amount > balance - 500) {
                printf("Insufficient balance or minimum ₹500 should remain!\n\n");
            } 
            else {
                balance -= amount;
                printf("Withdrawal Successful! Remaining Balance: ₹%.2f\n\n", balance);
                transactionCount++;
            }
        } 
        else if (choice == 4) {
            printf("Thank you for banking with us!\n");
            break;
        } 
        else {
            printf("Invalid choice! Please try again.\n\n");
        }

       
        if (transactionCount == 5) {
            printf("Transaction limit (5) reached.\n");
            break;
        }
    }

    printf("========= Transaction Summary =========\n");
    printf("Total Transactions: %d\n", transactionCount);
    printf("Final Balance: ₹%.2f\n", balance);
    printf("Session Ended.\n");

    return 0;
}
