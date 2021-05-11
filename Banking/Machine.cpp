// Banking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Machine.h"
#include "ATM.h"

int main()
{
	ATM* atm;
	atm = new ATM();
	
	atm->insertCard();

	int pinCode;
	std::cout << "Je pincode: "; // Type a number and press enter
	std::cin >> pinCode; // Get user input from the keyboard

	if (!atm->requestPin(pinCode)) { 
		std::cout << "Wrong pincode." << std::endl;
		atm->EjectCard();
		return 0;
	}

	std::cout << "Current bank amount: " << atm->getCurrentBankAccount()->GetCurrentMoney() << std::endl;

	int amount;
	std::cout << "Hoeveel wil je van je rekening halen: "; // Type a number and press enter
	std::cin >> amount; // Get user input from the keyboard

	if (!atm->requestAmount(amount)) {
		std::cout << "Not enough amount. " << std::endl;
		
		atm->EjectCard();
		return 0;
	}

	atm->DispenseCash();

	std::cout << "New bank amount: " << atm->getCurrentBankAccount()->GetCurrentMoney() << std::endl;
	std::cout << "Transaction succesful: " << atm->GetCurrentTransaction()->isSuccesful() << std::endl;

	atm->EjectCard();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
