#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain{
public:
	Brain();
	Brain(const Brain &src);
	~Brain();
	Brain	&operator=(const Brain &rhs);
	std::string ideas[100];
};

#endif