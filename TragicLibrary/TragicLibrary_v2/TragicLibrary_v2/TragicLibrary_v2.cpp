// TragicLibrary_v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Library.h"
#include <iostream>
using namespace std;

int main()
{
	std::cout << "\tShelf 1" << std::endl;
	Library shelf1 = Library();
	shelf1.show();

	shelf1.add("Book: 7 Interesting facts about pineapples.");
	std::cout << "\tShelf 1" << std::endl;
	shelf1.show();

	Library shelf2;
	shelf2 = shelf1;
	std::cout << "\tShelf 2" << std::endl;
	shelf2.show();

	shelf1.add("Book: Cooking with Chocolate.");
	std::cout << "\tShelf 1" << std::endl;
	shelf1.show();

	std::cout << "\tShelf 2" << std::endl;
	shelf2.show();

	return(0);
}