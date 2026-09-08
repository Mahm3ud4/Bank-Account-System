#pragma once
#include <string>
class AccountBank
{
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

public:
    AccountBank();
    AccountBank(std::string a, std::string b, double c);
    double sahb(double a);
    double edaa(double a);
    void getinfo() const;
    ~AccountBank();

};