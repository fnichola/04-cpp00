#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

// getters
std::string Contact::get_firstName() const {return m_firstName;}
std::string Contact::get_lastName() const {return m_lastName;}
std::string Contact::get_nickname() const {return m_nickname;}
std::string Contact::get_phoneNumber() const {return m_phoneNumber;}
std::string Contact::get_secret() const {return m_secret;}

// setters
int Contact::set_firstName(const std::string str)
{
	m_firstName = str;
	return 0;
}

int Contact::set_lastName(const std::string str)
{
	m_lastName = str;
	return 0;
}

int Contact::set_nickname(const std::string str)
{
	m_nickname = str;
	return 0;
}

int Contact::set_phoneNumber(const std::string str)
{
	m_phoneNumber = str;
	return 0;
}

int Contact::set_secret(const std::string str)
{
	m_secret = str;
	return 0;
}

