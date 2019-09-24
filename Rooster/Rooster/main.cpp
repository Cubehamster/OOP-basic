#include <iostream>

#include "Docent.h"

int main() {
	Docent deDocent = Docent("Edwin", 25.00);

	std::cout << deDocent.getName() << std::endl;

	return 0;
}