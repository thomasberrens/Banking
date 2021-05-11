#include "BankAccount.h"

BankAccount::BankAccount()
{
    this->money = 250;
}

bool BankAccount::HasBankEnoughAmount(int amount)
{
    return this->money >= amount;
}

void BankAccount::WithdrawAmount(int amount)
{
    this->money -= amount;
}

int BankAccount::GetCurrentMoney()
{
    return money;
}
