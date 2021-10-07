#include "phonebook.hpp"

int ft_isdigit(int c){
	if (c < 49 || c > 57)
		return (1);
	return (0);
}

int		check_digit(std::string input){
	if (input.length() > 1)
		return (1);
	if (ft_isdigit(input[0]) == 1)
		return (1);
	return (0);
}
