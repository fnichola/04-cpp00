#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
public:
	Contact();
	~Contact();

	// getters
	std::string get_firstName();
	std::string get_lastName();
	std::string get_nickname();
	std::string get_phoneNumber();
	std::string get_secret();

	// setters
	int set_firstName(const std::string);
	int set_lastName(const std::string);
	int set_nickname(const std::string);
	int set_phoneNumber(const std::string);
	int set_secret(const std::string);

private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNumber;
	std::string m_secret;
};

#endif
