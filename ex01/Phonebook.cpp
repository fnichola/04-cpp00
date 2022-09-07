#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	m_index = 0;
	m_size = 0;
}

Phonebook::~Phonebook(){}


// -------------------------
// public functions
// -------------------------

void Phonebook::add()
{
	if (m_index >= 8)
		m_index = 0;
	inputContact(m_index);
	++m_index;
	if (m_size < 8)
		++m_size;
}

void Phonebook::search()
{
	printIndex();
	promptIndex();
}


// -------------------------
// ADD
// -------------------------

std::string Phonebook::promptContactInfo(const std::string prompt)
{
	std::string value;

	while (value.length() == 0)
	{
		std::cout << prompt;
		std::getline(std::cin, value);
		if (value.length() == 0)
			std::cout << "Cannot be blank!" << std::endl;
	}
	return (value);
}

void Phonebook::inputContact(const int index)
{
	std::cout << std::endl;
	m_contactDB[index].set_firstName(promptContactInfo("First Name: "));
	m_contactDB[index].set_lastName(promptContactInfo("Last Name: "));
	m_contactDB[index].set_nickname(promptContactInfo("Nickname: "));
	m_contactDB[index].set_phoneNumber(promptContactInfo("Phone Number: "));
	m_contactDB[index].set_secret(promptContactInfo("Darkest Secret: "));
	std::cout << std::endl;
}


// -------------------------
//SEARCH
// -------------------------

int Phonebook::promptIndex()
{
	std::string value;
	int index = -1;

	std::cout << "Enter an index number to view details: ";
	while (index < 0 || index >= m_size)
	{
		std::getline(std::cin, value);
		index = stoi(value);
		if (index >=0 && index < m_size)
		{
			printContact(index);
		}
		else
		{
			std::cout << "Invalid input! Please enter a value between 0 and " << m_size - 1 << ": ";
		}
	}
	return (0);
}

void Phonebook::printIndex()
{
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index";
	std::cout << "|" << std::setw(10) << std::right << "First Name";
	std::cout << "|" << std::setw(10) << std::right << "Last Name";
	std::cout << "|" << std::setw(10) << std::right << "Nickname";
	std::cout << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i=0; i < m_size; ++i)
	{
		std::cout << "|" << std::setw(10) << std::right << i;
		std::cout << "|" << std::setw(10) << std::right << truncate(m_contactDB[i].get_firstName(), 10);
		std::cout << "|" << std::setw(10) << std::right << truncate(m_contactDB[i].get_lastName(), 10);
		std::cout << "|" << std::setw(10) << std::right << truncate(m_contactDB[i].get_nickname(), 10);
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}

void Phonebook::printContact(const int index)
{
	std::cout << std::endl;
	std::cout << "First Name = " << m_contactDB[index].get_firstName() << std::endl;
	std::cout << "Last Name = " << m_contactDB[index].get_lastName() << std::endl;
	std::cout << "Nickname = " << m_contactDB[index].get_nickname() << std::endl;
	std::cout << "Phone Number = " << m_contactDB[index].get_phoneNumber() << std::endl;
	std::cout << "Darkest Secret = " << m_contactDB[index].get_secret() << std::endl;
	std::cout << std::endl;
}


// -------------------------
// Helper Functions
// -------------------------

std::string Phonebook::truncate(const std::string& str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	return (str);
}

// Convert string to int, only positive numbers, only digits allowed.
// Returns -1 on invalid input.
int Phonebook::stoi(std::string str)
{
	int i = -1;

	if (str.length() == 0)
		return (-1);

	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!std::isdigit(*it))
			return (-1);
	}
	std::istringstream in;
	in.str(str);
	in >> i;
	return (i);
}
