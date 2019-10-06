#include "Student.h"

Student::Student() {}

Student::Student(string name, int age, int studentnumber) : Persoon(name, age), studentnumber(studentnumber) {}

int Student::getStudentnumber()
{
	return studentnumber;
}
