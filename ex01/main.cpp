
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"
#include "Phonebook.hpp"

int	main()
{
	Phonebook book;

	std::string cmd;

	book.loadSampleData();
	while (true)
	{
		std::cout << "Please enter a command (ADD, SEARCH, or EXIT): ";
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			book.add();
		else if (!cmd.compare("SEARCH"))
			book.search();
		else if (!cmd.compare("EXIT"))
			return (0);
	}
}
