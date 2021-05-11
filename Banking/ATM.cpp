#include "ATM.h"
#include <iostream>
#include "BankServer.h"
#include "BankAccount.h"

ATM::ATM()
{
	bankServer = new BankServer();
}

bool ATM::insertCard()
{
	std::cout << "Inserting card..." << std::endl;
	currentCard = new Card();

	return bankServer->verifyCard(currentCard);
}

bool ATM::verifyCard()
{
	return currentCard->isValid();
}

bool ATM::requestPin(int pinCode)
{
	currentBankAccount = new BankAccount();
	return bankServer->verifyPin(currentCard, pinCode);
}

bool ATM::requestAmount(int amount)
{
	StartTransaction(amount);
	return currentBankAccount->HasBankEnoughAmount(currentTransaction->getAmount());;
}

void ATM::DispenseCash(){

	currentBankAccount->WithdrawAmount(currentTransaction->getAmount());
	currentTransaction->setSuccesful(true);
	std::cout << "Giving: " << currentTransaction->getAmount() << std::endl;
}

void ATM::EjectCard()
{
	std::cout << "Ejecting card: " << currentCard->cardNumber() << std::endl;
	currentCard->eject();
	
	unInitialize();
}

Card* ATM::GetCurrentCard()
{
	return currentCard;
}

Transaction* ATM::GetCurrentTransaction()
{
	return currentTransaction;
}

void ATM::StartTransaction(int amount)
{
	currentTransaction = new Transaction(currentCard, amount);
}

void ATM::SetCard(Card* card)
{
	currentCard = card;
}

BankAccount* ATM::getCurrentBankAccount()
{
	return currentBankAccount;
}

BankServer* ATM::getBankServer()
{
	return bankServer;
}

void ATM::unInitialize()
{
	currentBankAccount = nullptr;
	currentCard = nullptr;
	currentTransaction = nullptr;
}
