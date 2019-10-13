// TragicLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Library.h"
#include <iostream>
using namespace std;

int main()
{
	std::cout << "--Shelf 1" << std::endl;
	Library shelf1 = Library();
	shelf1.show();

	shelf1.add("The Last Wish");
	std::cout << "--Shelf 1" << std::endl;
	shelf1.show();

	Library shelf2;
	shelf2 = shelf1;
	std::cout << "--Shelf 2" << std::endl;
	shelf2.show();

	shelf1.add("Lady of the lake");
	std::cout << "--Shelf 1" << std::endl;
	shelf1.show();

	std::cout << "--Shelf 2" << std::endl;
	shelf2.show();

	return(0);
}