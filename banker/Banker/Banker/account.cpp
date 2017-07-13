#include "account.h"
#include <iostream>

BankAccount::BankAccount(float initial_deposit, float minimum_balance, float penalty_fee)
{
	_balance = initial_deposit;
	_min_balance = minimum_balance;
	_penalty_fee = penalty_fee;
}

// function to read in the transactions for the month
void BankAccount::enter_transactions()
{
	int n_transactions;
	std::cout << "Enter the number of transactions: ";
	
	while (!(std::cin >> n_transactions))
	{
		std::cout << "Number of transactions must be an integer: ";
		std::cin.clear();
		std::cin.ignore(1000);
	}

	for (int t = 0; t != n_transactions; t++)
	{
		std::cout << "Enter transaction ($): ";
		float amount;
		while (!(std::cin >> amount))
		{
			std::cout << "Transaction must be a float value ($): ";
			std::cin.clear();
			std::cin.ignore(1000);
		}
		_history.push_back(amount);
	}
}

// function to process the transactions and return the account balance
void BankAccount::compute_balance()
{
	for (int t = 0; t != _history.size(); t++)
	{
		float new_balance = _balance + _history[t];
		if (new_balance < _min_balance)
		{
			new_balance -= _penalty_fee;
			std::cout << "Account has dipped below minimum balance, fee imposed!\n";
		}
		_balance = new_balance;
	}
	std::cout << "Final balance: $" << _balance << std::endl;
}
