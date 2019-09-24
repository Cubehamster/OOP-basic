#include <string>
#include "Docent.h"

Docent::Docent(const std::string name, float salary) : name(name), salary(salary){}

std::string Docent::getName() {
	return name;
}

float Docent::getSalary() {
	return salary;
}