#pragma once
#include "Account.h"

class CheckingAcc : public Account
{
    double interestRate;
    double minimumBal;
    double serviceCharge;
    public :
    CheckingAcc(int accountNum, double balance=0, double minimumBalance = 0, double interestRate = 0.01, double serviceCharge = 50);
    void setInterestRate(double rate);
    double getInterestRate();

    void setMinimumBal(double minBal);
    double getMinBal();

    void setServiceCharge(double charge);
    double getServiceCharge();

    void withdraw(double subtract);
    void postInterest();
    ~CheckingAcc();
};