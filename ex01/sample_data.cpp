#include "Phonebook.hpp"

void Phonebook::loadSampleData() // development only!
{
	m_contactDB[0].set_firstName("JohnathanTheGreat");
	m_contactDB[0].set_lastName("Smith");
	m_contactDB[0].set_nickname("Johnny");
	m_contactDB[0].set_phoneNumber("1234567890");
	m_contactDB[0].set_secret("Loves cat cafes.");
	++m_index;
	++m_size;
	
	m_contactDB[1].set_firstName("Bob");
	m_contactDB[1].set_lastName("Brown");
	m_contactDB[1].set_nickname("Bobby");
	m_contactDB[1].set_phoneNumber("098765431");
	m_contactDB[1].set_secret("Doesn't brush his teeth.");
	++m_index;
	++m_size;

	m_contactDB[2].set_firstName("Jane");
	m_contactDB[2].set_lastName("Doe");
	m_contactDB[2].set_nickname("Jiji");
	m_contactDB[2].set_phoneNumber("23450987123");
	m_contactDB[2].set_secret("Killed 12 people.");
	++m_index;
	++m_size;

	m_contactDB[3].set_firstName("JohnathanTheGreat");
	m_contactDB[3].set_lastName("Smith");
	m_contactDB[3].set_nickname("Johnny");
	m_contactDB[3].set_phoneNumber("1234567890");
	m_contactDB[3].set_secret("Loves cat cafes.");
	++m_index;
	++m_size;
	
	m_contactDB[4].set_firstName("Bob2");
	m_contactDB[4].set_lastName("Brown");
	m_contactDB[4].set_nickname("Bobby");
	m_contactDB[4].set_phoneNumber("098765431");
	m_contactDB[4].set_secret("Doesn't brush his teeth.");
	++m_index;
	++m_size;

	m_contactDB[5].set_firstName("Jane2");
	m_contactDB[5].set_lastName("Doe");
	m_contactDB[5].set_nickname("Jiji");
	m_contactDB[5].set_phoneNumber("23450987123");
	m_contactDB[5].set_secret("Killed 12 people.");
	++m_index;
	++m_size;

	m_contactDB[6].set_firstName("Bob3");
	m_contactDB[6].set_lastName("Brown");
	m_contactDB[6].set_nickname("Bobby");
	m_contactDB[6].set_phoneNumber("098765431");
	m_contactDB[6].set_secret("Doesn't brush his teeth.");
	++m_index;
	++m_size;

	m_contactDB[7].set_firstName("Jane3");
	m_contactDB[7].set_lastName("Doe");
	m_contactDB[7].set_nickname("Jiji");
	m_contactDB[7].set_phoneNumber("23450987123");
	m_contactDB[7].set_secret("Killed 12 people.");
	++m_index;
	++m_size;
}
