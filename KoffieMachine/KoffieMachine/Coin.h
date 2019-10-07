#pragma once
#include <iostream>
using namespace std;

class Coin
{
private:
	string name;
	int value;
public:
	Coin();
	Coin(string name, int value);
	string getName();
	int getValue();
};