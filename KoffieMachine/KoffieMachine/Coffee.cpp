#include "Coffee.h"

Coffee::Coffee(string name, int cost) : name(name), cost(cost) {}

string Coffee::getName()
{
	return name;
}

int Coffee::getCost()
{
	return cost;
}