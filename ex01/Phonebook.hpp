#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include "Contact.hpp"

class Phonebook
{
public:

	Phonebook(const bool shouldLoadSampleData = false);
	~Phonebook();

	void add();
	void search();

private:

	int m_index;
	int m_size;
	Contact m_contactDB[8];

	std::string promptContactInfo(const std::string prompt);
	std::string truncate(const std::string& str, const size_t width);
	void inputContact(const int index);
	void printIndex();
	void printContact(const int index);
	int promptIndex();
	int stoi(const std::string str);
};

#endif
