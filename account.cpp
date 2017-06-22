#include "account.h"
#include <math.h>
#include <string.h>

using namespace std;

Account::Account(int id, string name)
{
    this->name = name;
    this->balance = 0.0;
}

void Account::deposit(double amount)
{
    this->log.push_back(Transaction(this->id, fabs(amount)));
    this->balance += fabs(amount);
}

void Account::withdraw(double amount)
{
    if (this->balance > fabs(amount)) {
        this->balance -= fabs(amount);
        this->log.push_back(Transaction(this->id, -fabs(amount)));
    }
}

double Account::getbalance()
{
    return this->balance;
}

vector<Transaction> Account::getlog()
{
    return this->log;
}
