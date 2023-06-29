#include "bank_account.h"
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>

using std::cout;
using std::cin;
using std::vector;

int main()
{
	// BankAccount act;
	// CheckingAccount checking;
	// cout<<checking.get_balance();
	// SavingsAccount savings;
	// cout<<savings.get_balance();

	// auto amount = 0;
	// string name = "";

	// BankAccount(){};
	// BankAccount account(100);

	std::vector<BankAccount> accounts;
	// CheckingAccount checking(100);
	// accounts.push_back(checking);
	// accounts.push_back(CheckingAccount(100));

	// SavingsAccount savings(300);
	// accounts.push_back(savings);
	// accounts.push_back(SavingsAccount(300));

	run_menu(accounts);

	cout<<accounts[0].get_balance()<<"\n";
	cout<<accounts[1].get_balance()<<"\n";
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