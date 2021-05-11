#pragma once
#include "Card.h"
class Transaction
{
public:
	Transaction(Card* card, int amountToWithdraw);

	Card* getCard();
	int getAmount();
	bool isSuccesful();
	void setSuccesful(bool value);
private:
	Card* card;
	int amount;
	bool succesful;
};

