#ifndef _account_h_
#define _account_h_

#include <vector>

class BankAccount
{
public:

	// class constructor, takes initial deposit into account
	BankAccount(float initial_deposit, float minimum_balance, float penalty_fee);

	// virtual destructor, nothing to do
	virtual ~BankAccount(){};

	// enter the transactions
	void enter_transactions();

	// process the transactions and print balance
	void compute_balance();

private:

	float _balance;
	float _min_balance;
	float _penalty_fee;
	std::vector<float> _history;

};


#endif