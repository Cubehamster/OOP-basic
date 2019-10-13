
#include "pch.h"
#include "Library.h""
#include <iostream>

Library::Library()
{
	std::cout << "Library: ctor" << std::endl;
}

Library::~Library()
{
	std::cout << "Library: dtor " << std::endl;
	delete book;
}

Library::Library(const Library& shelf)
{
	std::cout << "Library: copy-ctor" << std::endl;

	if (this == &shelf) return;
	book = new Book(shelf.book->getType());
}

Library& Library::operator=(const Library& otherShelf)
{
	std::cout << "Bibliotheek: assignment operator" << std::endl;
	if (this == &otherShelf) return *this;
	if (book) delete book;
	book = new Book(otherShelf.book->getType());
	return *this;
}

void Library::show()
{
	if (book)
		std::cout << "Bibliotheek bevat " << book->getType() << std::endl;
	else
		std::cout << "Bibliotheek is leeg" << std::endl;
}

void Library::add(std::string type)
{
	if (book) delete book;
	book = new Book(type);
}