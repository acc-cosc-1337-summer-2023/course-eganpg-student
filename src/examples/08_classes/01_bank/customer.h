//customer.h

#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<memory>
#include<vector>

class Customer
{
    public:
        Customer();
        std::unique_ptr<BankAccount>& get_account(int index){return accounts[index];}
    private:
        std::vector<std::unique_ptr<BankAccount>> accounts;
};