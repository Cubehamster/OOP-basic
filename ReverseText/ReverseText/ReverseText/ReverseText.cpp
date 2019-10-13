// ReverseText.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

#define FILE "I:/OOPBasic/ReverseText/Text.txt"
#define OUTFILE "I:/OOPBasic/ReverseText/Output.txt"

int main()
{
	std::ifstream input_file;

	input_file.open(FILE);
	if (!input_file) {
		std::cout << "Probleem bij openen FILE" << std::endl;
		exit(1);
	}

	std::ofstream output_file;
	output_file.open(OUTFILE);
	if (!output_file) {
		std::cout << "Probleem bij openen OUTFILE" << std::endl;
		exit(1);
	}

	std::string text;

	char c;
	if (input_file.get(c))
	{
		text += c;
	}
	while (input_file.get(c)) 
	{
		text += c;
	}

	std::reverse(text.begin(), text.end());	

	output_file << text;
	std::cout << text;

	input_file.close();
	output_file.close();

	return 0;
}

