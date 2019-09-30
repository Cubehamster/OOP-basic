#include <string>
#include "Docent.h"

Docent::Docent(std::string name, float salary) : setName(name), salary(salary){}

std::string Docent::getName() {
	return name;
}

float Docent::getSalary() {
	return salary;
}
