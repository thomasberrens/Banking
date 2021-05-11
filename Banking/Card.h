#pragma once
class Card{
public:
Card();
void eject();
bool isValid();
bool validPin(int pinCode);
private:
int pinCode;
};
