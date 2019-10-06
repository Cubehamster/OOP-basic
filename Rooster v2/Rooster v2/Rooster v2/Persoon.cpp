#include "Persoon.h"

Persoon::Persoon() {}

Persoon::Persoon(string name, int age) : name(name), age(age) {}

string Persoon::getName()
{
	return name;
}

int Persoon::getAge()
{
	return age;
}
