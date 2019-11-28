#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(){

}
Account::Account(int accountNum, double balance)
{
    this->accountNum = accountNum;
    this->balance = balance;
}
int Account::getAccountNum()const{
    return accountNum;
}
double Account::getBalance()const
{
    return balance;
}
void Account::setAccountNum(int num)
{
    this->accountNum = num;
}
void Account::setDeposit(double add)
{
    this->balance = balance + add;
}
void Account::withdraw(double subtract)
{
    if(subtract <= balance){
        balance -= subtract;
    }
}

void Account::print()const
{
    cout << "Acc. Number: " << getAccountNum() << "\nBalance: "<< getBalance() << endl;
}

Account::~Account()
{
    
}