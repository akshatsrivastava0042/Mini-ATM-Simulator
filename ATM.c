#include <stdio.h>
int main() {
    int pin = 1234, enterPin;
    int i, choice;
    int balance = 1000, amount;
    for(i = 1; i <= 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &enterPin);
        if(enterPin == pin) {
            printf("Login Successful\n");
            break;
        } else {
            printf("Wrong PIN\n");
        }
    }
    if(i == 4) {
        printf("Too many attempts. Exit\n");
        return 0;
    }
    do {
        printf("\n1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Balance = %d\n", balance);
        }
        else if(choice == 2) {
            printf("Enter amount: ");
            scanf("%d", &amount);
            balance = balance - amount;
            printf("New Balance = %d\n", balance);
        }
    } while(choice != 3);
    return 0;
}