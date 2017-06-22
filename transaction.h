#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <vector>

using namespace std;

class Transaction {
    int id;
    double amount;

public:
    Transaction(int id, double amount);
    double getamount();
    static void printlogs(vector<Transaction> v);
};

#endif
