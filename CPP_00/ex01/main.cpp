#include "phonebook.hpp"

void	add_user(Contact phone_book[8]){
	static int i = 0;
	std::string input;

	if (i == 8)
		i = 0;
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

void	search_user_index(Contact phone_book[8]){
	std::string input;

	std::cout << std::endl << "Please enter an user's index: ";
	std::cin >> input;
	std::cout << std::endl;
	while (check_digit(input) != 0)
	{
		std::cout << "Please enter a digit" << std::endl << std::endl;
		std::cout << "Please enter an user's index: ";
		std::cin >> input;
	}
	int i = (int)input[0] - 48 - 1;
	display_user_info(phone_book[i]);
}

void	search_user(Contact phone_book[8]){
	int i = 0;

	std::string column[4] = {
		"index", "first name", "last name", "nickname"
	};
	for (int j = 0; j < 4; j++)
		std::cout << std::setw(10) << column[j] << " ";
	std::cout << std::endl;
	while (phone_book[i].get_first_name() != "")
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		display_info(phone_book[i].get_first_name());
		display_info(phone_book[i].get_last_name());
		display_info(phone_book[i].get_nickname());
		std::cout << std::endl;
		i++;
		if (i > 7)
			break ;
	}
	search_user_index(phone_book);
}

int main(void){
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
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}