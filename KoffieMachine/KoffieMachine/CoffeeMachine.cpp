#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine() : coffees(coffees) { }

void CoffeeMachine::acceptKey(HalfEuro& halfEuro)
{
	getCoffee(halfEuro.getValue());
}

void CoffeeMachine::acceptKey(Euro& euro)
{
	getCoffee(euro.getValue());
}

void CoffeeMachine::acceptKey(CoffeeCoin& coffeecoin)
{
	getCoffee(coffeecoin.getValue());
}

void CoffeeMachine::getCoffee(int costs)
{
	switch (costs)
	{
	case 1:
		cout << "You can choose:" << endl;
		for (int i = 0; i < costs; i++)
		{
			cout << coffees[i].getName() << endl;
		}
		break;
	case 2:
		cout << "You can choose:" << endl;
		for (int i = 0; i < costs; i++)
		{
			cout << coffees[i].getName() << endl;
		}
		break;
	case 3:
		cout << "You can choose:" << endl;
		for (int i = 0; i < costs; i++)
		{
			cout << coffees[i].getName() << endl;
		}
		break;
	}
}

void CoffeeMachine::addCoffee(Coffee coffee)
{
	coffees.push_back(coffee);
}