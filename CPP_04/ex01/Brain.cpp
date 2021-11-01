#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++){
		ideas[i] = "idea" + i;
	}
}

Brain::Brain(const Brain &src){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain	&Brain::operator=(const Brain &rhs){
	std::cout << "Brain copy by assignation called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}
