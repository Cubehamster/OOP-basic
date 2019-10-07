#pragma once
#include <iostream>
using namespace std;

class Coffee
{
private:
	string name;
	int cost;
public:
	Coffee();
	Coffee(string name, int cost);
	string getName();
	int getCost();
};