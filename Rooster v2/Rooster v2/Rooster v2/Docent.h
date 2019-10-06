#pragma once
#include "Persoon.h"
#include <string>
using namespace std;

class Docent : public Persoon //inherent van de class Persoon
{
private:
	int workhours; //dit moet waarschijnlijk een array zijn met beschikbare uren

public:
	Docent(); //een lege constructor
	Docent(string name, int age, int workhours); //een constructor met parameters
	int getWorkhours(); 
};

