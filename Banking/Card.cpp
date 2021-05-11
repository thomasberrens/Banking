#include "Card.h"
#include <iostream>



Card::Card()
{
	this->pinCode = 1234;
}

void Card::eject()
{
	std::cout << "Ejected" << std::endl;
}

bool Card::isValid()
{
	return true;
}

bool Card::validPin(int pinCode)
{
	return this->pinCode == pinCode;
}
