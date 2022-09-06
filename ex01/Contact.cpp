#include "Contact.hpp"

Contact::Contact()
{
	Contact::m_firstName = "";
	Contact::m_lastName = "";
	Contact::m_nickname = "";
	Contact::m_phoneNumber = "";
	Contact::m_secret = "";
}

Contact::~Contact()
{

}

// getters
std::string Contact::get_firstName(){return m_firstName;}
std::string Contact::get_lastName(){return m_lastName;}
std::string Contact::get_nickname(){return m_nickname;}
std::string Contact::get_phoneNumber(){return m_phoneNumber;}
std::string Contact::get_secret(){return m_secret;}

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
