#pragma once
#include <string>
#include "Docent.h"
#include "Student.h"
using namespace std;

class Module
{
	private:
		string name; //naame Module
		int year; //1819 schooljaar
		int EC; //studiepunten
		Docent docent; //Dit zou ook een array kunnen zijn
		Student studenten;; //Dit moet een array zijn
			   		 	  
	public:
		Module();
		Module(const string name, int year, int EC, Docent docent, Student studenten);
		string getName();
		int getYear();
		int getEC();
		Docent getDocent();
		Student getStudent();

};

