#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
	type = "default";
}

Animal::Animal(const Animal &src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(const Animal &rhs){
	std::cout << "Animal copy by assignation called" << std::endl;
	type = rhs.getType();
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor constructor called" << std::endl;
}

std::string	Animal::getType() const{
	return (type);
}

void	Animal::makeSound() const{
	std::cout << "Some animal sounds" << std::endl;
}
