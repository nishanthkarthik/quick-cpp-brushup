#include "transaction.h"

Transaction::Transaction(int id, double amount)
{
    this->id = id;
    this->amount = amount;
}

double Transaction::getamount()
{
    return this->amount;
}

void Transaction::printlogs(vector<Transaction> v)
{
    for (vector<Transaction>::iterator it = v.begin(); it != v.end(); it++) {
        cout << it - v.begin() << '\t' << it->getamount() << endl;
    }
}