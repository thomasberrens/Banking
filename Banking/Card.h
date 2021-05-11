#pragma once
class Card{
public:
Card();
void eject();
bool isValid();
bool validPin(int pinCode);
int cardNumber();
private:
int pinCode;
};
