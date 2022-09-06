#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	m_index = 0;
}

Phonebook::~Phonebook()
{

}

void Phonebook::loadSampleData() // debug only!
{
	m_contactDB[0].set_firstName("John");
	m_contactDB[0].set_lastName("Smith");
	m_contactDB[0].set_nickname("Johnny");
	m_contactDB[0].set_phoneNumber("1234567890");
	m_contactDB[0].set_secret("Love's cat cafes.");
	++m_index;
	
	m_contactDB[1].set_firstName("Bob");
	m_contactDB[1].set_lastName("Brown");
	m_contactDB[1].set_nickname("Bobby");
	m_contactDB[1].set_phoneNumber("098765431");
	m_contactDB[1].set_secret("Doesn't brush his teeth.");
	++m_index;

	m_contactDB[2].set_firstName("Jane");
	m_contactDB[2].set_lastName("Doe");
	m_contactDB[2].set_nickname("Jiji");
	m_contactDB[2].set_phoneNumber("23450987123");
	m_contactDB[2].set_secret("Killed 12 people.");
	++m_index;
}

void Phonebook::printContact(const int index)
{
	std::cout << "First Name = " << m_contactDB[index].get_firstName() << std::endl;
	std::cout << "Last Name = " << m_contactDB[index].get_lastName() << std::endl;
	std::cout << "Nickname = " << m_contactDB[index].get_nickname() << std::endl;
	std::cout << "Phone Number = " << m_contactDB[index].get_phoneNumber() << std::endl;
	std::cout << "Darkest Secret = " << m_contactDB[index].get_secret() << std::endl;
	std::cout << std::endl;
}

void Phonebook::printIndex()
{
	for (int i=0; i < m_index; ++i)
	{
		printContact(i);
	}
}

std::string Phonebook::promptUser(const std::string prompt)
{
	std::string value = "";

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
	m_contactDB[index].set_firstName(promptUser("First Name: "));
	m_contactDB[index].set_lastName(promptUser("Last Name: "));
	m_contactDB[index].set_nickname(promptUser("Nickname: "));
	m_contactDB[index].set_phoneNumber(promptUser("Phone Number: "));
	m_contactDB[index].set_secret(promptUser("Darkest Secret: "));
}

void Phonebook::addContact()
{
	if (m_index >= 8)
		m_index = 0;
	inputContact(m_index);
	++m_index;
}
