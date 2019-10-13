
#include "pch.h"
#include "Library.h""
#include <iostream>

Library::Library()
{
	std::cout << "Library: ctor" << std::endl;
}

Library::Library(const Library& shelf)
{
	std::cout << "Library: copy-ctor" << std::endl;

	if (this == &shelf) return;
	book = new Book(shelf.book->getType());
}

Library& Library::operator=(const Library& otherShelf)
{
	std::cout << "Library: Assignment Operator" << std::endl;
	if (this == &otherShelf) return *this;
	if (book) delete book;
	book = new Book(otherShelf.book->getType());
	return *this;
}

void Library::show()
{
	if (book)
		std::cout << "Shelf has " << book->getType() << std::endl;
	else
		std::cout << "Shelf is empty." << std::endl;
}

void Library::add(std::string type)
{
	if (book) delete book;
	book = new Book(type);
}

Library::~Library()
{
	std::cout << "Library: dtor " << std::endl;
	delete book;
}