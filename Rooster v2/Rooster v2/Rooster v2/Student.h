#pragma once
#include <string>
#include "Persoon.h"
using namespace std;

class Student :	public Persoon

{
	private:
		int studentnumber;
	public:
		Student();
		Student(string name, int age, int studentnumber);
		int getStudentnumber();
};

