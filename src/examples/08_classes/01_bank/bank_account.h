//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
class BankAccount //abstract class, can't be used directly
{
    // public: //access specifiers
    //     // BankAccount(){/*empty function codebloack*/} //Default constructor
    //     BankAccount(){std::cout<<"Using default constructor";} //Default constructor
    //     // BankAccount(int b){/*empty function code black*/}; //class constructor
    //     BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor";} //class constructor
    //     virtual int get_balance() const = 0;// pure virtual function
    //     int get_balance(){return balance;}
    //     void deposit(int amount);
    //     void withdraw(int amount);
    // private: // access specifiers
    //     int balance{0}; //explicity int to 0
};

#endif