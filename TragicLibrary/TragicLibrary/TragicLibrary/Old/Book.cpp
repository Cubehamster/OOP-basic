
#include "pch.h"
#include "Book.h"

Book::Book() { std::cout << "Book: default ctor" << std::endl; }

Book::Book(std::string type) : type(type)
{
	std::cout << "Book ctor:" << type << std::endl;
}

Book::~Book()
{
	std::cout << "Book dtor:" << type << std::endl;
}

std::string Book::getType()
{
	return type;
}

void Book::setType(std::string type)
{
	type = type;
}