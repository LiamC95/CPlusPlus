#include "Account.h"
#include <iostream>

using namespace std;

int main() {


    Account liam(1,456.56);

    liam.setDeposit(50.44);
    liam.print();

    liam.withdraw(200);
    liam.print();
    return 0;
}