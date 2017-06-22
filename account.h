#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "transaction.h"
#include <string>
#include <vector>

using namespace std;

class Account {
    string name;
    double balance;
    int id;
    vector<Transaction> log;

public:
    Account(int id, string name);
    void deposit(double amount);
    double getbalance();
    void withdraw(double amount);
    vector<Transaction> getlog();
};

#endif
