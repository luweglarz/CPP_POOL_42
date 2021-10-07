#include "phonebook.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::set_first_name(const std::string arg){
	first_name = arg;
}

void	Contact::set_last_name(const std::string arg){
	last_name = arg;
}

void	Contact::set_nickname(const std::string arg){
	nickname = arg;
}

void	Contact::set_phone_number(const std::string arg){
	phone_number = arg;
}

void	Contact::set_darkest_secret(const std::string arg){
	darkest_secret = arg;
}

std::string	Contact::get_first_name() const{
	return (first_name);
}

std::string	Contact::get_last_name() const{
	return (last_name);
}

std::string	Contact::get_nickname() const{
	return (nickname);
}

std::string	Contact::get_phone_number() const{
	return (phone_number);
}

std::string	Contact::get_darkest_secret() const{
	return (darkest_secret);
}