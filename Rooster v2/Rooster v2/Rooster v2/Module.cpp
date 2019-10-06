#include "Module.h"

Module::Module() {}
Module::Module(const string name, int year, int EC, Docent docent, Student studenten) : name(name), year(year), EC(EC), docent(docent), studenten(studenten) {}

string Module::getName()
{
	return name;
}

int Module::getYear()
{
	return year;
}

int Module::getEC()
{
	return EC;
}

Docent Module::getDocent()
{
	return docent;
}

Student Module::getStudent()
{
	return studenten;
}