#pragma once
#include "Card.h"
#include "Transaction.h"
#include "BankServer.h"
#include "BankAccount.h"
class ATM {
public:
	ATM();
	bool insertCard();
	
	bool requestPin(int pinCode);
	bool requestAmount(int amount);
	void DispenseCash();
	void EjectCard();
	Card* GetCurrentCard();
	Transaction* GetCurrentTransaction();
	void SetCard(Card* card);
	BankAccount* getCurrentBankAccount();
	BankServer* getBankServer();
	void unInitialize();
private:
	bool verifyCard();
	void StartTransaction(int amount);
	Card* currentCard;
	Transaction* currentTransaction;
	BankServer* bankServer;
	BankAccount* currentBankAccount;
};