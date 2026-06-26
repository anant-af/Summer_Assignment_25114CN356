// WAP to create ATM simulation

#include <stdio.h>

int main() {
    int pin = 1234;
    int userPin;
    int choice;
    unsigned long amount = 1000;
    unsigned long withdraw, deposit;
    int transaction = 'y';

    // PIN Verification
    printf("Enter PIN: ");
    scanf("%d", &userPin);

    if (userPin == pin) {
        while (transaction == 'y' || transaction == 'Y') {
            printf("\n--- ATM Menu ---\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw Cash\n");
            printf("3. Deposit Cash\n");
            printf("4. Quit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Your Balance: Rs %lu\n", amount);
                    break;

                case 2:
                    printf("Enter amount to withdraw: ");
                    scanf("%lu", &withdraw);
                    if (withdraw % 100 != 0) {
                        printf("Amount must be in multiples of 100.\n");
                    } else if (withdraw > (amount - 500)) {
                        printf("Insufficient Balance.\n");
                    } else {
                        amount = amount - withdraw;
                        printf("Please collect your cash.\n");
                        printf("Current Balance: Rs %lu\n", amount);
                    }
                    break;

                case 3:
                    printf("Enter amount to deposit: ");
                    scanf("%lu", &deposit);
                    amount = amount + deposit;
                    printf("Current Balance: Rs %lu\n", amount);
                    break;

                case 4:
                    printf("Thank you for using our ATM.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }

            if (choice != 4) {
                printf("Do you want to make another transaction? (y/n): ");
                scanf(" %c", &transaction);
            }
        }
    } else {
        printf("Invalid PIN.\n");
    }

    return 0;
}   