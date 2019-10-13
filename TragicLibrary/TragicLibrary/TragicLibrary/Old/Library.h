

#pragma once

#include "pch.h"
#include "Book.h""
#include <string>


class Library
{
private:
	Book* book;

public:
	Library();
	~Library();
	Library(const Library& shelf);
	Library& operator=(const Library& othershelf);
	void show();
	void add(std::string type);
};

