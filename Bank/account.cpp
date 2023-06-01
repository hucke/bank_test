class Account
{
public:
    Account(int balance)
    {
        balance_ = balance;
    }
    int getBalance()
    {
        return balance_;
    }

    void deposit(int money)
    {
        balance_ += money;
    }

    void withdraw(int money)
    {
        balance_ -= money;
    }

    int balance_;
};