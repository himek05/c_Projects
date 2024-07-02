#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int accountNumber;
    char name[50];
    float balance;
} Account;

void createAccount(Account accounts[], int *count) {
    printf("Enter account number: ");
    scanf("%d", &accounts[*count].accountNumber);
    printf("Enter account holder's name: ");
    getchar();
    fgets(accounts[*count].name, sizeof(accounts[*count].name), stdin);
    accounts[*count].name[strcspn(accounts[*count].name, "\n")] = '\0';
    accounts[*count].balance = 0.0;
    (*count)++;
    printf("Account created successfully!\n");
}

void deposit(Account accounts[], int count) {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Amount deposited successfully!\n");
            return;
        }
    }
    printf("Account not found!\n");
}

void withdraw(Account accounts[], int count) {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully!\n");
            } else {
                printf("Insufficient balance!\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}

void checkBalance(Account accounts[], int count) {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Account Holder: %s\n", accounts[i].name);
            printf("Account Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

int main() {
    Account accounts[100];
    int count = 0;
    int choice;
    
    do {
        printf("\nBanking System\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                deposit(accounts, count);
                break;
            case 3:
                withdraw(accounts, count);
                break;
            case 4:
                checkBalance(accounts, count);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}
