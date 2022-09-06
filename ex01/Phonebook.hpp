#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class Phonebook
{
public:

	Phonebook();
	~Phonebook();

	void loadSampleData();
	void printContact(const int index);
	void printIndex();
	void addContact();
	void exitPhonebook();

private:

	void inputContact(const int index);
	std::string promptUser(const std::string prompt);
	Contact m_contactDB[8];
	int m_index;
};

#endif
