
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"
#include "Phonebook.hpp"

int	main()
{
	Phonebook book(false);
	std::string cmd;

	while (true)
	{
		std::cout << "Please enter a command (ADD, SEARCH, or EXIT): ";
		if (!std::getline(std::cin, cmd))
			break ;
		if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
			book.search();
		else if (cmd == "EXIT")
			return (0);
	}
}
