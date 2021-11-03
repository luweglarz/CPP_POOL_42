#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
	_type = "default";
}

Animal::Animal(const Animal &src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(const Animal &rhs){
	std::cout << "Animal copy by assignation called" << std::endl;
	_type = rhs._type;
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const{
	return (_type);
}

void	Animal::makeSound() const{
	std::cout << "Some animal sounds" << std::endl;
}
