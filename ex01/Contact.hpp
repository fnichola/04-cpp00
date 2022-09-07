#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
public:
	Contact();
	~Contact();

	// getters
	std::string get_firstName() const;
	std::string get_lastName() const;
	std::string get_nickname() const;
	std::string get_phoneNumber() const;
	std::string get_secret() const;

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
	std::string truncate(const std::string& str, size_t width);
};

#endif
