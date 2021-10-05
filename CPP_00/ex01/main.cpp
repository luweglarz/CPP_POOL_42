#include "contact.hpp"

void	display_info(std::string arg){
	if (arg.length() > 10)
		std::cout << "|" << std::setw(9) << arg.substr(0, 9) << ".|";
	else
		std::cout << "|" << std::setw(10) << arg << "|";
}

void	add_user(Contact phone_book[8])
{
	static int i = 0;
	std::string input;

	std::cout << "First name: ";
	std::cin >> input;
	phone_book[i].set_first_name(input);
	std::cout << "Last name: ";
	std::cin >> input;
	phone_book[i].set_last_name(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	phone_book[i].set_nickname(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	phone_book[i].set_phone_number(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	phone_book[i].set_darkest_secret(input);
	i++;
}

void	search_user(Contact phone_book[8])
{
	int i = 0;

	std::string column[4] = {
		"index", "first name", "last name", "nickname"
	};
	for (int i = 0; i < 4; i++)
		std::cout << std::setw(10) << column[i] << " ";
	std::cout << std::endl;
	while (phone_book[i].get_first_name() != "")
	{
		std::cout << "|" << std::setw(10) << i << "|";
		display_info(phone_book[i].get_first_name());
		display_info(phone_book[i].get_last_name());
		display_info(phone_book[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
}

int main(void)
{
	std::string input;
	Contact phone_book[8];

	while (1)
	{
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			add_user(phone_book);
		else if (input == "SEARCH")
			search_user(phone_book);
	}
	return (0);
}