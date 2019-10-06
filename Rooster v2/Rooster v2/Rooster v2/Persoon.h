#pragma once
#include <string>
using namespace std;

class Persoon
{
	private:
		int age; 
		string name;
		
	public:
		Persoon();
		Persoon(const string name, int age);
		virtual int getAge();
		virtual string getName();
};

