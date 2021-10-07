#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include "contact.hpp"

int 	ft_isdigit(int c);
int		check_digit(std::string input);

void	display_info(std::string arg);
void	display_user_info(Contact phone_book);

#endif