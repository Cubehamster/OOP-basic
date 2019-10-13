

#pragma once

#include <iostream>
#include <string>

class Book
{

private:
	std::string type = "none";

public:
	Book();
	Book(std::string type);
	virtual ~Book();
	std::string getType();
	void setType(std::string type);
};