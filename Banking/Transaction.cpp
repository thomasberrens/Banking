#include "Transaction.h"

Transaction::Transaction(Card* card, int amountToWithdraw)
{
    this->card = card;
    this->amount = amountToWithdraw;
}

Card* Transaction::getCard()
{
    return card;
}

int Transaction::getAmount()
{
    return amount;
}

bool Transaction::isSuccesful()
{
    return succesful;
}

void Transaction::setSuccesful(bool value)
{
    this->succesful = value;
}
