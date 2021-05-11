#pragma once
#include "Card.h"
#include "Transaction.h"
class BankServer
{
public:
	bool verifyCard(Card* card);
	bool verifyPin(Card* card, int pinCode);
	bool TransactionSuccesful(Transaction* transaction);
};

