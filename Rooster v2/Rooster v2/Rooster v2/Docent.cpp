#include "Docent.h"

Docent::Docent() {}

Docent::Docent(string name, int age, int workhours) : Persoon(name, age), workhours(workhours) {}

int Docent::getWorkhours()
{
	return workhours;
}

