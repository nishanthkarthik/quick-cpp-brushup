#include "account.h"
#include "transaction.h"

int main()
{
    Account a = Account(101, "Jake");
    a.deposit(100);
    a.deposit(500);
    cout << "balance " << a.getbalance() << endl;
    a.withdraw(325);
    a.withdraw(300);
    a.withdraw(15);
    cout << "balance " << a.getbalance() << endl;
    Transaction::printlogs(a.getlog());
    return 0;
}