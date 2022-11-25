#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

// getters
std::string Contact::GetFirstName() const {return m_firstName;}
std::string Contact::GetLastName() const {return m_lastName;}
std::string Contact::GetNickname() const {return m_nickname;}
std::string Contact::GetPhoneNumber() const {return m_phoneNumber;}
std::string Contact::GetSecret() const {return m_secret;}

// setters
void Contact::SetFirstName(const std::string str) { m_firstName = str; }
void Contact::SetLastName(const std::string str) { m_lastName = str; }
void Contact::SetNickname(const std::string str) { m_nickname = str; }
void Contact::SetPhoneNumber(const std::string str) { m_phoneNumber = str; }
void Contact::SetSecret(const std::string str) { m_secret = str; }
