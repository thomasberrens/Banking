#pragma once
class BankAccount
{
public:
	BankAccount();
	bool HasBankEnoughAmount(int amount);
	void WithdrawAmount(int amount);
	int GetCurrentMoney();
private:
	int money;

};

