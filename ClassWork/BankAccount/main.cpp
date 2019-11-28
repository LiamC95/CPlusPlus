#include "Account.h"
#include "CheckingAcc.h"
#include <iostream>

using namespace std;
void prirnt(Account *b){
    b->print();
}

int main() {


    Account bill(2,100.45);
    CheckingAcc liam(1,456.56);

    liam.setDeposit(50.44);
    liam.print();

    liam.postInterest();
    liam.withdraw(200);

    liam.postInterest();
    prirnt(liam);
    prirnt(bill);
    

    return 0;
}