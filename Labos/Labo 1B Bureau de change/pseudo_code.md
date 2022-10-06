# Pseudo Code, LABO 1B
Gwenaël, Noé, Ophélie

## Inputs
- username = family name of the user
- accountNumber = account number of the user
- accountBalance (1000) = account balance in CHF
- exchangeRate (1.024) = 1 CHF to Euro exchange rate
- transactionFees (5) = money in CHF collected by the bank for a transaction
- withdrawalAmount = the money withdrawal by the user in Euro

- ticketColLeftWidth (18) = the label column width in character of the ticket
- ticketColRightWidth (9) = the result column width in character of the ticket
- ticketCorner ('+') = the character placed in each corner of the ticket
- ticketColSeparator (':') = the character placed to separate the two columns
- ticketColSeparatorWidth (1) = the number of character placed to separate the two columns
- ticketBorderVertical ('|') = the character used for the right and left borders
- ticketBorderHorizontal ('-') = the character used for the top and bottom borders
- ticketNumberPrecision (2) = the number of decimal used for the number precision except for the exchange rate 
- ticketExchangeRatePrecision (3) = the number of decimal used for the exchange rate precision 

## Output
The formatted ticket with the following information:
- username
- account number
- withdrawal amount
- exchange rate
- converted withdrawal amount
- transaction fees
- final account balance

## Algorithm
```
ask accountNumber
ask username 

display accountBalance
display exchangeRate
display transactionFees

ask withdrawalAmount

calculate convertedWithdrawalAmount = withdrawalAmount / exchangeRate
calculate finalAccountBalance = accountBalance - convertedWithdrawalAmount - transactionFees

calculate ticketWidth = ticketColLeftWidth + ticketColRightWidth + ticketColSeparatorWidth

display as Ticket model
```

## Ticket model
+----------------------------+  
|                            |
| TOTO                       |
| 1256845                    |
|                            |
| Somme Euro       :  125.00 |
| 1 CHF en Euro    :   1.024 |
|                            |
| Somme CHF        :  122.07 |
| Frais            :    5.00 |
|                            |
| Solde Compte     :  872.93 |
|                            |
+----------------------------+

