#include "BankServer.h"
bool BankServer::verifyCard(Card* card)
{
    return card->isValid();
}

bool BankServer::verifyPin(Card* card, int pinCode)
{
    return card->validPin(pinCode);
}



bool BankServer::TransactionSuccesful(Transaction* transaction)
{
    return transaction->isSuccesful();
}