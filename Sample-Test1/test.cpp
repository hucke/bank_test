#include "pch.h"
#include "../Bank/account.cpp"

class AccountFixture : public testing::Test
{
public:
    Account account{ 10000 };
};

TEST_F(AccountFixture, Account) {
    EXPECT_EQ(account.getBalance(), 10000);
}

TEST_F(AccountFixture, Deposit) {
    account.deposit(500);
    EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, Withdraw) {
    account.withdraw(600);
    EXPECT_EQ(account.getBalance(), 9400);
}