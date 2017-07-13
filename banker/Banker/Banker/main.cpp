/***
A banker wants to keep track of money in a client’s account.
The account currently has $1000.34.
Knowing C++, the banker decides to write a program that prompts her to enter how many transactions occur on the account each month, 
and then allows her to enter each transaction in turn(positive for deposits, negative for withdraws), 
finally returning to her the account balance.
As the bank has a minimum account balance of $200, she also knows that she needs to reduce the account balance by $10 when the balance dips below $200 and print a warning message.
The fee occurs any time the balance goes from above $200 to below $200.
**/

#include "account.h"
#include <cstdlib>

int main()
{

	// Setup bank account for client with initial balance
	BankAccount account = BankAccount(1000.34, 200, 10);

	// Process transactions
	account.enter_transactions();

	// Print balance
	account.compute_balance();

	// Method 2 of class construction
	BankAccount account2 = BankAccount();

	
	system("pause");

}