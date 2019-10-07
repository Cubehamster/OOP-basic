#include "Coin.h"

Coin::Coin() : name(name), value(value) {}

Coin::Coin(string name, int value) : name(name), value(value) {}

string Coin::getName()
{
	return name;
}

int Coin::getValue()
{
	return value;
}