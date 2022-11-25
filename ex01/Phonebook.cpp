#include "Phonebook.hpp"

Phonebook::Phonebook(const bool shouldLoadSampleData)
{
	m_index = 0;
	m_size = 0;

	if (!shouldLoadSampleData)
		return ;

	m_contactDB[0].SetFirstName("JohnathanTheGreat");
	m_contactDB[0].SetLastName("Smith");
	m_contactDB[0].SetNickname("Johnny");
	m_contactDB[0].SetPhoneNumber("1234567890");
	m_contactDB[0].SetSecret("Loves cat cafes.");
	++m_index;
	++m_size;
	
	m_contactDB[1].SetFirstName("Bob");
	m_contactDB[1].SetLastName("Brown");
	m_contactDB[1].SetNickname("Bobby");
	m_contactDB[1].SetPhoneNumber("098765431");
	m_contactDB[1].SetSecret("Doesn't brush his teeth.");
	++m_index;
	++m_size;

	m_contactDB[2].SetFirstName("Jane");
	m_contactDB[2].SetLastName("Doe");
	m_contactDB[2].SetNickname("Jiji");
	m_contactDB[2].SetPhoneNumber("23450987123");
	m_contactDB[2].SetSecret("Killed 12 people.");
	++m_index;
	++m_size;

	m_contactDB[3].SetFirstName("JohnathanTheGreat");
	m_contactDB[3].SetLastName("Smith");
	m_contactDB[3].SetNickname("Johnny");
	m_contactDB[3].SetPhoneNumber("1234567890");
	m_contactDB[3].SetSecret("Loves cat cafes.");
	++m_index;
	++m_size;
	
	m_contactDB[4].SetFirstName("Bob2");
	m_contactDB[4].SetLastName("Brown");
	m_contactDB[4].SetNickname("Bobby");
	m_contactDB[4].SetPhoneNumber("098765431");
	m_contactDB[4].SetSecret("Doesn't brush his teeth.");
	++m_index;
	++m_size;

	m_contactDB[5].SetFirstName("Jane2");
	m_contactDB[5].SetLastName("Doe");
	m_contactDB[5].SetNickname("Jiji");
	m_contactDB[5].SetPhoneNumber("23450987123");
	m_contactDB[5].SetSecret("Killed 12 people.");
	++m_index;
	++m_size;

	m_contactDB[6].SetFirstName("Bob3");
	m_contactDB[6].SetLastName("Brown");
	m_contactDB[6].SetNickname("Bobby");
	m_contactDB[6].SetPhoneNumber("098765431");
	m_contactDB[6].SetSecret("Doesn't brush his teeth.");
	++m_index;
	++m_size;

	m_contactDB[7].SetFirstName("Jane3");
	m_contactDB[7].SetLastName("Doe");
	m_contactDB[7].SetNickname("Jiji");
	m_contactDB[7].SetPhoneNumber("23450987123");
	m_contactDB[7].SetSecret("Killed 12 people.");
	++m_index;
	++m_size;

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
	if (m_size > 0)
		promptIndex();
	else
		std::cout << "There are no entries to diplay.\n" << std::endl;
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
		if (!std::getline(std::cin, value))
			break ;
		if (value.length() == 0)
			std::cout << "Cannot be blank!" << std::endl;
	}
	return (value);
}

void Phonebook::inputContact(const int index)
{
	std::cout << std::endl;
	m_contactDB[index].SetFirstName(promptContactInfo("First Name: "));
	m_contactDB[index].SetLastName(promptContactInfo("Last Name: "));
	m_contactDB[index].SetNickname(promptContactInfo("Nickname: "));
	m_contactDB[index].SetPhoneNumber(promptContactInfo("Phone Number: "));
	m_contactDB[index].SetSecret(promptContactInfo("Darkest Secret: "));
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
		if (!std::getline(std::cin, value))
			break ;
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
		std::cout << "|" << std::setw(10) << std::right << truncate(m_contactDB[i].GetFirstName(), 10);
		std::cout << "|" << std::setw(10) << std::right << truncate(m_contactDB[i].GetLastName(), 10);
		std::cout << "|" << std::setw(10) << std::right << truncate(m_contactDB[i].GetNickname(), 10);
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}

void Phonebook::printContact(const int index)
{
	std::cout << std::endl;
	std::cout << "First Name = " << m_contactDB[index].GetFirstName() << std::endl;
	std::cout << "Last Name = " << m_contactDB[index].GetLastName() << std::endl;
	std::cout << "Nickname = " << m_contactDB[index].GetNickname() << std::endl;
	std::cout << "Phone Number = " << m_contactDB[index].GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret = " << m_contactDB[index].GetSecret() << std::endl;
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
