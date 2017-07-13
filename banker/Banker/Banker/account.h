#ifndef _account_h_
#define _account_h_

#include <vector>

class BankAccount
{
public:

	// default constructor
	BankAccount(){ /* nothing to do */};

	// class constructor, takes initial deposit into account
	BankAccount(float initial_deposit, float minimum_balance, float penalty_fee);

	// initialize bank account
	void initialize_account(float initial_deposit, float minimum_balance, float penalty_fee);

	// virtual destructor, nothing to do
	virtual ~BankAccount(){};

	// enter the transactions
	void enter_transactions();

	// process the transactions and print balance
	void compute_balance();

private:

	void tell_user_they_are_stupid();

	float _balance;
	float _min_balance;
	float _penalty_fee;
	std::vector<float> _history;

};


#endif