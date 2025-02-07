# Vending Machine Project

This C project simulates a vending machine where you can purchase drinks by inserting cash. The way it works is by providing you with a selection of drinks, accepting different forms of payment, ensuring the transaction is valid, and calculating the correct change when needed.

You can choose from Cola, Lemonade, or Water, with each drink having a specified price. The project accepts various forms of payment, including bills and coins, such as dollars, quarters, dimes, nickels, and pennies. It checks if you have enough funds to cover the cost of the drink, and if not, it will prevent the purchase from going through. Once you’ve inserted enough money, the project will return the change, if necessary, and allow you to complete the transaction.

This C project was inspired by my interest in how vending machines work in real life. I wanted to simulate this process in a way that’s interactive and allows you to experience the flow of purchasing a drink. It was an enjoyable challenge to handle all the transaction logic, such as ensuring valid inputs and calculating the proper change. I also wanted to include the option for multiple transactions, so you can continue purchasing drinks until you're ready to stop.

## Example Output
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

