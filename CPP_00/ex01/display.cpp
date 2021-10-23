#include "phonebook.hpp"

void	display_info(std::string arg){
	if (arg.length() > 10)
		std::cout << std::setw(9) << arg.substr(0, 9) << ".|";
	else
		std::cout <<  std::setw(10) << arg << "|";
}

void	display_user_info(Contact phone_book){
	if (phone_book.get_first_name().length() == 0)
	{
		std::cout << "There is no user at this index" << std::endl;
		return ;
	}
	std::cout << "First name: " << phone_book.get_first_name() << std::endl;
	std::cout << "Last name: " << phone_book.get_last_name() << std::endl;
	std::cout << "Nickname : " << phone_book.get_nickname() << std::endl;
	std::cout << "Phone_number : " << phone_book.get_phone_number() << std::endl;
	std::cout << "Darkest_secret : " << phone_book.get_darkest_secret() << std::endl <<std::endl;
}
