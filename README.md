# Vending Machine Program

This program simulates a vending machine that allows users to purchase drinks by inserting cash. It ensures valid transactions and provides change when necessary.

- **Drink Selection**: Users can choose from Cola, Lemonade, or Water.
- **Payment Handling**: Accepts bills and coins, including dollars, quarters, dimes, nickels, and pennies.
- **Transaction Validation**: Ensures sufficient funds and prevents overpayment.
- **Change Calculation**: Returns change if necessary after the transaction.
- **User Interaction**: Allows multiple transactions until the user chooses to exit.

## Example Usage
```
Select your drink:
1 - Cola ($1.50)
2 - Lemonade ($1.25)
3 - Water ($1.00)
Enter your choice: 2

Starting a new transaction. Price: $1.25
Remaining balance is $1.25
Insert cash ($, Q, D, N, P): Q
Remaining balance is $1.00
Insert cash ($, Q, D, N, P): $

Here is your drink! Change returned: $0.00

Would you like to make another purchase? (Y/N): Y

Select your drink:
1 - Cola ($1.50)
2 - Lemonade ($1.25)
3 - Water ($1.00)
Enter your choice: 3

Starting a new transaction. Price: $1.00
Remaining balance is $1.00
Insert cash ($, Q, D, N, P): D
Remaining balance is $0.90
Insert cash ($, Q, D, N, P): N
Remaining balance is $0.85
Insert cash ($, Q, D, N, P): Q
Here is your drink! Change returned: $0.10

Would you like to make another purchase? (Y/N): N
Thank you for using our vending machine!

```

