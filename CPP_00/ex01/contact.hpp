#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact{

public:

	Contact(void);
	~Contact(void);

	void set_first_name(const std::string arg);
	void set_last_name(const std::string arg);
	void set_nickname(const std::string arg);
	void set_phone_number(const std::string arg);
	void set_darkest_secret(const std::string arg);

	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

};

#endif