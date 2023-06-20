//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
class BankAccount
{
    public: //access specifiers
        // BankAccount(){/*empty function codebloack*/} //Default constructor
        BankAccount(){std::cout<<"Using default constructor";} //Default constructor
        // BankAccount(int b){/*empty function code black*/}; //class constructor
        BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor";} //class constructor
        int get_balance(){return balance;}
        void deposit(int amount);
        void withdraw(int amount);
    private: // access specifiers
        int balance{0}; //explicity int to 0
};

#endif