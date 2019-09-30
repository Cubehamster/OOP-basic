#include <iostream>
#include "Docent.h"

int main() {
	Docent deDocent = Docent("Edwin", 20);
	deDocent.getName();
	std::cout << deDocent.getName() << std::endl;

	return 0;
}
