#pragma once
#include <iostream>
#include "HalfEuro.h";
#include "Euro.h";
#include "CoffeeCoin.h";
#include "Coffee.h";
#include <vector>

class CoffeeMachine
{
private:
	vector<Coffee> coffees;
public:
	CoffeeMachine();
	void acceptKey(HalfEuro& halfeuro);
	void acceptKey(Euro& euro);
	void acceptKey(CoffeeCoin& coffeecoin);
	void getCoffee(int costs);
	void addCoffee(Coffee coffee);
};