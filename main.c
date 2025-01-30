#include <stdio.h>

double identify(char money);

int main(void) {
    char money, choice;
    int drink_choice;
    double balance;
    
    do {
        printf("Select your drink:\n");
        printf("1 - Cola ($1.50)\n");
        printf("2 - Lemonade ($1.25)\n");
        printf("3 - Water ($1.00)\n");
        printf("Enter your choice: ");
        scanf("%d", &drink_choice);
        
        switch (drink_choice) {
            case 1:
                balance = 1.50;
                break;
            case 2:
                balance = 1.25;
                break;
            case 3:
                balance = 1.00;
                break;
            default:
                printf("Invalid selection. Please try again.\n");
                continue;
        }
        
        printf("Starting a new transaction. Price: $%.2f\n", balance);
        
        while (balance > 0) {
            printf("Remaining balance is $%.2f\n", balance);
            printf("Insert cash ($, Q, D, N, P): ");
            scanf(" %c", &money);
            
            double inserted = identify(money);
            
            if (inserted == 0.0) {
                printf("Invalid input. Please insert valid cash.\n");
                continue;
            }
            
            if (balance - inserted < 0) {
                printf("Excess cash inserted. Transaction canceled.\n");
                continue;
            }
            
            balance -= inserted;
        }
        
        printf("Here is your drink! Change returned: $%.2lf\n", balance);
        
        printf("Would you like to make another purchase? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    
    printf("Thank you for using our vending machine!\n");
    return 0;
}

double identify(char money) {
    switch (money) {
        case '$': return 1.00;
        case 'Q': return 0.25;
        case 'D': return 0.10;
        case 'N': return 0.05;
        case 'P': return 0.01;
        default: return 0.00;
    }
}
