#pragma once
#include <string>

class Student {
private:
	int studentNr;	
	std::string name;
public:
	Student();
	Student(const std::string name, int studentNr);
	std::string getName();
	float getStudentNr();
};
