#include "contact.hpp"

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

const std::string	Contact::get_first_name(){
	return (first_name);
}

const std::string	Contact::get_last_name(){
	return (last_name);
}

const std::string	Contact::get_nickname(){
	return (nickname);
}

const std::string	Contact::get_phone_number(){
	return (phone_number);
}

const std::string	Contact::get_darkest_secret(){
	return (darkest_secret);
}