#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test account get balance") {
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test with param constructor") {
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account deposit")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
	account.deposit(50);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test account deposit value < 0")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
	account.deposit(-50);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("TEst account withdraw")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
	account.withdraw(25);
	REQUIRE(account.get_balance() == 75);
}

TEST_CASE("TEst withdraw negative amount")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
	account.withdraw(-25);
	REQUIRE(account.get_balance() == 100);
}

