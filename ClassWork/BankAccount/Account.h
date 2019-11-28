#pragma once
class Account{

    int accountNum;
    double balance;
    public:
    Account();
    Account(int accountNum, double balance);
    int getAccountNum()const;
    double getBalance()const;
    void setAccountNum(int num);
    void setDeposit(double add);
    void withdraw(double subtract);
    void print()const;

    ~Account();
};