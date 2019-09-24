#include <string>

class Docent {			
private:			
	float salary;			
	std::string name;		
public:
	Docent();
	Docent(const std::string name, float salary);
	std::string getName();
	float getSalary();
};