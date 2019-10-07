#include <iostream>
#include <fstream>
#include "CoffeeMachine.h";
#include "Euro.h";
#include "HalfEuro.h";
#include "CoffeeCoin.h";

int main()
{
	int choice;
	bool invalidChoice;

	CoffeeMachine TheCoffeeMachine;

	HalfEuro halfEuro = HalfEuro("HalfEuro", 1);
	Euro euro = Euro("Euro", 2);
	CoffeeCoin coffeeCoin = CoffeeCoin("CoffeeCoin", 3);
	Coffee coffee0 = Coffee("Coffee Cream\t$0,50", 1);
	Coffee coffee1 = Coffee("Espresso\t$1,00", 2);
	Coffee coffee2 = Coffee("Cappucino\t$1,50", 3);
	TheCoffeeMachine.addCoffee(coffee0);
	TheCoffeeMachine.addCoffee(coffee1);
	TheCoffeeMachine.addCoffee(coffee2);

	do {
		invalidChoice = false;
		cout << "\tChoose one: \n";
		cout << "\t\t1. 50Cent \n";
		cout << "\t\t2. Euro \n";
		cout << "\t\t3. CoffeeCoin\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Insterted 50Cent" << endl;
			TheCoffeeMachine.acceptKey(halfEuro);
			cout << endl;
			break;
		case 2:
			cout << "Inserted Euro" << endl;
			TheCoffeeMachine.acceptKey(euro);
			cout << endl;
			break;
		case 3:
			cout << "Insterted CoffeeCoin" << endl;
			TheCoffeeMachine.acceptKey(coffeeCoin);
			cout << endl;
			break;
		default:
		{
			cout << "Invalid choice.";
			invalidChoice = true;
			break;
		}
		}
	} while (invalidChoice);

	return 0;

}
