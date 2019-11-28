#include "CheckingAcc.h"

CheckingAcc::CheckingAcc(int accountNum, double balance, double minimumBalance, double interestRate , double serviceCharge): Account(accountNum, balance)
{
    this->interestRate  = interestRate;
    this->minimumBal    = minimumBalance;
    this->serviceCharge = serviceCharge;
}
void CheckingAcc::setInterestRate(double rate)
{
    this->interestRate =rate;
}
double CheckingAcc::getInterestRate()
{
    return this->interestRate;
}

void CheckingAcc::setMinimumBal(double minBal)
{
    this->minimumBal = minBal;
}
double CheckingAcc::getMinBal()
{
    return this->minimumBal;
}

void CheckingAcc::setServiceCharge(double charge)
{
    this->serviceCharge = charge;
}
double CheckingAcc::getServiceCharge()
{
    return this->serviceCharge;
}

void CheckingAcc::withdraw(double subtract)
{
    Account::withdraw(subtract);
    if(getBalance() < minimumBal)
    {
        Account::withdraw(serviceCharge);
    }
}
void CheckingAcc::postInterest()
{
    Account::setDeposit(getBalance()*interestRate);
}
CheckingAcc::~CheckingAcc()
{

}