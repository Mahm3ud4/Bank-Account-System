#include <iostream>
#include <string>
using namespace std;
#include "AccountBank.h"
AccountBank::AccountBank()
{
    cout << "Welcome Dear\n";
}
AccountBank::AccountBank(string name, string num, double f)
    : accountHolder(name) ,balance(f > 0?f:0.0)
{
    if (num.size() == 15)
        accountNumber = num;
    else
        cout << "error\n";
}
void AccountBank::sahb(double amount=0.0)
{
    if (amount > 0 && amount>= balance)
        balance-=amount;
    else
        cout << "Error: Invalid withdrawal amount or insufficient balance!\n";
}
void AccountBank::edaa(double Amount=0.0)
{
    if (Amount > 0)
        balance+=Amount;
    else
        cout << "Error: Invalid withdrawal amount or insufficient balance!\n";
}
void AccountBank::getinfo()
{
    cout << "My Dear " << accountHolder << "Your Balance Is " << balance << "\n";
}
AccountBank::~AccountBank()
{
    cout << "Thank You\n";
}
