#include "bank_account.h"
#include "atm.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{
	auto amount = 0;
	// string name = "";
	// BankAccount(){};
	BankAccount account(100);
	run_menu(account);
	// account.get_balance = 20;

	// cout<<"Balance: "<<account.get_balance()<<"\n";
	// cout<<"Enter an amount: ";
	// cin>>amount;
	// cout<<"Deposit: ";
	// account.deposit(amount);

	// BankAccount account2(100);

	// cout<<"Balance: "<<account2.get_balance()<<"\n";
	return 0;
}