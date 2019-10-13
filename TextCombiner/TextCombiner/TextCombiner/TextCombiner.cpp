// TextCombiner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>


#define OUTFILE "I:/OOPBasic/TextCombiner/Output.txt"

int main()
{
	std::ifstream input_file;
	input_file.open("I:/OOPBasic/TextCombiner/Text1.txt");
	if (!input_file) {
		std::cout << "Probleem bij openen text1 file" << std::endl;
		exit(1);
	}

	std::ifstream input_file2;
	input_file2.open("I:/OOPBasic/TextCombiner/Text2.txt");
	if (!input_file2) {
		std::cout << "Probleem bij openen text2 file" << std::endl;
		exit(1);
	}

	std::ofstream output_file;
	output_file.open(OUTFILE);
	if (!output_file) {
		std::cout << "Probleem bij openen OUTFILE" << std::endl;
		exit(1);
	}

	std::string text;

	while (!input_file.eof() || !input_file2.eof())
	{
		std::getline(input_file, text);
		output_file << text << std::endl;
		std::getline(input_file2, text);
		output_file << text << std::endl;
	}
	std::cout << text;

	input_file.close();
	input_file2.close();
	output_file.close();

	return 0;
}