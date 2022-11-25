#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
public:
	Contact();
	~Contact();

	// getters
	std::string GetFirstName() const;
	std::string GetLastName() const;
	std::string GetNickname() const;
	std::string GetPhoneNumber() const;
	std::string GetSecret() const;

	// setters
	void SetFirstName(const std::string);
	void SetLastName(const std::string);
	void SetNickname(const std::string);
	void SetPhoneNumber(const std::string);
	void SetSecret(const std::string);

private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNumber;
	std::string m_secret;
	std::string Truncate(const std::string& str, size_t width);
};

#endif
