
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"
#include "Phonebook.hpp"

int	main()
{
	Phonebook book;

	// book.addContact();
	book.loadSampleData();
	book.printIndex();

}
